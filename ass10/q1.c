#include<stdio.h>
main()
{
	int *p,n;
	printf("Enter a number:");
	scanf("%d",&n);
	p=&n;
	printf("value of n=%d",*p);
	printf("\naddress of n=%u",p);
}
