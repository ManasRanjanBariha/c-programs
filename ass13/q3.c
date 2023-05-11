#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr;
	int i,n,small=9999;
	printf("enter the number of elements in the array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory allocation is falied");
		exit(0);
	}
	printf("Enter element intot array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		if(small>*(ptr+i))
			small=*(ptr+i);
	}
	printf("smallest elements of array=%d",small);


}
