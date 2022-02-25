#include<stdio.h>

int main(){
	
	int transaction;
	
	
	int array[] = {0,1,2,3,4,5,6,7,8};
	int arrayodd[10],arrayeven[10],i;	
	
	
	int array1[5] = {1,5,6,2,7};
	int j,temporal,hold;


	int array2[] = {1,2,3,4,5,6,7,8};
	int k,max1,max2;
	
	
	int array4[10],location1,number1,h,value;

	
	int array3[10],location,number,l;
	
	
	int array5[10],array6[10],array7[20],a,n1,n2;
	
	
	int matrix[3][5];
	int b,c;
	int sum=0;
	
	
	int	matrix1[5][5],transpose[5][5];
	int r,t,y,u;
		
	





	printf("Plese enter the number of homework you want to view(1-11) : ");
	scanf("\n%d",&transaction);
	
	switch(transaction){
	
	case 1:
	
	printf("\nEven Numbers : ");
	for(i=0;i<9;i++){
		
		if(array[i]%2==0){
			
			arrayeven[i]= array[i];
		
			printf("%d ",arrayeven[i]);
			
		}
		
	}
	
		printf("\n\nOdd Numbers : ");
	for(i=0;i<9;i++){
		
		if(array[i]%2!=0){
			
			arrayodd[i]= array[i];
		
			printf("%d ",arrayodd[i]);
			
		}
		
	}
	
		break;
		
		
		
		case 2:
	
	for(temporal=1;temporal<5;temporal++)	{
			
	for(j=0;j<4;j++)	{
				
		if(array1[j]>array1[j+1]){
			
			hold=array1[j];
			array1[j]=array1[j+1];
			array1[j+1]=hold;
			
		}				
		}				
		}
	printf("\n\nAccording to the ascending order : ");
	
	for(j=0;j<5;j++){
		printf("\n%d", array1[j]);
	}
	
	
	break;
	
	
	
	case 3:
		
		max1=array2[0];
		max2=array2[1];
		
		for(k=1;k<8;k++){
			
			if(array2[k]>max1){
				
				max2=max1;
				max1=array2[k];
				
			}
			
		else if(array2[k]>max2){
			max2=array2[k];
		}
			
		}
		
		printf("Second largest number of array : %d",max2);
		
		break;
	
	case 4:
		
		printf("\nI could not do this question. Sorry :(");
		
		break;
	
	case 5:
			
		printf("\nEnter number of elements in array(max10) : ");
		scanf("%d",&number1);
			
		printf("\nEnter %d elements.\n",number1);
		
		for(h=0;h<number1;h++){
			scanf("%d",&array4[h]);
		}
		printf("\nEnter location where you wish to insert an element\n");
  		scanf("%d", &location1);
		
		printf("\nEnter the value to insert : ");
		scanf("%d",&value);
		
		for(h=number1-1;h>=location1-1;h--){
			array4[h+1] = array4[h];
		}
		
		array4[location1-1]=value;
		
		printf("New array is : \n");
		
		for(h=0;h<=number1;h++){
			printf("%d \n",array4[h]);
		}
		  	
				
		break;
	
	case 6:
		
		
		
		printf("\nEnter number of elements in array(max10) : ");
		scanf("%d",&number);
		
		printf("\nEnter %d elements.\n",number);
		
		for(l=0;l<number;l++){
			scanf("%d",&array3[l]);
		}
		
		printf("\nEnter location where you wish to delete element : ");
		scanf("%d",&location);
		
		if(location>number){
			printf("Deletion not possible.");
		}
		
		else{
			for(l=location-1;l<number-1;l++){
				array3[l]=array3[l+1];
			}
			printf("\nResulant array : \n");
			
			for(l=0;l<number-1;l++){
				printf("%d \n",array3[l]);
			}
		}
		
		break;
		
		
		case 7:
			
		printf("\nI could not do this question. Sorry :(");
					
		break;	
		
		
		case 8:
			
			printf("\nEnter size of 1st array(max10) : ");
			scanf("%d",&n1);
			
			printf("\nEnter %d elements.\n",n1);
			
			for(a=0;a<n1;a++){
				scanf("%d",&array5[a]);
			}
			
			printf("\nEnter size of 2st array(max10) : ");
			scanf("%d",&n2);
			
			printf("\nEnter %d elements.\n",n2);
			
			for(a=0;a<n2;a++){
				scanf("%d",&array6[a]);
			}
			
			for(a=0;a<n1+n2;a++){
				
				if(a<n1){
					array7[a]=array5[a];
				}
				
				else{
					array7[a]=array6[a-n1];
				}
				
			}
			printf("\n");
		    for(a=0;a<n1+n2;a++){
			printf("%d \n",array7[a]);
		}
			
			
			
		break;	
		
		
		case 9:
			
		for (b = 0; b < 3; b++) {

		for (c = 0; c < 5; c++) {

			scanf("%d", &matrix[b][c]);

			}
		}
		printf("Matrix : \n\n");
		for (b = 0; b < 3; b++) {

		for (c = 0; c < 5; c++) {

				printf("%d ", matrix[b][c]);
			}
			printf("\n");
		}

		printf("\nSum of matrix values : \n\n");

		for (c = 0; c < 5; c++) {

		for (b = 0; b < 3; b++) {

				sum += matrix[b][c];

			}

			printf("%d ", sum);
			sum = 0;

		}
			
	
		break;	
		
	
	
	
		case 10:
		
		printf("\nI could not do this question. Sorry :(");		
			
		break;	
	
	
	
	
		case 11:
			
		printf("\nEnter the number of rows and columns of a matrix\n");
		scanf("%d %d", &r,&t);
		
		printf("\nEnter elements of matrix : \n");
		
		for(y=0;y<r;y++){
			for(u=0;u<t;u++){
				scanf("%d", &matrix1[y][u]);
			}
		}	
		
		for(y=0;y<r;y++){
			for(u=0;u<t;u++){
				transpose[u][y]=matrix1[y][u];
			}
		}	
		
		printf("\nTranspose of the matrix : \n");
		
		for(y=0;y<t;y++){
			for(u=0;u<r;u++){
				printf("%d ", transpose[y][u]);
			}
			printf("\n");
		}
			
			
		break;
	
	
	
		default:

		printf("404 NOT FOUND");

		break;
	
	
	}
	return 0;
}
