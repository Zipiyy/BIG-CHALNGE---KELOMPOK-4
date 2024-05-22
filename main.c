#include <stdio.h>
#include <stdlib.h>
#include "header.h"

//Fungsi Memilih WINDOWS Or Linux 
 void BersihkanSistem();
    void Jeda();


int main() {
    int garis = 0;
    int panjang = 0;
    int karakter = 0;
    int kata=0; 
    char fileName[20];
    char *nilai;

    

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
        printf("========-------- BIG CHALLENGE KELOMPOK 4 --------========\n");
        printf("|              Selamat Di Big challenge!                 |\n");
        printf("|            1. Masukukan Data Ke File Bin               |\n");
        printf("|            2. Tampilkan Data Dari Bin                  |\n");
        printf("|            3. Keluar Dari Big challenge                |\n");
        printf("|               Masukkan pilihan Anda:                   |\n");
        printf("========-----------CLOSE THE PROGRAM -------------========\n");
        scanf("%d", &Kelompok4);

        // Proses pilihan
        if (Kelompok4 == 1) {
            system("cls");
            writeToBinary(datas,kata);
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
        printf("|            [1] Masukkan Data ke File Binary          |\n");
        printf("|            [2] Tampilkan Data Dari Binary            |\n");
        printf("|            [3] Keluar Dari Program                   |\n");
        printf("|               Silahkan Pilih Menu =>                 |\n");
        printf("======-----------CLOSE THE PROGRAM -------------=======|\n");
        scanf("%d",&Kelompok4);

        // memasukkan data ke file binary
        if(Kelompok4==1) {
            writeToBinary(datas,kata);
        }
        //membaca file binary dan menampilkan hasil bacaannya
        else if(Kelompok4==2) {
            readBinary(hasil,kata);
        }
        //maka akan keluar dari program
        else if(Kelompok4==3) {
            exit(1);
        }
        //jika user memilih angka yang bukan tertera di menu, maka program akan meminta input ulang
        else {
            system("cls");
            printf("Pilihan kamu tidak valid !!!\n Silahkan pilih Ulang\n");
        }
    } while(Kelompok4==1 || Kelompok4==2|| Kelompok4==3); //akan melakukan perulangan jika user memilih 1-3

    return 0;
}