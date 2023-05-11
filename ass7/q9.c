#include<stdio.h>
main()
{
        int ar[50],i,j,n,flag=1;
        printf("Enter the size of array:");
        scanf("%d",&n);
        printf("Enter %d elements to array:",n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&ar[i]);
        }
        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(ar[i]==ar[j])
                        {
                                printf("%d ",ar[i]);
                                flag=0;
                        }
                        
                }
    }

                            
        
        if(flag==0)
                printf("\nthese are the duplicate elements of array");
        else
                printf("there is no duplicate elements in the array");
        return 0;
}
    
