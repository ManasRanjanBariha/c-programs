#include<stdio.h>
int search(int[],int,int);
int main()
{
	int ar[50],n,i,target;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter %d element into array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the array you want to search:");
	scanf("%d",&target);
	i=search(ar,n,target);
	if(i==-1)
		printf("The element noi found on array");
	else
		printf("the element found on %d index",i);
	return 0;
}
int search(int a[],int s,int t)
{
	int i;
	for(i=0;i<s;i++)
	{
		if(t==a[i])
			return i;
	}
	return -1;
}
