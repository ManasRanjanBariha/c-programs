#include<stdio.h>
main()
{
	int n,c=0,ar[100],i,target;
	printf("Enter the array size");
	scanf("%d",&n);
	printf("Enter elements to array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the element you want to search:");
	scanf("%d",&target);
	for(i=0;i<n;i++)
        {
        	if(target==ar[i])
		{
		 	printf("The target element is found on %d index ",i);
			c++;
		}
		c++;
        }
	if(c==i)
		printf("The element not found in the array\n");


}
