#include<stdio.h>
#include<stdlib.h>
main()
{
	float *ptr;
	int i,n;
	printf("enter the number of elements in the array:");
	scanf("%d",&n);
	ptr=(float *)malloc(n*sizeof(float));
	if(ptr==NULL)
	{
		printf("memory allocation is falied");
		exit(0);
	}
	printf("Enter element intot array:");
	for(i=0;i<n;i++)
	{
		scanf("%f",ptr+i);
	}
	printf("elements of array=");
	for(i=0;i<n;i++)
	{
		printf("%f\t",*(ptr+i));
	}

}
