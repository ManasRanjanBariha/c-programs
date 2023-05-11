#include<stdio.h>
void fibo(int,int,int);
int main()
{
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	if(n=1)
		printf("0\t");
	if(n>=2)
	{
		printf("0\t1\t");
	}
	fibo(0,1,n-2);
	return 0;
}
void fibo(int a,int b, int n)
{
//	printf("function");
	if(n<=0)
	{
	return;
	}	
	printf("%d\t",a+b);
	fibo(b,a+b,n-1);
	
}
