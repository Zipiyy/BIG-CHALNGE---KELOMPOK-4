#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "header.h"

//Fungsi Memilih WINDOWS Or Linux 
 
int main() {
    int garis = 0;
    int panjang = 0;
    int karakter = 0;
    int kata=0; 
    FILE *Big;
    char fileName[20];
    char *nilai;

    //Fungsi System
    BersihkanSistem();
    Jeda();

    //Menghitung ada berapa banyak karakter
    karakter = countCharacter(karakter);

    //Menghitung berapa banyak baris
    garis = countLine(garis);

    //Menghitung kalimat tergaris ada pada karakter
    panjang = countLenght(panjang);

    //Mendeklarasikan array kalimat terpanajang
    char kalimat[karakter];

    //Melakuakan Scan //dan memasukkan hasil scan ke aray kalimat
    characterToVariable(garis, panjang, kalimat);

    //menghitung jumlah kata yang sudah di masukkan ke aray kalimat
    kata = countWord(kata,karakter,kalimat);

    //mendeklarasikan struct data dengan array sebanyak jumlah kata
    data datas[kata];

    //tokenisasi dan memanksukkan hasil token ke data struct
    strtokCharacter(nilai, kalimat,datas);

    //bubblesort
    bubbleSort(datas,kata);

    int Kelompok4;
    // Tampilkan menu masuk
    int Answer;
do {    
    BersihkanSistem();
    printf("=====------- Selamat Datang Di Big Challenge -------=====\n");
    printf(" Sebelum Memulai, Silahkan input nama file ( File.txt )\n\n");
    printf(" |                   [1] Input file text                |\n");
    printf(" |                   [2] exit                           |\n\n");
    printf("========------- BIG CHALLENGE KELOMPOK 4 --------========\n");
    printf(" Pilihan Anda (1/2) : ");
    scanf("%d", &Kelompok4);

    if (Kelompok4 == 1) {
        int Berhasil = 0;
        BersihkanSistem();
        printf(" Masukkan nama file input ( File.txt ) : ");
        scanf("%s", fileName);
        Big = fopen(fileName, "r");

        if (Big == NULL) {
            printf(" File tidak ditemukan, Mohon tunggu ...\n");
            Jeda();
        } else {
            do {
                printf("========-------- BIG CHALLENGE KELOMPOK 4 --------========\n");
                printf("|                Selamat Di Big challenge!                |\n");
                printf("|              1. Masukan Data Ke File Bin                |\n");
                printf("|              2. Tampilkan Data Dari Bin                 |\n");
                printf("|              3. Keluar Dari Big challenge               |\n");
                printf("========-----------CLOSE THE PROGRAM -------------========\n");
                printf(" Masukan Pilihan opsi anda :");
                scanf("%d", &Kelompok4);

                // Proses pilihan
                if (Kelompok4 == 1) {
                    system("cls");
                    writeToBinary(datas, kata);
                    break;
                } else if (Kelompok4 == 2) {
                    system("cls");
                    printf("\nPilihlah nomor 1 terlebih dahulu\n\n");
                    break;
                } else if (Kelompok4 == 3) {
                    exit(1);
                } else {
                    system("cls");
                    printf("Selamat Datang di BIG CHALLENGE\n");
                    printf("Pilihan Kamu tidak valid!!\nSilahkan pilih Ulang");
                }
            } while (1);

            result hasil[kata];
            do {
                printf("\n\n");
                printf("=====-------- BIG CHALLENGE KELOMPOK 4 --------========|\n");
                printf("|           [1] Masukan Data ke File Bin               |\n");
                printf("|           [2] Tampilkan Data Dari Bin                |\n");
                printf("|           [3] Keluar Dari Program                    |\n");
                printf("======-----------CLOSE THE PROGRAM -------------=======|\n");
                printf(" Masukan Pilihan opsi anda :");
                scanf("%d", &Kelompok4);

                // memasukkan data ke file binary
                if (Kelompok4 == 1) {
                    writeToBinary(datas, kata);
                }
                //membaca file binary dan menampilkan hasil bacaannya
                else if (Kelompok4 == 2) {
                    readBinary(hasil, kata);
                }
                //maka akan keluar dari program
                else if (Kelompok4 == 3) {
                    exit(1);
                }
                //jika user memilih angka yang bukan tertera di menu, maka program akan meminta input ulang
                else {
                    system("cls");
                    printf("Pilihan kamu tidak valid !!!\n Silahkan pilih Ulang\n");
                }
            } while (Kelompok4 == 1 || Kelompok4 == 2 || Kelompok4 == 3); //akan melakukan perulangan jika user memilih 1-3

            return 0;
            }
        }
    } while (Kelompok4 !=2); // Perulangan utama

    return 0;

    }