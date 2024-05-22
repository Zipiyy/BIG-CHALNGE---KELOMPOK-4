#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int countLenght(int panjang){
    int n=0;
    char huruf;
    char * sementara;
    FILE * input;
    input = fopen("input.txt","r");

    if(input==NULL){
        printf("Tidak bisa membuka file...");
        exit(1);
    }
    huruf=fgetc(input);
    while(!feof(input)){
        if(huruf=='\n'){
            ++n;
            if(n>panjang){
            panjang=n;   
            }
            n=0;
            huruf=fgetc(input);
        }
        n++;
        huruf=fgetc(input);
        if(huruf==EOF){
            if(n>panjang){
                panjang=n;
            }
        }
    }

    fclose(input);
    return (panjang);
}