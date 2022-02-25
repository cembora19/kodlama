#include<stdio.h>


int main() {

	int note;

	printf("Notunuzu giriniz:");
	scanf_s("%d", &note);

	if (note >= 65) {


		printf("Dersten gectiniz.");


	}

	else {

		printf("Tekrar deneyiniz.");

	}


	return 0;
}
