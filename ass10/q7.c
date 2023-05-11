#include<stdio.h>
main()
{
	int a[50],n,*p,i,max=-999,min=999;
	printf("Enter the size of array:");
	scanf("%d",&n);
	p=a;
	printf("Enter element into array");
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p+=1;
	}
	p=a;
	for(i=0;i<n;i++)
	{
		if(max<*p)
		{
			max=*p;
		}
		if(min>*p)
		{
			min=*p;
		}
		p+=1;
	}
	printf("\nThe maximum element in array is %d",max);
	printf("\nThe minimum element in array is %d",min);
}
