#include <stdio.h>
#include <conio.h>

int main () {
    float nilai,*alamat=&nilai;
    nilai = 25.2;
    printf("nilai %.2f berada di alamat memori %p atau %x dalam hexa\n",nilai,alamat,alamat);
    printf("isi nilai dari pointer alamat adalah %.2f",*alamat);
    getch();
}