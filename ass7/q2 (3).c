#include<stdio.h>
main()
{
	int n,ar[100],i,larg;
	printf("Enter the array size");
	scanf("%d",&n);
	printf("Enter elements to array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	larg=ar[0];
	for(i=0;i<n;i++)
        {
        	if(larg<ar[i])
		 	larg=ar[i];
        }
	printf("%d is the largest number in the array",larg);


}
