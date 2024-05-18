#include <stdio.h>
#include <string.h>
#ifdef _WIN32
    #include <conio.h>
#endif

int main() {
    #ifdef _WIN32
        system("cls"); // Untuk Windows
    #else
        system("clear"); // Untuk Linux/Unix
    #endif

    int garis = 0;
    int panjang = 0;
    int Kalimat = 0;
    int Kata = 0;
    char namaFile[20];
    char *pecahHuruf;


    //Fungsi 

    //Fungsi

    int Kelompok4;

    // Tampilkan menu masuk
    printf("Selamat Di Big challenge!\n");
    printf("1. Masukukan Data Ke File Bin\n");
    printf("2. Tampilkan Data Dari Bin\n");
    printf("3. Keluar Dari Big Projek\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &Kelompok4);

    // Proses pilihan
    switch (Kelompok4) {
        case 1:
            // Tambahkan kode untuk Opsi 1 di sini
            break;
        case 2:
            // Tambahkan kode untuk Opsi 2 di sini
            break;
        case 3:
            // Tambahkan kode untuk Opsi 3 di sini
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}