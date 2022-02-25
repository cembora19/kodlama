/* #include <stdio.h>

int a;

void fonk1(void){
	a=20;
}

int main(){
	a=10;
	printf("a=%d\n",a);
	fonk1();
	printf("a=%d\n",a);
	return 0;
}
*/


/*
#include <stdio.h>

int a=10;

void fonk1(void){
	a=40;
	printf("a=%d\n",a);
}

int main(){
	int a=30;
	printf("a=%d\n",a);
	fonk1();
	printf("a=%d\n",a);
	
	return 0;
}

*/
/*
#include <stdio.h>

int sum(int n){
	if(n!=1)
	 return(n+sum(n-1));
	 else
	 return n;			
}

int main(void){
	int N=10;
	printf("sum=%d",sum(N));
	return 0;
}
*/
/*
#include <stdio.h>

int tablo(int x){
	int i;
	if(x<=10){
		for(i=10;i<11;i++)
			printf("%-3d",x*1);
		printf("\n");
		return tablo(x+1);
	}
	else
	return 1;
}

int main(void){
	int x=1;
	tablo(x);
	return 0;
}

*/
/*
#include <stdio.h>

long factorial(long n){
	if(n<=1)
	return 1;
	else
	return(n*factorial(n-1));
}

int main(void){
	int i;
	for(i=0;i<=10;i++){
		printf("%d!=%d\n",i,factorial(i));
	}
	return 0;
}
*/
/*
#include <stdio.h>

long fibonacci(long n){
	if(n==0 || n==1)
	return n;
	else
	return fibonacci(n-1)+fibonacci(n-2);
}

int main(void){
	long i,n;
	printf("how mant fibonacci numbers?:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("fibonacci(%d): %ld\n",i,fibonacci(i));
	}
	
	
	return 0;
}
*/
/*
#include<stdio.h>

void main(){
	int A[10]={8,1,0,3,1,2,0,1,9,1};
	int *m,**k;
	m=A;
	printf("output 1:%d\n",*(m+1));
	*(m+2) +=3;
	m+=4;
	printf("output 2:%d\n",(m+1));
	m=&A[1];
	k=&m;
	printf("output 3: %d\n",*(*(k)+1));
	printf("output 4: %d\n",*k);
	m=m-1;
	printf("output 5: %d\n",*k);
}

*/


#include<stdio.h>

void main(){
	int A[10]={6,1,0,3,1,2,0,1,9,1};
	int *m,**k;
	m=A;
	printf("output 1:%d\n",*(m+1));
	*(m+2) +=3;
	m+=4;
	printf("output 2:%d\n",(m+1));
	m=&A[1];
	k=&m;
	printf("output 3: %d\n",*(*(k)+1));
	printf("output 4: %d\n",*k);
	m=m-1;
	printf("output 5: %d\n",*k);
}



















