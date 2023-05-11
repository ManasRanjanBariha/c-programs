#include<stdio.h>
int main()
{
	int a[10][10],t[10][10],i,j,r,c;
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
	printf("The elements of original  array :\n");
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",a[i][j]);
                }
		printf("\n");
        }
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        t[j][i]=a[i][j];
                }
        }
	printf("Element of transpose matrix\n");
	for(i=0;i<c;i++)
        {
                for(j=0;j<r;j++)
                {
                        printf("%d\t",t[i][j]);
                }
		printf("\n");
        }

	return 0;
}

