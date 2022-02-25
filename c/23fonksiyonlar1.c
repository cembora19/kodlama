#include<stdio.h>

void hatayibas(int hata,int hata2) {

	printf("Hata Kodu %d",hata);

}


int main() {

	int sayi;

	printf("Lutfen negatif olmayan bir sayi giriniz : ");
	scanf_s("%d",&sayi);

	if (sayi<0)
	{
		hatayibas(404,410);
	}

	else
	{
		printf("HELALL BEE NEGATIF GIRMEDIN BEE");
	}


	return 0;
}
