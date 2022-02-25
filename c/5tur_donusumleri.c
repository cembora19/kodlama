#include <stdio.h>

int main() {

	int a = 13;
	double b = 0.7;
	printf("%f\n", a / b);

	printf("\n%.3f\n", 3 * 7.2 + 4 % 3);
	printf("%.3f\n", 83.2 / 5);
	printf("%d\n", (int)7.5+(int)3.2);
	printf("%.2f\n", (double)3 * (double)2);
	//printf("%.0f\n", (float)3 * (float)2); hatasý "Uyarý	C26451	Aritmetik taþma: '*' iþleci bir 4 bayt deðer üzerinde kullanýlarak sonuç bir 8 bayt deðere dönüþtürülüyor. 
	//Taþmayý önlemek için '*' iþlecini çaðýrmadan önce deðeri daha geniþ bir türe dönüþtürün"



	return 0;
}
