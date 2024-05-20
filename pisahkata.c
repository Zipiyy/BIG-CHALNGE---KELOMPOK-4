#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

void strtokCharacter(char *nilai, char *kalimat,data datas[])
{
    int i = 0;
    nilai = strtok(kalimat," ");
    while (nilai != NULL){
        // printf("%s\n",nilai);
        strcpy(datas[i].kata,nilai);
        datas[i].skor=calculate_score(nilai);
        datas[i].panjangKata=strlen(nilai);
        nilai = strtok(NULL, " ");
        i++;
    }
    
    
}