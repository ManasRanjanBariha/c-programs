#include<stdio.h>
main()
{
	int a[50],n,*p,i,even=0,odd=0;
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
	//printf("The elements of array is ");
	for(i=0;i<n;i++)
	{
		if(*p%2==0)
			even++;
		else 
			odd++;
		p+=1;
	}
	printf("\nThe number of even number in array is %d",even);
	printf("\nThe number of odd number in array is %d",odd);
}
