#include <cstdio>
#include <cstring>

const int MAX_MHS = 250; // Konstanta untuk ukuran maksimum data mahasiswa

// Struct definition
struct Mahasiswa
{
    char Name[20]; // Memperluas ukuran array untuk menampung nama yang lebih panjang
    int Age;
};

// Array untuk menyimpan data mahasiswa
Mahasiswa DataMhs[MAX_MHS];

int main()
{
    // Inisialisasi data
    strcpy(DataMhs[0].Name, "Doraemon"); // Mengubah indeks array menjadi 0
    DataMhs[0].Age = 19;

    // Mengakses dan mencetak data
    printf("Name: %s\n", DataMhs[0].Name);
    printf("Age: %d\n", DataMhs[0].Age);

    return 0;
}
