#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],i,j,r,c,sum=0;
	printf("Enter the row and column of matrix");
	scanf("%d%d",&r,&c);
	printf("Enter elements to the array:");
	if(r!=c)
	{
		printf("Row and column have to same to calculate the diagonal");
		exit(0);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                       if(i==j)
			       sum+=a[i][j];
                }
        }
	printf("the sum of digonal element of matrix is %d",sum);
	return 0;
}

