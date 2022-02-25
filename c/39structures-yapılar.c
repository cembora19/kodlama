#include<stdio.h>

struct student{
	char name[20];
	char surname[15];
	int no;
	int age;
};

int main(){
	
	struct student cem = {"Cem Bora","Ceylan",842951,20};
	
	printf("%s %s %d %d",cem.name,cem.surname,cem.no,cem.age);
	
	
	return 0;
}
