#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
	printf("Enter the row and column of matrix");
	scanf("%d%d",&r,&c);
	printf("Enter elements to the array:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements of array are:\n");
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",a[i][j]);
                }
		printf("\n");
        }
	return 0;
}

