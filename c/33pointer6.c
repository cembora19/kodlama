#include<stdio.h>
#include<string.h>

int benimstrlen(char *p){
	
	int uzunluk = 0, i;
	
	for(i=0;p[i] != '\0';i++){
		
		uzunluk++;
		
		
	}
	
	return uzunluk;
	
}



int main(){
	
	char yazi[] = "tura";
	
//	char *p = yazi;
	 
//	printf("%s\n",tura);
//	printf("%s\n",p);
//	printtf("%s\n",p+1);
//	printf("%s\n",p+2);	
//	printf("%d",strlen(yazi));	
	
	
	printf("%d",benimstrlen(yazi));
	

	
	
	return 0;
}
