#include<stdio.h>
int search(int[],int);
int main()
{
	int lar,ar[50],n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("enter %d element into array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	lar=search(ar,n);
	printf("the largest element is %d",lar);
	return 0;
}
int search(int a[],int s)
{
	int i,lar=a[0];
	for(i=0;i<s;i++)
	{
		if(lar<a[i])
			lar=a[i];
	}
	return lar;
}
