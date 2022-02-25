
#include<stdio.h>
#include<stdlib.h>

typedef enum{
kadin, // 0
erkek  // 1
}cinsiyet;

typedef enum{
pazartesi, // 0
sali,  // 1
carsamba,  // 2
persembe, // 3
cuma,
cumartesi,
pazar
}gunler;

typedef struct{
int yas;
char *isim;
cinsiyet c;
gunler tatilgunu;
}insan;

int emeklimi(insan *birey){
    printf("\n %d %u",birey->yas,birey->c);
    fflush(stdout);
    perror("gecti");
    if(birey->c==erkek && birey->yas>55)
        return 1;
    if(birey->c==kadin && birey->yas>50)
        return 1;
        return 0;
}

int main(){
    int a;
    insan ali;
    insan *veli;
    veli=(insan*)malloc(sizeof(insan));
    veli->yas=60;
    veli->c=erkek;
    ali.yas=30;
    ali.c=kadin;
    ali.tatilgunu=persembe;
    printf("alinin yasi:%d %u %u\n",ali.yas,ali.c,ali.tatilgunu);
    printf("velinin yyasi : %d",veli->yas);
    printf("\nali emekli mi %d",emeklimi(&ali));
    printf("\nveli emekli mi %d",emeklimi(veli));
    free(veli);

}



