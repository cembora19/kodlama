#include<stdio.h>

int main() {

	int vize1, vize2, final;
	float dersort, ortalama;

	printf("1. vize notunuzu giriniz.");
	scanf_s("%d", &vize1);
	printf("2. vize notunuzu giriniz.");
	scanf_s("%d", &vize2);
	printf("Final notunuzu giriniz.");
	scanf_s("%d", &final);
	printf("Universite ortalamanizi giriniz.");
	scanf_s("%f", &ortalama);

	dersort = (vize1 * 2 / 10 + vize2 * 3 / 10 + final * 5 / 10.0);

	if (dersort > 65) {

		printf("Dersten gectiniz.");
	}

	else if (dersort > 50) { // (dersort > 50 && dersort<60) güzel görünüyor o yüzden ekleyebilirsin.

		printf("Vizelere kaldiniz.\n");


		if (ortalama < 2.5) {
			printf("Butu gecsen bile dersi seneye alki ortalaman dusmesin.");
		}
	}
	
	else
	{
		printf("Dersten kaldiniz.");
	}

	


	return 0;
	// if-else-if else sonrasý tek satýr yazýyorsak süslü paranteze gerek kalmýyor.
}
