#include<stdio.h>
main()
{
	int a[50],n,*p,i,target;
	printf("Enter the size of array:");
	scanf("%d",&n);
	p=a;
	printf("Enter element into array");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p+=1;
	}
	printf("Enter a element to search");
	scanf("%d",&target);
	p=a;
	for(i=0;i<n;i++)
	{
		if(*p==target)
			break;
		p+=1;
	}
	i==n?printf("The targeted element is not in the array"):printf("The element is in %d index",i);
}
