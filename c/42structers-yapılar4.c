#include<stdio.h>

struct student{
	char name[20];
	char surname[20];
	int no;
	int age;
};

int main(){
	
	
	struct student students[3];
	int i;
	
	printf("Enter students' information in order(name, surname, no, age)\n");
	
	for(i=0;i<3;i++){
		printf("Enter %d. student's information : ",i+1);
		scanf("%s %s %d %d",&students[i].name,&students[i].surname,&students[i].no,&students[i].age);
	}
	
	printf("\n\n");
	
	for(i=0;i<3;i++){
		printf("%d. student's information : %s %s %d %d\n",i+1,students[i].name,students[i].surname,students[i].no,students[i].age);
	}
	
	
	
	
	return 0;
}
