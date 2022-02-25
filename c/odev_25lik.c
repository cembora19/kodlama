/*
1. Soru

#include<stdio.h>


int main() {

	int a, b;

	printf("Iki sayi giriniz.\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	

	printf("\n\n\nGirdiginiz sayilar : %d - %d", a,b);
	



	return 0;
}

*/

/*
2. Soru

#include<stdio.h>
#define PI 3.14

int main() {

	int r;
	float alan;	

	printf("Alanini hesaplamak istediginiz dairenin yaricapigini giriniz.\n");
	scanf_s("%d", &r);

	alan = PI * r * r;

	printf("Girdiginiz yaracapa ait dairenin alani : %.3f", alan);



	return 0;
}

*/
/*
3. Soru

#include<stdio.h>

int main() {

	int a;

	printf("Hesaplamak istediginiz sayiyi giriniz.\n");
	scanf_s("%d", &a);

	if (a%2==0)
	{
		printf("Girdiginiz sayi cift sayidir.");
	}

	else
	{
		printf("Girdiginiz sayi tek sayidir.");
	}


	return 0;
}
*/

/*
4. Soru

#include<stdio.h>

int main() {

	int a;

	printf("Oda sicakligini giriniz.");
	scanf_s("%d", &a);

	if (a<0)
	{
		printf("Oda donma noktasinin altinda.");
	}
	else
	{
		printf("Oda donma noktasinin ustunde.");
	}


	return 0;
}
*/

/*
5. Soru

#include<stdio.h>

int main() {

	int f;
	float c;
	

	printf("Donusturmek istediginiz Fahrenheit degerini giriniz.\n");
	scanf_s("%d", &f);

	c = (f - 32) / 1.8;

	printf("Girdiginiz degerin Santigrat degeri : %.4f", c);


	return 0;
}
*/

/*
6. Soru

#include<stdio.h>

int main() {

	int fit;
	float cm;

	printf("Donusturmek istediginiz fit degerini giriniz.\n");
	scanf_s("%d", &fit);

	cm = fit * 30.48;

	printf("Girdiginiz degerin santimetreye donusturulmus degeri : %.3f", cm);


	return 0;
}
*/

/*
/7. Soru

#include<stdio.h>

int main() {

	int i;
	int a;

	for (i = 1; i < 10; i++) {

		a = i * i;

		printf("%d\n", a);
	}

	



	return 0;
}

*/


/*
8. Soru

#include<stdio.h>

int main() {

	int a, b, i, sum=0;
	
	printf("Iki sayi giriniz.\n");
	scanf_s("%d\n", &a);
	scanf_s("%d", &b);

	if (a>b)
	{
		for (i = b + 1; i < a; i++) {

			sum += i;
		}
		printf("Girdiginiz degerlerin arasýndaki sayilarin toplami : %d",sum);
	}

	else
	{
		for (i = a + 1; i < b; i++) {

			sum += i;
		}
		printf("Girginiz degerlerin arasindaki sayilarin toplami : %d",sum);
	}


	return 0;
}
*/
/*
10. Soru
#include<stdio.h>

int main() {

	int a, b, c;

	printf("Sayilari giriniz.\n");
	scanf_s("%d\n", &a);
	scanf_s("%d\n", &b);
	scanf_s("%d", &c);
	
	if (a>b && a>c)
	{
		printf("En buyuk sayi : %d", a);
	}

	else if (b>c && b>a)
	{
		printf("En buyuk sayi : %d", b);
	}

	else
	{
		printf("En buyuk sayi : %d", c);
	}

	return 0;
}

*/


