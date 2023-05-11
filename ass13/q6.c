#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr,*ptr1;
	int  j,r,c,i;
	printf("enter the number of rows and column of the matrix:");
	scanf("%d%d",&r,&c);
	ptr=(int *)malloc(r*c*(sizeof(int)));
	if(ptr==NULL){
		printf("allocation failed");
		exit(0);
	}
	ptr1=(int *)malloc(r*c*(sizeof(int)));
        if(ptr1==NULL){
                printf("allocation failed");
                exit(0);
        }
	printf("enter elements into 1st matrix:");
	for(i=0;i<r*c;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("enter elements into 2nd matrix:");
        for(i=0;i<r*c;i++)
        {
                scanf("%d",(ptr1+i));
        }

	printf("\nThe sum  of the matrix :\n");
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",(*(ptr+i*c+j)+*(ptr1+i*c+j)));
                }
		printf("\n");
        }
}
