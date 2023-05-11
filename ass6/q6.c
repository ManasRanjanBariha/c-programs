#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter the number of rows you want to print:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
                {
                        printf("%d",j);
                }
		for(j=i-1;j>=1;j--)
                {
                        printf("%d",j);
                }
		printf("\n");

	}
}
