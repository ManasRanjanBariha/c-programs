#include<stdio.h>
int check(int);
int main()
{
	int res,num;
	printf("Enter any number");
	scanf("%d",&num);
	res=check(num);
	res==1?printf("The number is odd"):printf("the number is even");;
	return 0;
}
int check(int a)
{
	return a%2==0?0:1;
}
