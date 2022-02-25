/*
#include<stdio.h>
#include<string.h>

int uzunluk_don(char name[]) {

	int uzunluk=0;
	int i;	

	for (i = 0; name[i] != '\0'; i++) {

		uzunluk++;	

	}

	return uzunluk;	

}



int main() {

	char isim[] = "CemBora";

	printf("%d", uzunluk_don(isim));

	return 0;
}
*/


/*
char isim[] = "cembora";

'c'
'e'
'm'
'b'
'o'
'r'
'a'
'\0'   --> string'in bittiðini anlamak için otomatik kendisi koyuyur.
*/

 
#include<stdio.h>
#include<string.h>

void terscevir(char dizi[]) {

	int i, uzunluk, gecici;

	uzunluk = strlen(dizi);

	for (i = 0; i < uzunluk / 2; i++) {

		gecici = dizi[i];
		
		dizi[i] = dizi[uzunluk - 1 - i];

		dizi[uzunluk - 1 - i] = gecici;
	}

}

int main() {

	char text[200];

	scanf_s("%s", &text);

	terscevir(text);
	printf("%s", &text);




	return 0;
}


 













