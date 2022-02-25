#include<stdio.h>
#include<stdbool.h>


int main() {

	int i, sayi, toplam = 0;

	for (i = 0; true; i++) {

		printf("Bir sayi giriniz(-1 ile cikabilirsiniz):");

		scanf_s("%d", &sayi);

		if (sayi==-1)
		{
			break;
		}

		toplam += sayi;

	}

	printf("Girdiginiz sayilarin toplami : %d", toplam);


	return 0;
}
