#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

int countWord(int kata, int karakter, char *kalimat){
    for (int i = 0; i < karakter; i++){
        if (kalimat[i] == ' '){
            kata++;
            if(kalimat[i+1]==' '){
                ++i;
                if(kalimat[i+1]==' '){
                    ++i;
                }
            }
        }
    }

    kata+=1;

    return kata;
}