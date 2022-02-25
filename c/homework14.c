#include<stdio.h>
#include<conio.h>
int main(){
	srand(time(NULL));

	int c,e,m,b,o,r,a,x,y,z;
	
	int f[100][100],v[3][3],g[20][20];
	
	printf("Row value of the Matrix:");
	scanf("%d",&c);
	printf("Column value of the Matrix:");
	scanf("%d",&e);
	
	for(m=1;m<c+1;m++){
		
		for(b=1;b<e+1;b++){
		
		
			o=rand()%255;
			f[m][b]=o;
			
		}
		
	}
		printf("\n\n\tMatrix:\n\n\n");


	for(m=1;m<c+1;m++){

		for(b=1;b<e+1;b++){
		
			printf("\t%d",f[m][b]);
			
		}
		
		printf("\n\n\n");
	}
	
	
	for(m=1;m<=3;m++){
		
		for(b=1;b<=3;b++){
			
			
			printf("\n\tV[m][b]:");
			scanf("%d",&v[m][b]);
			
		}
	}
	
	printf("\n\n\tKarnel:\n\n\n\n");
	
	
	for(m=1;m<=3;m++){
		
		for(b=1;b<=3;b++){
			
			printf("\t%d",v[m][b]);
			
		}
		
		printf("\n\n\n");
	}

	for(m=1;m<c+1;m++){
	
		for(b=1;b<c+1;b++){
		
		
			r=m-1;
			a=b-1;
			z=0;
		
		
			for(x=1;x<=3;x++){
			
				for(y=1;y<=3;y++){
					z=z+f[r][a]*v[x][y];
					a++;
			
				}
				r++;
				a=b-1;
				
			}
			
			g[m][b]=z;
			
		}
	}
	
	printf("\n\n\tG Matrix:\n\n\n");


	for(m=1;m<c+1;m++){
	
		for(b=1;b<e+1;b++){
		
			printf("\t%d",g[m][b]);
		}
		
		printf("\n\n\n");
	}
	
	getch();
	return 0;
}
