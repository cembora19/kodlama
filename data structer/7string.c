/*
#include<stdio.h>
#include<stdlib.h>

int main(){
    char isim[20];
    char *soyisim;
    soyisim=(char *)malloc(sizeof(char)*20);
    scanf("%s",isim);
    scanf("%s",soyisim);
    printf("tanistigimiza memnun oldum %s %s",isim,soyisim);
    printf("ucuncu karakterler %c %c",isim[3],soyisim[3]);
    free(soyisim);
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char ilks[20]="deneme mesaji";
char ikincis[20]="ikinci mesaj";
char *ilk=ilks;
char *iki=ikincis;
printf(" %s %s",ilk,iki);
strcpy(ilk,iki);
//ilk=iki; shallow copy(sýð kopyalama
/*char c=iki[0];
int i=0;
while(c!='\0'){   //deep copy(derin kopyalama)
    ilk[i]=iki[i];
    i++;
    c=iki[i];
}
*/
printf(" %s %s",ilk,iki);
ilk[3]='x';
printf(" %s %s",ilk,iki);
printf("\ndizi boyutu %d",strlen(ilk));
}
