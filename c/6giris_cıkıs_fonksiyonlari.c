#include<stdio.h>
#define PI 3.14

int main() {

	int yaricap;
	float hacim;
	printf("Kurenin yari capini giriniz:");
	scanf_s("%d", &yaricap);

	hacim = (4 / 3.0) * PI * (yaricap * yaricap * yaricap);
	printf("Kurenin hacmi %f 'dir", hacim);


	


	return 0;
}
