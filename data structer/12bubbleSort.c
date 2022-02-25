#include<stdio.h>

int main(){

int dizi[6]={31,19,8,3,17,14};
for(int adim=1;adim<6;adim++){
    for(int j=0;j<6-adim;j++){
        if(dizi[j]>dizi[j+1]){
            int temp=dizi[j];
            dizi[j]=dizi[j+1];
            dizi[j+1]=temp;
        }
    }
}

for(int i=0;i<6;i++){
    printf("\ndizi[%d]=%d",i,dizi[i]);
}

return 0;
}
