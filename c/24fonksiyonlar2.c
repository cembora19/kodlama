/*

#include<stdio.h>

int topla(int sayi1, int sayi2) {


	return (sayi1 + sayi2);
	
}

int main() {

	int sayi1, sayi2;

	scanf_s("%d %d", &sayi1, &sayi2);

	printf("%d", topla(sayi1, sayi2));

	return 0;
}

*/

/*

#include<stdio.h>

int topla(int sayi1, int sayi2) {


	return (sayi1 + sayi2);

}

int main() {

	int sayi1, sayi2, toplam;


	scanf_s("%d %d", &sayi1, &sayi2);

	toplam = topla(sayi1, sayi2);

	printf("%d", toplam);

	return 0;

	}

	*/



#include<stdio.h>

int faktoruyel(int sayi) {

	int fact = 1;

	for (; sayi > 0; sayi--) {

		fact *= sayi;


	}

	return fact;
}


int main() {

	int n;

	printf("Lutfen faktoruleyini hesaplamak istediginiz sayiyi giriniz : ");

	scanf_s("%d", &n);

	printf("Faktoruyel : %d", faktoruyel(n));


	return 0;
}


