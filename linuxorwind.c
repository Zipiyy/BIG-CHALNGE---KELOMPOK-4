#include <stdio.h>
#include <stdlib.h>
#include "header.h"

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
    _sleep(2); // Linux
#endif
}