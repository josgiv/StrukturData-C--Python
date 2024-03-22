#include <stdio.h>
#include <conio.h>

int main (){
    float y,*x1,*x2;
    y = 80.96;
    x1 = &y;
    x2 = x1;	//operasi pemberian nilai
    printf("nilai y yang ditunjuk oleh x1 adalah %2.2f di alamat %p\n",y,&y);
    printf("nilai y yang ditunjuk oleh x2 adalah %2.2f di alamat %p\n",*x2,x2);
    getch();
}