#include<stdio.h>

int main() {

	int vize1, vize2, final;
	float dersort, okulortalama;

	printf("1. vize notunuzu giriniz:");
	scanf_s("%d", &vize1);
	printf("2. vize notunuzu giriniz:");
	scanf_s("%d", &vize2);
	printf("Final notunuzu giriniz:");
	scanf_s("%d", &final);
	printf("Universite ortalamanizi giriniz:");
	scanf_s("%f", &okulortalama);

	dersort = (vize1 * 3 / 10 + vize2 * 3 / 10 + final * 4 / 10);

	if (dersort >= 90) {

		printf("Harf Notunuz: AA ve Ders Ortalamaniz : %f", dersort);
	}

	else if (dersort >= 85 && dersort < 90) {
		printf("Harf Notunuz: BA ve Ders Ortalamaniz : %f", dersort);

	}

	else if (dersort >= 80 && dersort < 85) {
		printf("Harf Notunuz: BB ve Ders Ortalamaniz : %f", dersort);

	}

	else if (dersort >= 75 && dersort < 80) {
		printf("Harf Notunuz: CB ve Ders Ortalamaniz : %f", dersort);

	}

	else if (dersort >= 70 && dersort < 75) {
		printf("Harf Notunuz: CC ve Ders Ortalamaniz : %f\n", dersort);

		if (okulortalama<2.5)
		{
			printf("Dersi seneye alttan alirsan ortalamani yukseltmen icin iyi bir firsat olur.");
		}

	}

	else if (dersort >= 65 && dersort < 70) {
		printf("Harf Notunuz: DC ve Ders Ortalamaniz : %f\n", dersort);

		if (okulortalama<2.5)
		{
			printf("Dersi seneye alttan alirsan ortalamani yukseltmen icin iyi bir firsat olur.");
		}
	}

	else if (dersort >= 60 && dersort < 65) {
		printf("Harf Notunuz: DD ve Ders Ortalamaniz : %f\n", dersort);

		if (okulortalama<2.5)
		{
			printf("Dersi seneye alttan alirsan ortalamani yukseltmen icin iyi bir firsat olur.");
		}
	}

	else
	{
		printf("Harf Notunuz: FF ve Ders Ortalamaniz : %f\n", dersort);
		printf("Dersten Kaldiniz.");
	}



	return 0;
}
// selamlar