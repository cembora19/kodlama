/* 
#include<stdio.h>

void main() {
	int taban, yukseklik, alan;
	printf("Taban uzunlugu(cm) :");
	scanf_s("%d", &taban);

	printf("Yukseklik(cm) :");
	scanf_s("%d", &yukseklik);

	alan = (taban * yukseklik) / 2;

	printf("alan (cm kare) %d", alan);

}
*/

/*
#include<stdio.h>

int main() {

	int sayi;
	scanf_s("%d", &sayi);

	if (sayi < 5 && sayi >2)
		printf("evet");
	else
		printf("hayir");


	return 0;
}

*/

/*
#include<stdio.h>

void main() {

	int sayi;
	printf("Bir sayi giriniz :");
	scanf_s("%d", &sayi);
	printf("Girilen sayi : %d\n", sayi);
}

*/

/*
#include<stdio.h>

int main() {

	printf("Merhaba.");
	printf(" \nBu benim ilk programim.");
	printf("\n Ben bilgisayar mühendisiyim.");


	return 0;
}
*/

/*
#include<stdio.h>


int main() {

	int toplam, x, y;

	printf("Bir sayi giriniz :");
	scanf_s("%d", &x);
	printf("Ikinci sayiyi giriniz :");
	scanf_s("%d", &y);

	toplam = x + y;
	
	printf("Sayilarin toplami : %d", toplam);


	

	return 0;
}
*/

/*
#include<stdio.h>

int main() {

	int uzun, kisa, cevre, alan;



	printf("Lutfen kisa kenar uzunlugunu giriniz : ");
	scanf_s("%d", &kisa);
	
	printf("\nLutfen uzun kenar uzunlugunu giriniz : ");
	scanf_s("%d", &uzun);



	cevre = (uzun + kisa) * 2;
	alan = uzun * kisa;
	
	printf("Diktortgenin cevresi %d\n", cevre);
	printf("Diktortgenin alani %d", alan);

	return 0;
}

*/
