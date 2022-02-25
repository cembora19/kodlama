#include<stdio.h>
#include<conio.h>
int func(int s){
	if(s==0)
	return 0;
	else 
	return func(s-1)+2;
}
main(){
	int s;
	printf("Enter value of "s" :");
	scanf("%d",&s);
	printf("\nf(%d)	=	%d",s,func(s));
	getch();
}
