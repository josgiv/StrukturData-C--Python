#include <stdio.h>
#include <stdint.h>

int main() {
    char *alamat_x;
    char X;
    X = 'D';
    alamat_x = &X;
    printf("X, yaitu %c, disimpan pada alamat %p atau %llx dalam hexa", X, (void*)alamat_x, (uintptr_t)alamat_x);
    getchar(); // Menunggu pengguna menekan tombol Enter sebelum menutup program
    return 0;
}
