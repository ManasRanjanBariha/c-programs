#include<stdio.h>
int add(int,int);
int main()
{
	int sum,num1,num2;
	printf("Enter two number");
	scanf("%d%d",&num1,&num2);
	sum=add(num1,num2);
	printf("%d+%d=%d\n",num1,num2,sum);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
