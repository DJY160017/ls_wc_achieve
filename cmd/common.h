//
// Created by byrondong on 18-3-22.
//

#ifndef CMD_COMMON_H
#define CMD_COMMON_H

#endif //CMD_COMMON_H

/**
 * 从控制台读取命令
 *
 * @param cmd
 * @param option
 * @param ls_path
 * @param wc_path
 * @param wc_len
 */
void readCmd(char *cmd, char *option, char *ls_path, char wc_path[1000][1000], int *wc_len);

/**
 * 读取ls相关的参数和路径
 *
 * @param option
 * @param path
 */
void readLS(char *option, char *path);

/**
 * 读取wc的全部路径
 *
 * @param path 路径组合
 * @return 数组长度
 */
int readWC(char path[1000][1000]);

/**
 * 判断ls命令是否输入路径，如果没有输入则去除当前工作目录
 *
 * @param old_path
 * @param new_path
 * @param len
 */
void createPath(char *old_path, char *new_path, size_t len);
