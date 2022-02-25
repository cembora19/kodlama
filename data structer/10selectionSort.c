#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

int min,temp;
int dizi[6]={31,19,8,3,17,6};

for(int i=0;i<6;i++){
    min=i;
    for(int j=i;j<6;j++){
        if(dizi[j]<dizi[min]){
            min=j;
        }
    }
    temp=dizi[i];
    dizi[i]=dizi[min];
    dizi[min]=temp;
}

for(int i=0;i<6;i++){
    printf("\n dizi[%d]=%d",i,dizi[i]);
}


return 0;
}
