#include<stdio.h>
#include<string.h>

struct student{
	
	char name[20];
	char surname[20];
	int number;
};

int main(){
	
	struct student *hold;
	
	struct student student1;
	
	strcpy(student1.name,"Cem Bora");
	strcpy(student1.surname,"Ceylan");
	student1.number =951;
	
	hold = &student1;
	
	printf("%s %s %d\n",student1.name,student1.surname,student1.number);
	
	printf("%s %s %d", hold->name, hold->surname, hold->number);
	
	
	return 0;
}
