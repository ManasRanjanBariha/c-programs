#include<stdio.h>
int main()
{
	int num1,num2,rem,diviser,dividant;
	printf("Enter 2 numbers:");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		dividant=num2;
		diviser=num1;
	}
	else
	{
		dividant=num2;
		diviser=num1;
	}
	while(diviser)
	{
		rem=dividant % diviser;
		dividant=diviser;
		diviser=rem;
	}
	printf("GCD=%d",dividant);
	return 0;
}
