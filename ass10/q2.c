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
	printf("The elements of array is ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*p);
		p+=1;
	}
//	printf("The maximum element in array is %d",max);
//	printf("The minimum element in array is %d",min);
}
