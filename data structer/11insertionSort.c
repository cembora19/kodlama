#include<stdio.h>

int main(){

int temp;
int dizi[6]={31,19,8,3,17,14};

for(int i=0;i<6;i++){
    for(int j=i;j>0&&dizi[j]<dizi[j-1];j--){
        temp=dizi[j];
        dizi[j]=dizi[j-1];
        dizi[j-1]=temp;
    }
}

for(int i=0;i<6;i++){
    printf("\n dizi[%d]=%d",i,dizi[i]);
}


return 0;
}
