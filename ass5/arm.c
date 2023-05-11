#include<stdio.h>
int main()
{	int num,i,rem,sum=0,num1;
	printf("Enter a number:");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(num1==sum)
		printf("Number  is armstrong");
	else
		printf("Number is not a armstrong");
	return 0;
}
