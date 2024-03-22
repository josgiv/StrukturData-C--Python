#include <stdio.h>
#include <conio.h>

int main (){
    int *p,a=20,b;
    p = &a;
    b = *p;
    printf("nilai a = %d di alamat %p\n",a,p);
    printf("nilai b = %d di alamat %p\n",b,p);
    getch();
}