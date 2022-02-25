#include<stdio.h>
#define SIZE 10


int main() {

    int i, gecici, a = 0;
    int sayi[10], tut[10];

    for (i = 0; i < 10; i++) {
        printf("Dizi icin sayi giriniz: ");
        scanf("%d", &tut[i]);
    }

    for (i = 0; i < SIZE; i++)
        if (tut[i] % 2 != 0) {
            sayi[a] = tut[i];
            a++;
        }
    for (i = 0; i < SIZE; i++)
        if (tut[i] % 2 == 0) {
            sayi[a] = tut[i];
            a++;
        }


    for (i = 0; i < SIZE; i++)
        printf("%d. %d\n", i + 1, sayi[i]);



    return 0;
}
