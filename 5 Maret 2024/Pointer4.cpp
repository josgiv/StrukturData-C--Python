#include <stdio.h>
#include <conio.h>

int main(){
	int a[5] = {1,2,3,4,5};
	int *p;
	p=a;	//reset
	//tampilkan
	for (int i=0;i<5;i++){
		printf("%d", *p);
		p++;
	}

	p=&a[0];	//reset
	//isi elemen
	for(int i=0;i<5;i++){
		*p = i*10;
		p++;
	}

	p=a;	//reset
	//tampilkan
	for(int i=0;i<5;i++){
		printf("%d", *p);
		p++;
	}
	getch();
}