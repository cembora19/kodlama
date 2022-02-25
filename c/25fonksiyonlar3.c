#include<stdio.h>

int asal_mi(int sayi) {

	int i;

	for (i = 2; i < sayi; i++) {

		if (sayi % i == 0) {

			return 0;

		}

	}

	return 1;

}


int main() {

	int n;

	printf("Bir sayi giriniz : ");
	scanf_s("%d", &n);

	if (asal_mi(n)==0) {

		printf("Girdiginiz sayi asal degildir.");

	}

	else {

		printf("Girdiginiz sayi asal sayidir.");

	}



	return 0;
}
