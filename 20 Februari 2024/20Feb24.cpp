#include <stdio.h>
#include <stdbool.h>

// Pendeklarasian tipe data baru struct Mahasiswa
typedef struct Mahasiswa {
    char NIM[9];
    char nama[30];
    float ipk;
} Mahasiswa;

int main() {
    // Buat variabel mhs bertipe data Mahasiswa
    Mahasiswa mhs;

    // Input data Mahasiswa
    printf("NIM = ");
    scanf("%s", mhs.NIM);
    printf("Nama = ");
    scanf("%s", mhs.nama);
    printf("IPK = ");
    scanf("%f", &mhs.ipk);

    // Output data Mahasiswa
    printf("Data anda : \n");
    printf("NIM : %s\n", mhs.NIM);
    printf("Nama : %s\n", mhs.nama);
    printf("IPK : %f\n", mhs.ipk);

    // Tunggu input sebelum keluar dari program
    printf("\nPress any key to continue...");
    while (getchar() != '\n'); // Bersihkan buffer input
    getchar(); // Tunggu hingga pengguna menekan tombol Enter
    return 0;
}
