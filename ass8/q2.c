#include<stdio.h>
int main()
{
	int sum[10][10],a[10][10],b[10][10],i,j,r1,c1,r2,c2,k;
	printf("Enter the row and column of 1st matrix");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row and column of 2nd matrix ");
	scanf("%d%d",&r2,&c2);
	printf("Enter elements to 1st array:");
	if(c1==c2 && r1==r2)
	{
		for(i=0;i<r1;i++)
        	{
                	for(j=0;j<c1;j++)
                	{
                        scanf("%d",&a[i][j]);
                	}
        	}
        	printf("Enter element to 2nd matrix:\n");
        	for(i=0;i<r2;i++)
        	{
                	for(j=0;j<c2;j++)
                	{
                        	scanf("%d",&b[i][j]);
                	}
        	}
		for(i=0;i<r1;i++)
                {
                        for(j=0;j<c2;j++)
                        {
				sum[i][j]=a[i][j]+b[i][j];
                        }
                }
		printf("The sum of matrix is :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",sum[i][j]);
			}
			printf("\n");
		}

	}
	else
	{
		printf("Row and column size must be equal otherwise we can't add them");
	}

	return 0;
}

