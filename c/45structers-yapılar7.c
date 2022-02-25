#include<stdio.h>
#include<string.h>

struct student{
	
	char name[20];
	char surname[20];
	int number;
};

struct student *takeValue(struct student *p){
	
	strcpy(p->name, "Cansel");
	strcpy(p->surname, "Ceylan");
	p->number=842;
	
	return p;
	
}


void show(struct student *p){
	
	printf("Student's information \nName: %s\nSurname: %s\nNumber: %d",p->name,p->surname,p->number);
	
}


int main(){
	
	struct student *hold;
	struct student student1 = {"Cem Bora", "Ceylan", 951};
	
	//show(&student1);
	
	hold=takeValue(&student1);
	
	printf("%s %s %d",hold->name,hold->surname,hold->number);
	
	return 0;
	
}
