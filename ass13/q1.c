#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("Enter two number:");
	int *ptr=(int *)malloc(2*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory allocation failed");
		exit(0);
	}
	scanf("%d%d",ptr,ptr+1);
	if(*ptr>*(ptr+1))
	{
		printf("%d is the largest",*ptr);
	}
	else if(*(ptr+1)>*ptr)
	{
		printf("%d is the largest",*(ptr+1));
	}
	else
	{
		printf("Both are equal");
	}
}
