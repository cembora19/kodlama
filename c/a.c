#include<stdio.h>

int main(){
	
	int number1,number2,sum;
	
	printf("please enter number1:");
	scanf("%d",&number1);
	printf("please enter number2:");
	scanf("%d",&number2);
	
	sum = number1 + number2;
	printf("Sum of the entered numbers: %d", sum);
	
	return 0;
}
