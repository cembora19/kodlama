#include <stdio.h>
#include<cmath>

int main() {

	int a1 = 19;
	char b1 = 72;
	char b2 = 'C';
	float c1 = 24.5;
	double d1 = 0.4732864;

	printf("\t%d\n %4c\n %7d\n %.3f\n %.6f\n %s\n %s", a1, b1, b2, c1, d1, "Del mes Nina","Cem Bora Ceylan");

	printf("%d byte\n", sizeof(char));
	printf("%d byte\n", sizeof(int));
	printf("%d byte\n", sizeof(short int));
	printf("%d byte\n", sizeof(long int));
	printf("%d byte\n", sizeof(float));
	printf("%d byte\n", sizeof(double));
	
	

	return 0;
}
