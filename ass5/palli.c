#include<stdio.h>
int main()
{	int num,i,rem,rev=0,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(rev==temp)
		printf("Number  is pallindrome");
	else
		printf("Number is not a pallindrome");
	return 0;
}
