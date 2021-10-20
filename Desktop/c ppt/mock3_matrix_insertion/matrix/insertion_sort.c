#include"header.h"
void sorting(int b[][C])
{	
int a[10];
 int i,j,k=0,temp,sum=0;
 
 for(i=0;i<R;i++)
 	{
 		for(j=0;j<C;j++)
 		{
 		a[k]=b[i][j];
 		k++;
 		}

 	}
 	printf(" before insertion sorting\n");
 for(i=0;i<9;i++)
printf(" %d",a[i]);
printf("\n");
for(i=1;i<9;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]<temp)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
	}
printf("elements after insertion sorting\n");
for(i=0;i<9;i++)
printf(" %d",a[i]);
printf("\n");
}
