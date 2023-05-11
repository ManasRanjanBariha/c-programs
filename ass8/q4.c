#include<stdio.h>
int main()
{
	int a[10][10],sum=0,i,j,r,c;
	printf("Enter the row and column of matrix");
	scanf("%d%d",&r,&c);
	printf("Enter elements to the matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Elements of matrix and there sum:\n");
	for(i=0;i<r;i++)
        {
		sum=0;
                for(j=0;j<c;j++)
                {
                        sum+=a[i][j];
                }
		a[i][c]=sum;
        }
	for(i=0;i<c;i++)
        {
                sum=0;
                for(j=0;j<r;j++)
                {
                        sum+=a[j][i];
                }
		a[r][i]=sum;
        }
	for(i=0;i<=r;i++)
        {
                for(j=0;j<=c;j++)
                {
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }

	return 0;
}

