#include<stdio.h>
main()
{
	int n,temp,ar[100],i,small=10000,large=-9999,m,s;
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
		{
		 	small=ar[i];
			s=i;
		}
		if(large<ar[i])
		{
			large=ar[i];
			m=i;
		}

        }
	temp=ar[m];
	ar[m]=ar[s];
	ar[s]=temp;
	printf("After interchanging the values of smallest and largest values\n");
	printf("The values are ");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}


}
