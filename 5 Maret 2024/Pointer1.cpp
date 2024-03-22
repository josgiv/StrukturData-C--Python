#include <stdio.h>
#include <conio.h>

int main(){
    int a = 100, b = 123;
    int *p, *q;
    p = &a;
    q = &b;
    printf("nilai yag ditunjuk p = %d di alamat %p\n", *p, p);
    printf("nilai yang ditunjuk q = %d di alamat %p\n", *q, q);
    *q = *p;
    printf("nilai yang ditunjuk p = %d di alamat %p\n", *p, p);
    printf("nilai yang ditunjuk q = %d di alamat %p\n", *q, q);
    getch();
}