//
// Created by byrondong on 18-3-22.
//
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <grp.h>
#include <pwd.h>
#include <time.h>
#include "ls.h"

int flag_l = 0;
int flag_d = 0;
int flag_i = 0;
int flag_a = 0;
int flag_R = 0;

void my_ls(const char *opt, char *path) {
    struct stat st;
    if (lstat(path, &st)) {
        printf("FAIL: %s not exist.\n", path);
        exit(-1);
    }
    initTag(opt);

    //如果有-d，直接显示该目录
    if (flag_d) {
        if (flag_i) {
            printf("%lu ", st.st_ino);
        }
        if (flag_l) {
            print_attributes(st);
        }
        printf(" %s\n", path); //the content of -d
        exit(-1);
    }

    //没有-d,则判断是否为目录文件
    if (S_ISDIR(st.st_mode)) { //如果path为目录
        if (flag_R) { //列出所有目录&子目录
            ls_dir_r(path);
            //ls_dir_test(path);
        } else {
            strcat(path, "/");
            ls_dir(path);
        }
    } else if (S_ISREG(st.st_mode)) { //普通文件
        print_file(path);
    } else {
        printf("%s is not a ordinary file or directory!", path);
    }
}

void initTag(const char *opt) {
    int i = 0;
    while (opt[i] != '\0') {
        char tag = opt[i];
        switch (tag) {
            case 'l':
                flag_l = 1;
                break;
            case 'd':
                flag_d = 1;
                break;
            case 'R':
                flag_R = 1;
                break;
            case 'a':
                flag_a = 1;
                break;
            case 'i':
                flag_i = 1;
                break;
            default:
                printf("cannot resolve the option %c...", tag);
                break;
        }
        i++;
    }
}

int ls_dir_r(char *path) {
    DIR *dp = opendir(path);
    if (dp == NULL) {
        printf("open dir %s error", path);
        exit(-1);
    }

    printf("%s\n", path);
    strcat(path, "/");
    ls_dir(path);

    //遍历该目录下的子目录
    struct dirent *dir;
    while ((dir = readdir(dp)) != NULL) {
        if ((strcmp(dir->d_name, ".") == 0) || (strcmp(dir->d_name, "..") == 0)) {
            continue;
        }
        if (dir->d_type == 4) { // 4 表示为目录类型，8 表示为文件类型
            char temp[200];
            strcpy(temp, path);
            strcat(temp, dir->d_name);
            //遍历该子目录
            if (dir->d_name[0] == '.') {
                if (flag_a) {
                    ls_dir_r(temp);
                }
            } else {
                ls_dir_r(temp);
            }
        } else {
            continue;
        }

    }
    closedir(dp);
    return 0;
}

int ls_dir(char *path) {
    struct stat st;
    if ((lstat(path, &st))) {
        printf("File %s not found\n", path);
        exit(-1);
    }

    DIR *dp = opendir(path);
    if (dp == NULL) {
        printf("open dir %s error\n", path);
        exit(-1);
    }

    int index = 0;
    int blocks = 0;
    char file_names[256][300];
    size_t len = strlen(path);

    struct dirent *dir; // 获取目录下所有文件名
    while ((dir = readdir(dp)) != NULL) {
        if (flag_R) { //may use in the ls_dir_r
            if (dir->d_type == 8) {
                strncpy(file_names[index], path, len);
                file_names[index][len] = '\0';
                strcat(file_names[index], dir->d_name); //获取全路径
                if (flag_l) {
                    struct stat sub_st;
                    lstat(file_names[index], &sub_st);
                    blocks += sub_st.st_blocks; //记录总用量
                }
                index++;
            }
        } else {
            strncpy(file_names[index], path, len);
            strcat(file_names[index], dir->d_name); //获取全路径
            if (flag_l) {
                struct stat sub_st;
                lstat(file_names[index], &sub_st);
                blocks += sub_st.st_blocks; //记录总用量
            }
            index++;
        }
    }
    closedir(dp);

    if (flag_l) {//如果有-l，输出total
        printf("total: %d\n", blocks);
    }

    int i;
    for (i = 0; i < index; i++) {
        print_file(file_names[i]);
    }
    return 0;
}

void print_file(char *path) {
    struct stat st;
    if (lstat(path, &st)) {
        printf("FAIL: %s not exist.\n", path);
        exit(-1);
    }

    char name[100];
    int i;
    int j;
    for (i = 0, j = 0; i < strlen(path); i++) {
        if (path[i] == '/') {
            j = 0;
        } else {
            name[j] = path[i];
            j++;
        }
    }
    name[j] = '\0';

    if (name[0] == '.') { //隐藏文件
        if (flag_a) {
            if (flag_i) {
                printf("%lu ", st.st_ino);
            }
            if (flag_l) {
                print_attributes(st);
            }
            printf("%s\n", name);
        }
    } else { //普通文件
        if (flag_i) {
            printf("%lu ", st.st_ino);
        }
        if (flag_l) {
            print_attributes(st);
        }
        printf("%s\n", name);
    }
}

void print_attributes(struct stat st) {
    char attributes[ATTRIBUTES_LENGTH];
    init_attributes(attributes);
    get_attributes(st, attributes);

    char *grp_name;
    char *pw_name;
    char buf_time[32];
    grp_name = getgrgid(st.st_gid)->gr_name; //根据uid，gid获得文件所有者的用户名、组名
    pw_name = getpwuid(st.st_uid)->pw_name;
    strcpy(buf_time, ctime(&st.st_mtime)); //将格林位置时间转化成正常时间格式
    buf_time[strlen(buf_time) - 1] = 0;

    //ls -l content
    printf("%-s %lu %-8s %-8s %li %s ", attributes, st.st_nlink, pw_name, grp_name, st.st_size, buf_time);
}

int init_attributes(char attributes[]) {
    if (attributes == NULL) return -1;
    int i = 0;
    while (i < (ATTRIBUTES_LENGTH - 1)) {
        attributes[i] = '-';
        ++i;
    }
    attributes[ATTRIBUTES_LENGTH - 1] = '\0';
    return 0;
}

int get_attributes(struct stat st, char attributes[]) {

    switch (st.st_mode & S_IFMT) { //判断文件类型
        case S_IFSOCK:
            attributes[0] = 's';
            break;
        case S_IFREG:
            attributes[0] = '-';
            break;
        case S_IFBLK:
            attributes[0] = 'b';
            break;
        case S_IFCHR:
            attributes[0] = 'c';
            break;
        case S_IFDIR:
            attributes[0] = 'd';
            break;
        case S_IFIFO:
            attributes[0] = 'p';
            break;
        case S_IFLNK:
            attributes[0] = 'l';
            break;
        default:
            break;
    }


    if (S_IRUSR & st.st_mode) { //文件属性
        attributes[1] = 'r';
    }
    if (S_IWUSR & st.st_mode) {
        attributes[2] = 'w';
    }
    if (S_IXGRP & st.st_mode) {
        attributes[3] = 'x';
    }
    if (S_IRGRP & st.st_mode) {
        attributes[4] = 'r';
    }
    if (S_IWGRP & st.st_mode) {
        attributes[5] = 'w';
    }
    if (S_IXGRP & st.st_mode) {
        attributes[6] = 'x';
    }
    if (S_IROTH & st.st_mode) {
        attributes[7] = 'r';
    }
    if (S_IWOTH & st.st_mode) {
        attributes[8] = 'w';
    }
    if (S_IXOTH & st.st_mode) {
        attributes[9] = 'x';
    }
    return 0;
}
