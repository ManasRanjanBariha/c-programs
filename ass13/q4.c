#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr;
	int i,n,target;
	ptr=(int *)calloc(10,sizeof(int));
	if(ptr==NULL)
	{
		printf("memory allocation is falied");
		exit(0);
	}
	printf("Enter 10  element in to array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("Enter the element you want to search:");
	scanf("%d",&target);
	for(i=0;i<10;i++)
	{
		if(target==*(ptr+i))
			break;
	}
	if(i==10)
		printf("The element is not in the array.");
	else
		printf("The element is in the %d index of the array",i);

}
