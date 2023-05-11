#include<stdio.h>
main()
{
	int a[50],n,*p,i;
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
//	printf("The elements of array is ");
	for(i=0;i<n;i++)
	{
		printf("value of %d element is %d and address is %u\n",i,*p,p);
	//	printf("address of %d element is %u\n",i,p);
		p+=1;
	}
}
