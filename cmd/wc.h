//
// Created by byrondong on 18-3-22.
//

#ifndef CMD_WC_H
#define CMD_WC_H

#endif //CMD_WC_H

#define WC_BEGIN 1
#define WC_END 0

/**
 * 解析路径组合
 *
 * @param path 路径数组
 * @param length 数组长度
 */
void my_real_wc(char path[1000][1000], int length);

/**
 * 具体实现wc功能
 *
 * @param path 单个文件路径
 * @param all_character 字节数总和
 * @param all_line 行数总和
 * @param all_word 单词数总和
 */
void my_wc(char *path, int *all_character, int *all_line, int *all_word);