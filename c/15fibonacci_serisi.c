#include<stdio.h>


int main() {

	int i, ilksayi = 1, ikincisayi = 1;

	printf("%d\n%d\n", ilksayi, ikincisayi);

	for (i = 0; i < 15; i++) {

		int temp = ikincisayi;

		ikincisayi = ikincisayi + ilksayi;

		ilksayi = temp;

		printf("%d\n", ikincisayi);

	}



	return 0;
}
