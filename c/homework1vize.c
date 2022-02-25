#include<stdio.h>
#include<conio.h>
#include<time.h>
int x,y,r,i,array[20],s;
int sum(int a){
	for(i=1;i<=10;i++){
		s=s+array[i];
	}
	return s;
}
main(){
	srand(time(NULL));
	for(i=1;i<=10;i++){
		r=1+rand()%20;
		array[i]=r;
	}
	for(i=1;i<=10;i++){
		printf("Array[%d]	= %d\n",i,array[i]);
	}
	printf("Sum = %d",sum(10));
}
