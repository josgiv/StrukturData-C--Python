#include <stdio.h>
#include <conio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int *p;
    p=a;
    printf("p pertama : %d\n", *p);

    p = a+1;
    printf("p berikutnya : %d\n", *p);

    p = a+2;
    printf("p berikutnya : %d", *p);

    getch();
}