#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter how many number you want to see in fibo series");
	scanf("%d",&n);
	if(n==2)
		printf("%d %d",a,b);
	else
	{
		printf("%d %d ",a,b);
		for(i=1;i<n-1;i++)
		{
			c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		}
	}
	return 0;
}
