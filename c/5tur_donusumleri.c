#include <stdio.h>

int main() {

	int a = 13;
	double b = 0.7;
	printf("%f\n", a / b);

	printf("\n%.3f\n", 3 * 7.2 + 4 % 3);
	printf("%.3f\n", 83.2 / 5);
	printf("%d\n", (int)7.5+(int)3.2);
	printf("%.2f\n", (double)3 * (double)2);
	//printf("%.0f\n", (float)3 * (float)2); hatas� "Uyar�	C26451	Aritmetik ta�ma: '*' i�leci bir 4 bayt de�er �zerinde kullan�larak sonu� bir 8 bayt de�ere d�n��t�r�l�yor. 
	//Ta�may� �nlemek i�in '*' i�lecini �a��rmadan �nce de�eri daha geni� bir t�re d�n��t�r�n"



	return 0;
}
