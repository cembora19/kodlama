#include<stdio.h>
#include<conio.h>

int main(){

int a[20];
a[0]=1;
a[1]=1;

for(int i=2;i<20;i++){
    a[i]=a[i-1]+a[i-2];

}

for(int i=0;i<20;i++){
    printf("a[%d]=%d\n",i,a[i]);
}


return 0;
}
