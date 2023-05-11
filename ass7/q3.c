#include<stdio.h>
main()
{
	int n,ar[100],i,small=10000;
	printf("Enter the array size");
	scanf("%d",&n);
	printf("Enter elements to array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
        {
        	if(small>ar[i])
		 	small=ar[i];
        }
	printf("%d is the smallest number in the array\n",small);


}
