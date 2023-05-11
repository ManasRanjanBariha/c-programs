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
	if(a==0 || a==1)
		return 1;
	else
		return (a*facto(a-1));
}
