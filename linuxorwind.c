#include <stdio.h>
#include <stdlib.h>
#include "header.h"



#ifdef _WIN32
    #include <windows.h>
#else 
    #include <unistd.h>
#endif


void BersihkanSistem() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void Jeda() {
#ifdef _WIN32
    Sleep(2000); // Windows
#else
    sleep(2); // Linux
#endif
}