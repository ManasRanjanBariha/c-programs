#include<stdio.h>
main()
{
	int a[50],n,*p,i,target,f=-1;
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
	//printf("The elements of array is ");
	for(i=0;i<n;i++)
	{
		if(*p==target)
		{
			f=i;
			break;
		}
				p+=1;
	}
	f==-1?printf("The element is not in the array"):printf("The element is in %d index",i);
}
