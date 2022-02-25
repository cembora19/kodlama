#include<stdio.h>
#include<string.h>

struct location{
	char district[30];
	char neighborhood[30];
	char street[30];
};

struct student{
	char name[20];
	char surname[20];
	int no;
	int age;
	struct location address;
};


int main(){
	
	struct student student1;
	
	strcpy(student1.name,"cembora");
	strcpy(student1.surname,"ceylan");
	student1.no=842951;
	student1.age=20;
	strcpy(student1.address.district,"kartal");
	strcpy(student1.address.neighborhood,"esentepe");
	strcpy(student1.address.street,"kizilirmak");
	
	printf("%s %s %d %d %s %s %s",student1.name,student1.surname,student1.no,student1.age,student1.address.district,student1.address.neighborhood,student1.address.street);

	
	
	return 0;
}
