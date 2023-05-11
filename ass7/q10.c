#include<stdio.h>
main()
{
        int ar[50],i,j,n,large=-9999,sec_large=-9999;
        printf("Enter the size of array:");
        scanf("%d",&n);
        printf("Enter %d elements to array:",n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&ar[i]);
        }
        for(i=0;i<n;i++)
        {
                if(large<ar[i])
                {
                        sec_large=large;
                        large=ar[i];
                }
                else if(sec_large<ar[i])
                {
                        sec_large=ar[i];
                }

        }
        printf("The second largest element=%d",sec_large);
}

