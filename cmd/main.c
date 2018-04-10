#include <stdio.h>
#include <string.h>
#include "common.h"
#include "ls.h"
#include "wc.h"


int main() {
    char cmd[1000];
    char option[1000];
    char ls_path[1000];
    char wc_path[1000][1000];
    int wc_len = 0;
    readCmd(cmd, option, ls_path, wc_path, &wc_len);
    if (strcmp(cmd, "ls") == 0) {
        char real_path[1000];
        createPath(ls_path, real_path, 1000);
        my_ls(option, real_path);
    } else {
        my_real_wc(wc_path, wc_len);
    }
}