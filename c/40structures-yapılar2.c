#include<stdio.h>

struct pc {
	char cpubrandname[30];
	char gpubrandname[30];
	char gpumodelname[30];
	char rambranndname[30];	
	int  corecount;
	int gpugb;
	int ramgb;
		
}pc1,pc2;

int main() {
	
	struct pc pc1 = {"amd","nvidia","msi","corsair",8,6,16};
	pc2=pc1;
	printf("%s %s %s %s %d %d %d",pc2.cpubrandname,pc2.gpubrandname,pc2.gpumodelname,pc2.rambranndname,pc2.corecount,pc2.gpugb,pc2.ramgb);
	
	
	
	return 0;
}
