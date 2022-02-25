#include<stdio.h>


int main() {

	int i;
	float toplam = 0.0;
	float sayilar[5];


	for (i = 0; i < 5; i++) {

		printf("Aritmatik ortalamasini hesaplamak istediginiz sayiyi giriniz.");
		scanf_s("%f", &sayilar[i]);

	}

	for (i = 0; i < 5; i++) {

		toplam += sayilar[i];

	}

	printf("Girdiginiz sayilarin aritmatik ortalamasi %.2f dir.", toplam/5);

	return 0;
}
