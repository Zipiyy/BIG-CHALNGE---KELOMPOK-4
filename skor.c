#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

int calculate_score(char * nilai) {
    int score = 0;

    while (*nilai != '\0') {
        if (*nilai == 'a') {
            score += 1;
        } else if (*nilai == 'b') {
            score += 4;
        } else if (*nilai == 'c') {
            score += 3;
        } else if (*nilai == 'd') {
            score += 7;
        } else if (*nilai == 'e') {
            score += 5;
        } else if (*nilai == 'f') {
            score += 6;
        } else if (*nilai == 'g') {
            score += 10;
        } else if (*nilai == 'h') {
            score += 8;
        } else if (*nilai == 'i') {
            score += 5;
        } else if (*nilai == 'j') {
            score += 9;
        } else if (*nilai == 'k') {
            score += 6;
        } else if (*nilai == 'l') {
            score += 9;
        } else if (*nilai == 'm') {
            score += 8;
        } else if (*nilai == 'n') {
            score += 12;
        } else if (*nilai == 'o') {
            score += 10;
        } else if (*nilai == 'p') {
            score += 11;
        } else if (*nilai == 'q') {
            score += 15;
        } else if (*nilai == 'r') {
            score += 13;
        } else if (*nilai == 's') {
            score += 10;
        } else if (*nilai == 't') {
            score += 14;
        } else if (*nilai == 'u') {
            score += 12;
        } else if (*nilai == 'v') {
            score += 15;
        } else if (*nilai == 'w') {
            score += 15;
        } else if (*nilai == 'x') {
            score += 14;
        } else if (*nilai == 'y') {
            score += 18;
        } else if (*nilai == 'z') {
            score += 16;
        }
        nilai++; // Maju ke karakter berikutnya
    }

    return score;
}
