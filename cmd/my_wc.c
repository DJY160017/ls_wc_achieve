//
// Created by byrondong on 18-3-22.
//

#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "wc.h"

void my_real_wc(char path[1000][1000], int length) {
    int all_character = 0;
    int all_lines = 0;
    int all_words = 0;
    for (int i = 0; i < length; i++) {
        my_wc(*(path + i), &all_character, &all_lines, &all_words);
    }
    if (length != 0) {
        printf("total_line: %d\t total_word: %d\t total_bytes: %d\n", all_lines, all_words, all_character);
    }
}

void my_wc(char *path, int *all_character, int *all_line, int *all_word) {
    struct stat st;
    if (lstat(path, &st)) {
        printf("FAIL: %s not exist.\n", path);
        exit(-1);
    }
    int characters = 0;
    int lines = 0;
    int words = 0;
    int state = WC_END;
    FILE *file = fopen(path, "r");
    int character;
    while ((character = fgetc(file)) != EOF) {
        characters = characters + 1;
        switch (character) {
            case ' ':
                state = WC_END;
                break;
            case '\n':
                lines = lines + 1;
                state = WC_END;
                break;
            case '\t':
                state = WC_END;
                break;
            default:
                if (state == WC_END) {
                    state = WC_BEGIN;
                    words = words + 1;
                }
                break;
        }
    }
    printf("%d\t%d\t%d\t%s\n", lines, words, characters, path);
    *all_character = (*all_character) + characters;
    *all_line = (*all_line) + lines;
    *all_word = (*all_word) + words;
}