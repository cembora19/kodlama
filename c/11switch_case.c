#include<stdio.h>

int main() {

	int islem , bakiye = 1000, tutar,paracek,secim;

	printf("Islemler\n1 : Para Cekme\n2 : Para Yatirma\n3 : Havale Yapma\n4 : Bakiye Sorgula\n5 : Kart Iade\n\n\n\n");

	printf("Islem seciniz : ");
	scanf_s("%d", &islem);

	switch (islem)
	{

	case 1:

		printf("Mevcut bakiyeniz : %d\n\n10 TL CEKMEK ICIN BIRI, 20 TL CEKMEK ICIN IKIYI, 50 TL CEKMEK ICIN UCU, 100 TL CEKMEK ICIN DORTU, FARKLI BIR DEGER ICIN LUTFEN BESI SECINIZ. ", bakiye);
		scanf_s("%d", &paracek);
		


		if (paracek == 1)
		{
			bakiye -= 10;
			printf("10 TL Para Cektiniz.\nMevcut Bakiyeniz : %d", bakiye);

			if (bakiye < 10)
			{
				printf("Yetersiz Bakiye.");
			}

		}

		else if (paracek == 2)
		{
			bakiye -= 20;
			printf("20 TL Para Cektiniz.\nMevcut Bakiyeniz : %d ", bakiye);

			if (bakiye < 20)
			{
				printf("Yetersiz Bakiye.");
			}
		}

		else if (paracek == 3)
		{
			bakiye -= 50;
			printf("50 TL Para Cektiniz.\nMevcut Bakiyeniz : %d", bakiye);

			if (bakiye < 50)
			{
				printf("Yetersiz Bakiye.");
			}
		}

		else if (paracek == 4)
		{
			bakiye -= 100;
			printf("100 TL Para Cektiniz.\nMevcut Bakiyeniz : %d", bakiye);

			if (bakiye < 100)
			{
				printf("Yetersiz Bakiye.");
			}
		}

		else if (paracek == 5)
		{

			printf("\nCekmek Istediginiz Para Miktarini Giriniz :");
			scanf_s("%d", &tutar);

			if (tutar > bakiye)
			{
				printf("Yetersiz Bakiye.");
			}

			else
			{
				bakiye -= tutar;
				printf("Mevcut Bakiyeniz : %d", bakiye);
			}
			

		}

		break;

	case 2:

		printf("Mevcut Bakiyeniz : %d\nYatirmak istediginiz tutari giriniz : ", bakiye);
		scanf_s("%d", &tutar);
		bakiye += tutar;
		printf("Güncel bakiyeniz : %d", bakiye);

		break;

	case 3 :

		printf("Mevcut Bakiyeniz : %d\nHavale Yapmak Istediginiz Ucreti Giriniz : ", bakiye);
		scanf_s("%d", &tutar);
		
		if (tutar>bakiye)
		{
			printf("Hesabinizda yeterli miktarda para yok.\n");
		}

		else
		{
			printf("\nYalnizca onceden elektronik bankacilikte kaydettiginiz hesaplara para aktarimi yapabilirsiniz.\n");
			printf("Hesap 1 : Samet Ozkan\nHesap 2 : Berkecan\nHesap 3 : Ahmet Sefa Yýlmaz");
			printf("Havale yapmak istediginiz hesabi seciniz : ");
			scanf_s("%d", &secim);
			bakiye -= tutar;

			if (secim == 1)
			{
				printf("Samet Ozkan'a %d kadar para basari ile aktarildi.", tutar);
				printf("\nMevcut Bakiyeniz : %d", bakiye);
			}

			else if (secim == 2)
			{
				printf("Berkecan'a %d kadar para basari ile aktarildi.", tutar);
				printf("\nMevcut Bakiyeniz : %d", bakiye);
			}

			else if (secim == 3)
			{
				printf("Ahmet Sefa Yýlmaz'a %d kadar para basari ile aktarildi.", tutar);
				printf("\nMevcut Bakiyeinz : %d", bakiye);
			}
			
			else
			{
				printf("Yanlýs tuslama yaptýnýz. Lutfen tekrar deneyiniz.");
			}

		}

		break;

	case 4:

		printf("Guncel Bakiyeniz : %d", bakiye);
		break;

	case 5:

		printf("Kartiniz iade edilmistir.");
		break;


	default:

		printf("404 NOT FOUND");

		break;
	}


	return 0;
}
