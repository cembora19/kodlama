#include<stdio.h>

int main(){
	
	int i = 5;
	
	int *p = &i;
	
	printf("%p\n",p);
	printf("%u",p);	
	printf("\n%d",*p);
	
	
	return 0;
}


//pointerlar adres bilgisi tutan de�i�kenlerdir.
//"&" de�i�kenin adres bilgisini verir.
//"*" adresteki de�eri verir.
