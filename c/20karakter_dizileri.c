#include<stdio.h>


int main() {

	char deneme[] = "CEM";
	printf("%c\n", deneme[0]);


	char name[20];

	printf("Isim giriniz : ");
	scanf_s("%s", name);

	printf("Girdiginiz isim : %s", name);


	return 0;
}
