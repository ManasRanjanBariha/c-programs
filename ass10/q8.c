#include<stdio.h>
int sum(int *,int);
main()
{
	int a[50],n,*p,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	p=a;
	printf("Enter element into array");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p+=1;
	}
	printf("The sum of array element is %d",sum(a,n));
}
int sum(int *p,int n)
{	
	int i,res=0;
	for(i=0;i<n;i++)
	{
		res+=*p;
		p+=1;
	}
	return res;
}
