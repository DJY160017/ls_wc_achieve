//
// Created by byrondong on 18-3-22.
//
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

int flag_cmd = 0;
int flag_opt = 0;
int flag_path = 0;

void readCmd(char *cmd, char *option, char *ls_path, char wc_path[1000][1000], int *wc_len) {
    char current;

    //read the cmd ls or wc
    int i = 0;
    current = (char) getchar();
    while (current != ' ' & current != '\n') {
        cmd[i] = current;
        i++;
        current = (char) getchar();
        flag_cmd = 1;
    }
    cmd[i] = '\0';
    if (flag_cmd == 0) {
        printf("Please input the cmd....\n");
        exit(-1);
    }
    ungetc(current, stdin);

    //read option -l -d -a -i -R
    if (strcmp(cmd, "ls") == 0) {
        readLS(option, ls_path);
    } else {
        int length = readWC(wc_path);
        *wc_len = length;
    }
}

void readLS(char *option, char *path) {
    char current = (char) getchar();
    if (current == '\n') {
        printf("Please input the option....\n");
        exit(-1);
    }
    current = (char) getchar();
    int i = 0;
    while (current == '-') {
        current = (char) getchar();
        option[i] = current;
        i++;
        flag_opt = 1;
        current = (char) getchar();
        if (current == ' ') {
            current = (char) getchar(); // get char again to judge it is '-'
        } else if (current == '\n') {
            option[i] = '\0';
            return;
        }
    }

    if (flag_opt == 0) {
        printf("Please input the option....\n");
        exit(-1);
    }

    //read the path
    i = 0;
    while (current != '\n') {
        path[i] = current;
        i++;
        current = (char) getchar();
        flag_path = 1;
    }
    path[i] = '\0';
}

int readWC(char path[1000][1000]) {
    char current = (char) getchar();
    if (current == '\n') {
        printf("Please input the filename....\n");
        exit(-1);
    }

    current = (char) getchar();
    int i = 0;
    while (current != '\n') {
        int j = 0;
        char temp[1000];
        while (current != ' ' && current != '\n') {
            temp[j] = current;
            current = (char) getchar();
            j++;
        }
        temp[j] = '\0';
        strcpy(path[i], temp);
        i++;
        if (current != '\n') {
            current = (char) getchar();
        } else {
            break;
        }
    }
    return i;
}

void createPath(char *old_path, char *new_path, size_t len) {
    if (flag_path == 0) {
        getcwd(new_path, len);
    } else {
        strcpy(new_path, old_path);
    }
}


