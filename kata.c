#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

int countCharacter(int karakter){
    char huruf;
    FILE * input;
    input = fopen("inputkelompok4.txt","r");
    if(input==NULL){
        printf("Tidak dapat membuka file...");
        exit(1);
    }

    huruf=fgetc(input);
    while(!feof(input)){
        // if(isalpha(huruf)||isdigit(huruf)||huruf==' '||huruf=='\n'){
            karakter++;
        // }
        huruf=fgetc(input);
    }
    fclose(input);
    return karakter;
}