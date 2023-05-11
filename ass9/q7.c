#include<stdio.h>
int add(int[],int);
int main()
{
	int ar[50],n,i,sum;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter %d element into array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	sum=add(ar,n);
	printf("the sum of element of array is %d",sum);
	return 0;
}
int add(int a[],int s)
{
	int i,sum=0;
	for(i=0;i<s;i++)
	{
		sum+=a[i];
	}
	return sum;
}
