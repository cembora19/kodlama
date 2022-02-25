/*
#include<stdio.h>

struct student{
	char name[20];
	char surname[20];
	int no;
	int age;
};

void print(struct student a){
	printf("Student's information : %s %s %d %d",a.name,a.surname,a.no,a.age);
}

int main(){
	
	struct student student1 = {"cembora","ceylan",951842,20};
	
	print(student1);
	
	return 0;
}
*/

#include<stdio.h>

struct student{
	char name[20];
	char surname[20];
	int no;
	int age;
};

void show(struct student a){
	printf("\nStudent's information : %s %s %d %d",a.name,a.surname,a.no,a.age);
}

struct student takevalue(){
	printf("\n");
	struct student information;
	printf("Enter students's information : ");
	scanf("%s %s %d %d",&information.name,&information.surname,&information.no,&information.age);
	return information;
}


int main(){
	
	printf("Enter students' information in order(name, surname, no, age)\n");
	
	struct student student1 = takevalue();
	show(student1);
	
	return 0;
}

