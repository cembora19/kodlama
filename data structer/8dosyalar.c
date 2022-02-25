/*
#include<stdio.h>

int main(){
FILE *outfile, *infile;
int b=5,f;
float a=13.72,c=6.68,e,g;
outfile=fopen("testdata.txt","w");
fprintf(outfile,"%f %d %f",a,b,c);
fclose(outfile);
infile=fopen("testdata.txt","r");
fscanf(infile,"%f %d %f",&e,&f,&g);
printf("%f %d %f\n",a,b,c);
printf("%f %d %f\n",e,f,g);


}
*/
/*
#include<stdio.h>
#include<conio.h>

void main(){
char ch;
FILE *fp;
fp=fopen("out.txt","r");
while(!feof(fp)) {
    ch=getc(fp);
    printf("\n%c",ch);

}
getch();
}
*/
/*
#include<stdio.h>
int main(){

FILE *f;
char buffer[11];
if(f=fopen("out.txt","r"))
{
    fread(buffer,1,10,f); //buffer yapýsýnýni içine 1 karakterden 10 kere oku, bufferýn 10. elemanýna 0 koyuyoruz
    buffer[10]=0;
    fclose(f);
    printf("first 10 characters of the file:\n%s\n",buffer);
}
else{
    printf("dosya acilamadý bir hata olustu");
}
return 0;
}
*/
/*
#include<stdio.h>
int main(){

    char a[10]={'1','2','3','4','5','6','7','8','9','a'};
    FILE *fs;
    fs=fopen("project.txt","w");
    fwrite(a,1,10,fs);
    fclose(fs);


return 0;
}

*/
/*
#include<stdio.h>

int main(){

FILE *f;
f=fopen("mylife.txt","w");
fputs("bilgisayar kavramlari",f);
fseek(f,5,SEEK_SET);    //SEEK_CUR, SEEK_END
fputs(" sadi",f);
fclose(f);

return 0;
}

*/

#include<stdio.h>

int main(void){
FILE *stream;
stream=fopen("stream.txt","w");
fprintf(stream,"bilgisayar kavramlari");
printf("dosyadaki konum: %ld\n",ftell(stream));
fclose(stream);


return 0;

}



