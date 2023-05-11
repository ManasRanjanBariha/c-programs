#include<stdio.h>
int main()
{ 	int num,i;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("%d is not prime",num);
			break;
		}
	}
	if(i==num)
		printf("%d is prime",num);
	return 0;
}
