#include <stdio.h>

int main() {

	int x = 6;
	int y = 13;
	int a = 19;

	a = x;
	x = y + a + 8;
	printf("x:%d\ny:%d\na:%d\n\n", x, y, a);


	x = 8;
	y = 9;
	a = 14;

	printf("x:%d\t y:%d\t a:%d", --x, ++y, a++);	
	printf("\nx:%d\t y:%d\t a:%d", x, y, a);
	printf("\nx:%d\t y:%d\t a:%d\n\n", x--, --y, a--);

	
	//x = 6, y = 9, a = 14

	//x = x + (a+1);

	//then x = 21;
	
	

	x += a + 1;

	printf("x:%d", x);

	x = y = a + 8;

	printf("\n\nx:%d\t y:%d \ta:%d\n", x, y, a);






	return 0;
}
