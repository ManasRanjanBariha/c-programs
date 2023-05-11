#include<stdio.h>
int main()
{
	int mul[10][10],a[10][10],b[10][10],i,j,r1,c1,r2,c2,k;
	printf("Enter the row and column of 1st matrix");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row and column of 2nd matrix ");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("Enter elements to 1st array:");

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
				mul[i][j]=0;
                                for(k=0;k<c1;k++)
				{
					mul[i][j]+=a[i][k]+b[k][j];
				}
                        }
                }
		printf("the matrix multiplication:\n\n");
		for(i=0,k=0;i<r1 || k<r2;i++,k++)
		{
			
			for(j=0;j<c1;j++)
			{
				if(i>=r1)
					break;
				printf("%d\t",a[i][j]);
			}
			printf("\t");
			for(j=0;j<c2;j++)
                        {
                        	if(k==r2-1 && j==0)
					printf("\t\t\t");
				printf("%d\t",b[k][j]);
                        }
			printf("\t");
			for(j=0;j<c2;j++)
                        {
				if(i>=r1)
                                        break;
                                printf("%d\t",mul[i][j]);
                        }
			printf("\n");



		}
		/*
		printf("The multiplication of matrix is :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",mul[i][j]);
			}
			printf("\n");
		}*/

	}
	else
	{
		printf("Row and column size must be equal otherwise we can't add them");
	}

	return 0;
}

