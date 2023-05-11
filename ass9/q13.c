#include<stdio.h>
int power(int,int,int);
main()
{
	int n,x,res;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Enter its power:");
	scanf("%d",&x);
	res=power(1,n,x);
	printf("The %d to the power %d is %d",n,x,res);
}
int power(int res,int n,int x)
{
	if(x==0)
		return res;
	else
		return power(res*n,n,x-1);
}
