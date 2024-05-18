#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

int calculate_score(char character) {
    int score = 0;
    if (character == 'a') {
        score = 1;
    } else if (character == 'b') {
        score = 4;
    } else if (character == 'c') {
        score = 3;
    } else if (character == 'd') {
        score = 7;
    } else if (character == 'e') {
        score = 5;
    } else if (character == 'f') {
        score = 6;
    } else if (character == 'g') {
        score = 10;
    } else if (character == 'h') {
        score = 8;
    } else if (character == 'i') {
        score = 5;
    } else if (character == 'j') {
        score = 9;
    } else if (character == 'k') {
        score = 6;
    } else if (character == 'l') {
        score = 9;
    } else if (character == 'm') {
        score = 8;
    } else if (character == 'n') {
        score = 12;
    } else if (character == 'o') {
        score = 10;
    } else if (character == 'p') {
        score = 11;
    } else if (character == 'q') {
        score = 15;
    } else if (character == 'r') {
        score = 13;
    } else if (character == 's') {
        score = 10;
    } else if (character == 't') {
        score = 14;
    } else if (character == 'u') {
        score = 12;
    } else if (character == 'v') {
        score = 15;
    } else if (character == 'w') {
        score = 15;
    } else if (character == 'x') {
        score = 14;
    } else if (character == 'y') {
        score = 18;
    } else if (character == 'z') {
        score = 16;
    }

    return score;
}

int main() {
    char word[100];
    int total_score = 0;

    printf("Masukkan kata: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++) {
        word[i] = tolower(word[i]);
        total_score += calculate_score(word[i]);
    }

    printf("Total skor dari kata %s adalah %d\n", word, total_score);

    return 0;
}