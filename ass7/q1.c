#include<stdio.h>
main()
{
	int n,ar[100],i,sum=0;
	printf("Enter the size of first array:");
	scanf("%d",&n);
	printf("Enter elements to first array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{	
		sum=sum+ar[i];
	}
	printf("mean=%d",sum/n);

}
