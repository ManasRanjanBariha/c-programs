#include<stdio.h>
int facto(int);
int main()
{
	int fact,num;
	printf("Enter any number");
	scanf("%d",&num);
	fact=facto(num);
	printf("The factorial of %d is %d",num,fact);
	return 0;
}
int facto(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	{
		fact*=i;
	}
	return fact;
}
