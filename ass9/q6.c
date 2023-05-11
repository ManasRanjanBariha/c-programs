#include<stdio.h>
int prime(int);
int main()
{
	int res,num;
	printf("Enter any number");
	scanf("%d",&num);
	res=prime(num);
	if(res==1)
		printf("It is a prime number");
	else
		printf("It is not a prime number");
	return 0;
}
int prime(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
			return 0;
	}
	return 1;

}
