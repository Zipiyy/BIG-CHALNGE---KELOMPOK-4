#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

int calculate_score(char kalimat) {
    int score = 0;
    if (kalimat == 'a') {
        score = 1;
    } else if (kalimat == 'b') {
        score = 4;
    } else if (kalimat == 'c') {
        score = 3;
    } else if (kalimat == 'd') {
        score = 7;
    } else if (kalimat == 'e') {
        score = 5;
    } else if (kalimat == 'f') {
        score = 6;
    } else if (kalimat == 'g') {
        score = 10;
    } else if (kalimat == 'h') {
        score = 8;
    } else if (kalimat == 'i') {
        score = 5;
    } else if (kalimat == 'j') {
        score = 9;
    } else if (kalimat == 'k') {
        score = 6;
    } else if (kalimat == 'l') {
        score = 9;
    } else if (kalimat == 'm') {
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