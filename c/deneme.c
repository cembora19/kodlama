/*
#include<stdio.h>
#define PI 3.14

int main() {

	int yaricap;
	float hacim;

	printf("Kurenin yaricapini giriniz:");
	scanf_s("%d", &yaricap);

	hacim = (4 / 3.0) * PI * (yaricap * yaricap * yaricap);

	printf("Kurenin hacmi %f 'dir", hacim);



	return 0;
}
*/

/*
#include<stdio.h>

int main() {

	int Birinci;
	int Ikinci;
	int Ucuncu;
	int Dorduncu;
	int Besinci;
	float Ortalama;

	// int Birinci,Ikinci,Ucuncu,Dorduncu,Besinci yazsan daha kýsa ve güzel olur.


	printf("Birinci sayiyi giriniz:");
	scanf_s("%d", &Birinci);

	printf("Ikinci sayiyi giriniz:");
	scanf_s("%d", &Ikinci);

	printf("Ucuncu sayiyi giriniz:");
	scanf_s("%d", &Ucuncu);

	printf("Dorduncu sayiyi giriniz:");
	scanf_s("%d", &Dorduncu);

	printf("Besinci sayiyi girin:");
	scanf_s("%d", &Besinci);

	Ortalama = (Birinci + Ikinci + Ucuncu + Dorduncu + Besinci) / 5.0;

	printf("Sayilarin ortalamasi %f 'dir", Ortalama);


	



	return 0;
}
*/

/*
#include<stdio.h>

int main() {

	int a, b, c, d, e;
	float aritmatik;

	printf("5 adet sayi giriniz:");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	aritmatik = (a + b + c + d + e) / 5.0;

	printf("Girdiðiniz sayilarin aritmatik ortalamasi %f 'dir.", aritmatik);


	return 0;
}
*/

/*
#include<stdio.h>

int main() {

	int a, b, c;
	float d;

	printf("X karenin kat sayisini giriniz:");
	scanf_s("%d", &a);

	printf("X'in kat sayisini giriniz:");
	scanf_s("%d", &b);

	printf("Sabit degeri giriniz:");
	scanf_s("%d", &c);

	d = (b * b) - 4.0 * a * c;

	printf("Diskriminant deðeri %f 'dir:", d);



	return 0;
}
*/

/*

#include<stdio.h>
#include<math.h>

int main() {

	int a, b, c;
	float x1, x2;
	float delta;

	printf("X karenin kat sayisini giriniz:");
	scanf_s("%d", &a);

	printf("X'in kat sayisini giriniz:");
	scanf_s("%d", &b);

	printf("Sabit degeri giriniz:");
	scanf_s("%d", &c);
	
	delta = b * b - 4.0 * a * c;

	x1 = (-b + (sqrt(delta))) / 2.0 * a;
	x2 = (-b - (sqrt(delta))) / 2.0 * a;

	printf("Delta %.2f\nDenklemin birinci koku %f\nIkinci koku %f 'dir.", delta ,x1, x2);


	return 0;
}

*/

/*

#include<stdio.h>

int main() {

	int i, n, genel = 0, tek = 0, cift = 0;

	printf("Hesaplamak istediginiz sayiyi giriniz.");
	scanf_s("%d", &n);

	for (i = 0; i <= n; i++) {

		genel = genel + i;

	}

	printf("Sifirdan girdiginiz sayiya kadar olan toplami %d.", genel);

	for (i = 0; i <= n; i++) {

		if (i%2==0)
		{
			cift = cift + i;
		}

		else
		{
			tek = tek + i;
		}


	}

	printf("\nCift sayilarinin toplami %d.\nTek sayilarin toplami %d.", cift, tek);

	return 0;
}

*/
