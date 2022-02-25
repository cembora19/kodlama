#include<stdio.h>
#include<stdlib.h>
int *dizi;
int *dizi2;
int tepe=0;
int boyut=2;
int i;
int pop(){
	if(tepe<=boyut/4){
		dizi2=(int*)malloc(sizeof(int)*boyut/2);
		for(i=0;i<tepe;i++){
			dizi2=dizi;
		}
		free(dizi);
		dizi=dizi2;
		boyut/=2;
	}
	return dizi[--tepe];
}
void push(int a){
	if(tepe>=boyut){
		dizi2=(int*)malloc(sizeof(int)*boyut*2);
		for(i=0;i<tepe;i++){
			dizi2[i]=dizi[i];
		}
		free(dizi);
		dizi=dizi2;
		boyut*=2;
	}
	dizi[tepe++]=a;
}
void bastir(){
	printf("boyut : %d.  ",boyut);
	for(i=0;i<tepe;i++){
		printf("%d ",dizi[i]);
	}
}
int main(){
	dizi=(int*)malloc(sizeof(int)*2);
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	bastir();
	printf("popped %d",pop());
	printf("popped %d",pop());	
	printf("popped %d",pop());	
	printf("popped %d",pop());	
	printf("popped %d",pop());	
	bastir();
	for(i=1;i<11;i++){
		push(i*10);
	}
	bastir();
}
