#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/*
int main(){

int n;
printf("bir sayi giriniz");
scanf("%d",&n);

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if((i==n/2||j==n/2)||(n%2==0&&(j==n/2-1||i==n/2-1)))
            printf("1");
            else
                printf("0");
    }
    printf("\n");
}



getch();
}
*/
/*
int main(){

int n;
printf("bir sayi giriniz");
scanf("%d",&n);
for(int i=n;i>=2;i--){
    int asal=1;
    for(int j=2;j<i;j++){
        if(i%j==0)
            asal=0;
    }
    if(asal==1){
        printf("%d",i);
    break;
    }
}

}
*/
/*
int main(){

printf("bir sayi giriniz");
int n;
scanf("%d",&n);
int c=0;
for(int i=1;i<n;i=i*2){
    c++;
}
printf("%d",c);
getch();
}
*/
/*
int main(){

int yas=0;
int toplam=0;
int kisi_sayisi=0;

while(yas>=0){
    toplam=toplam+yas;
    kisi_sayisi++;
    printf("ogrencinin yasini giriniz");
    scanf("%d",&yas);
}
kisi_sayisi--;
printf("\nortalama yas: %f",(float)toplam/(float)kisi_sayisi);
getch();

}

*/
/*
int main(){

int n;
printf("matrisin boyutunu giriniz");
scanf("%d",&n);
int a=1;
int b=1;
for(int i=0;i<n;i++){
    int p=a;
    int q=b;
    for(int j=0;j<n;j++){
        int r=p+q;
        printf("%d",p);
        p=q;
        q=r;
    }
    printf("\n");
    int c=a+b;
    a=b;
    b=c;
}

getch();

}

*/
int main(){

int k;
printf("kac asal sayi istiyorsunuz?");
scanf("%d",&k);
int sayac=0;
int n=2;
while(sayac<k){
    int asal=1;
    for(int i=2;i<n;i++){
        if(n%i==0)
            asal=0;
    }
    if(asal==1){
        printf("%d",n);
        sayac++;
    }
    n++;
}
getch();

}




