#include <stdio.h>
#include <conio.h>

int main(){
    int nilai = 9002;
    int *alamat_salah;
    alamat_salah = &nilai;
    printf("nilainya salah %ld\n",*alamat_salah);
    return 0;
}