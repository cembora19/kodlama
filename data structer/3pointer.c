#include<stdio.h>
#include<stdlib.h>

int main(){

int boyut;
printf("dizinin buyuklugunu giriniz: ");
scanf("%d", &boyut);

int *p;
p=(int*) malloc(boyut*sizeof(int));
int s;
for(s=0;s<boyut;s++){
 p[s]=s*5;
}
for(s=0;s<boyut;s++){
    printf("p[%d]=%d\n",s,p[s]);
}

free(p);


return 0;
}
