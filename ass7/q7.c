#include<stdio.h>
main()
{
	int n,ar[100],i,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter elements to array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n/2;i++)
	{	temp=ar[i];
		ar[i]=ar[n-i-1];
		ar[n-i-1]=temp;
	}
	printf("After reversing the array:");
	for(i=0;i<n;i++)
		printf("%d\t",ar[i]);

}
