#include<stdio.h>
#include<stdlib.h>
int *dizi=NULL;
int *dizi2;
int sira=0;
int sirabasi=0;
int boyut=2;
int i;
 int deque(){
 	if(sira==sirabasi){
 		printf("sira bos");
 		return -1;
	 }
	 if(sira-sirabasi<=boyut/4){
	 	int *dizi2=(int*)malloc(sizeof(int)*boyut/2);
	 	for(i=0;i<sira-sirabasi;i++){
	 		dizi2[i]=dizi[i+sirabasi];
		 }
		sira-=sirabasi;
		sirabasi=0;
		free(dizi);
		dizi=dizi2;
		boyut/=2;
	 }
	 return dizi[sirabasi++];
 }
 void enque(int a){
 	if(dizi==NULL){
 		dizi=(int*)malloc(sizeof(int)*2);
	 }
	 if(sira>=boyut){
	 	boyut*=2;
	 	int *dizi2=(int*)malloc(sizeof(int)*boyut);
	 	for(i=0;i<boyut/2;i++){
	 		dizi2[i]=dizi[i];
		 }
		 free(dizi);
		 dizi=dizi2;
	 }
	 dizi[sira++]=a;
 }
 int main(){
 	for(i=0;i<20;i++){
 		enque(i*10);
	 }
	 for(i=0;i<13;i++){
	 	printf("%d ",deque());
	 }
 	for(i=0;i<20;i++){
 		enque(i*10);
	 }	 
	 for(i=0;i<30;i++){
	 	printf("%d ",deque());
	 }	 
 }
