#include<stdio.h>
main()
{
	int n,m,res[100],ar[50],ar1[50],i,j=0;
	printf("Enter the size of first array:");
	scanf("%d",&n);
	printf("Enter %d elements to first array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the size of second array:");
        scanf("%d",&m);
	printf("Enter %d elements into second array:",m);
        for(i=0;i<m;i++)
        {
                scanf("%d",&ar1[i]);
        }
	for(i=0;i<(n+m);i++)
        {
		if(i<n)
			res[i]=ar[i];
		else
		{
			res[i]=ar1[j];
			j++;
		}
        }
	printf("After merging the  elements of array is:");
	for(i=0;i<n+m;i++)
        {
               printf("%d\t",res[i]);
        }

}
