/*
#include<stdio.h>


int main(){
	
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *p = sayilar; // int *p = &sayilar[0] same 
	
	printf("%u\n",p);
	printf("%u\n",p+1);
	printf("%u\n",p+2);
	printf("%u\n",p+3);
	
	
	return 0;
}

*/
/*
#include<stdio.h>

int main(){
	
	
	int sayilar[5] = {1,2,3,4,5};
	
	
	int *p = sayilar;
/*	
	printf("%d\n", *+p);
	printf("%d\n",*(p+1));		// *(p+1) ------>  p[1]  || sayilar[1]
	printf("%d\n",*(p+2));
	printf("%d\n",*(p+3));
	printf("%d\n",*(p+4));
	
	
	
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
	printf("%d\n",p[2]);
	printf("%d\n",p[3]);
	printf("%d\n",p[4]);
	
	
	
	return 0;
}

*/

/*

#include<stdio.h>

int max_sayi(int a[],int uzunluk){
	
	
	int max = a[0];
	
	int i;
	
	for(i=1;i<uzunluk;i++){
		
		if(a[i]>max){
			
			max=a[i];
		}
		
		
	}
	
	return max;
	
}


int main(){
	
	int sayilar[5] = {19,24,124,54363,521};
	
	int max = max_sayi(sayilar,5);
	
	printf("Sayilar Dizisinin En Buyuk Elemani : %d",max);
	
	
	
	return 0;
}

*/
#include<stdio.h>

int max_sayi(int *a,int uzunluk){
	
	
	int max = a[0];
	
	int i;
	
	for(i=1;i<uzunluk;i++){
		
		if(a[i]>max){
			
			max=a[i];
		}
		
		
	}
	
	return max;
	
}


int main(){
	
	int sayilar[5] = {19,24,124,54363,521};
	
	int max = max_sayi(sayilar,5);
	
	printf("Sayilar Dizisinin En Buyuk Elemani : %d",max);
	
	
	
	return 0;
}























