#ifndef HEADER_H
#define HEADER_H

typedef struct dataMentah
{
    double skor;
    char kata[50];
    int panjangKata;

} data;

typedef struct dataHasil{
    double skor;
    char kata[50];
    int panjangKata;
} result;

int countCharacter(int);
int countLine(int);
int countLenght(int);
void characterToVariable(int, int, char *);
void strtokCharacter(char* token, char* kalimat, data* datar);
int countWord(int ,int ,char *);
int calculate_score(char *);
void bubbleSort(data datas[],int );
void selectionSort(data datas[],int );
void writeToBinary(data datas[],int );
void readBinary(result hasil[],int );
void Clear_System();

#endif