#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	
	int i, sayi;
	int a[365];
	
	for(i=-19;i<40;i++){
		
		sayi=rand()%40 - 20;
		a[365]=sayi;
		
	}

printf("%d",sayi);

	
	
	
	return 0;
}
