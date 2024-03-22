#include <stdio.h>
#include <conio.h>

int main(){
    int a, *p;
    p=&a;
    *p=180;
    printf("nilai a = %d",a);
    getch();
}