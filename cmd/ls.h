//
// Created by byrondong on 18-3-22.
//

#ifndef CMD_LS_H
#define CMD_LS_H

#endif //CMD_LS_H

#define ATTRIBUTES_LENGTH 11

/**
 * 实现ls命令
 *
 * @param opt 参数选项列表
 * @param path 文件路径
 */
void my_ls(const char *opt, char *path);

/**
 * 根据参数选项列表逐一初始化flag
 *
 * @param opt
 */
void initTag(const char *opt);

/**
 * 为需要打印文件信息的属性进行初始化（默认‘-’）
 *
 * @param attributes 文件属性数组
 * @return 初始化是否成功
 */
int init_attributes(char attributes[]);

/**
 * 根据stat像数组中添加需要的属性信息
 *
 * @return 是否成
 */
int get_attributes(struct stat, char *);

/**
 * 打印文件的详细信息
 */
void print_attributes(struct stat);

/**
 * 当有-R选项时调用，递归打印文件信息
 *
 * @param path 当前目录路径
 * @return
 */
int ls_dir_r(char *path);

/**
 * 打印当前目录下的文件和目录信息
 *
 * @param path 当前目录路径
 * @return
 */
int ls_dir(char *path);

/**
 * 打印文件信息
 *
 * @param path
 */
void print_file(char *path);