/*
11. Soru

#include<stdio.h>

int main() {

	int product=1, sum=0;
	int a, b, c, d, e, f, g, h, j, k;

	printf("10 adet sayi giriniz.\n");
	scanf_s("%d\n", &a);
	scanf_s("%d\n", &b);
	scanf_s("%d\n", &c);
	scanf_s("%d\n", &d);
	scanf_s("%d\n", &e);
	scanf_s("%d\n", &f);
	scanf_s("%d\n", &g);
	scanf_s("%d\n", &h);
	scanf_s("%d\n", &j);
	scanf_s("%d", &k);

	sum += a + b + c + d + e + f + g + h + j + k;
	product *= a * b * c * d + e * f * g * h * j * k;

	printf("Girdiginiz sayilarin toplami : %d\nGirdiginiz sayilarin carpimi : %d", sum, product);


	return 0;
}
*/

/*
12. Soru
#include<stdio.h>

int main() {

	int a, b, i,sum=0;

	printf("Iki tane sayi giriniz.\n");
	scanf_s("%d\n", &a);
	scanf_s("%d", &b);
	printf("\n");

	if (a>b)
	{

		for (i = b; i <= a; i++) {

			if (i%5==0)
			{

				printf("%d\n", i);

			}

		}

	}

	else if (b>a)
	{
		for (i = a; i <= b; i++) {

			if (i%5==0)
			{
				printf("%d\n", i);
			}

		}
	}



	return 0;
}

*/
/*
13. Soru

#include<stdio.h>

int main() {

	int i;

	for (i = 1; i < 11; i++) {

		printf("%d\n", i * 6);

     }


	return 0;
}

*/
/*
14. Soru
#include<stdio.h>

int main() {

	int n, falt = 1;

	printf("Faktoruyelini hesaplamak istediginiz sayiyi giriniz.\n");
	scanf_s("%d", &n);

	while (n!=0)
	{
		falt *= n;
		n--;
	}

	printf("Sayinin faktoruyeli : %d", falt);

	return 0;
}

*/
/*
18. Soru

#include<stdio.h>

int main() {

	int i, sayi, a;

	printf("Lutfen bir sayi giriniz.\n");
	scanf_s("%d", &sayi);

	printf("%d sayisinin ikili sistemdeki hali :\n", sayi);

	for (i = 31; i >= 0; i--) {

		a = sayi >> i;

		if (a & 1)
		{
			printf("1");
		}

		else
		{
			printf("0");
		}

	}

	printf("\n");

	return 0;
}
*/
/*
16. Soru

#include<stdio.h>

int main() {

	int i, sum = 0;	

	for (i = 1000; i <= 2000; i++) {

		if (i%2==0)
		{
			sum += i;
			printf("%d\n", i);
		}

		
	}
	printf("Ekranda gorulen tum sayilarin toplami : %d", sum);


	return 0;
}
*/
/*
19. Soru

#include<stdio.h>

int main() {

	int i, sayi;

	printf("Carpim tablosunu hesaplamak istediginiz sayiyi giriniz.\n");
	scanf_s("%d", &sayi);
	printf("\n\n");

	for (i = 1; i < 11; i++) {

		printf("%d\n", sayi * i);

	}



	return 0;
}
*/

/*
20. Soru

#include<stdio.h>

int main() {

	int n, hane = 0, toplam = 0;

	printf("Lutfen bir sayi giriniz : ");
	scanf_s("%d", &n);


	do
	{

		toplam = toplam + (n % 10);

		hane++;

		n = n / 10;


	} while (n > 0);

	printf("Girdiginiz sayinin rakamlar toplami : %d\nGirdiginiz sayi %d basamaklidir.", toplam, hane);


	return 0;
}
*/
/*
21. Soru

#include<stdio.h>

int main() {

	int i, sayi;	

	printf("Lutfen bir sayi giriniz.\n");
	scanf_s("%d", &sayi);





	return 0;
}
*/
/*
9. Soru

#include <stdio.h>

int main() {
	int low, high, number;
	printf("Lutfen kucuk sayiyi giriniz \n Lutfen buyuk sayiyi giriniz\n Bolunecek sayiyi giriniz\n");
	scanf_s("%d", &low);
	scanf_s("%d", &high);
	scanf_s("%d", &number);
	for (low; low < high; low++) {
		if (low % number == 0) {
			printf("%d\n", low);
		}
	}

	return 0;
}

*/




