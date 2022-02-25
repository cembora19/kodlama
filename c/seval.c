#include <stdio.h>
 
int main()
{
    int i,j,k=0;
    for(i=2;i<100;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                k++;
        }
            if(k==2)
        {
            k=i;
            printf("%d asal sayýdýr\n",k);
        }
        k=0;
    }
}
