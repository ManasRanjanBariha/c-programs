#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr;
	int  j,r,c,i;
	printf("enter the number of rows and column of the matrix:");
	scanf("%d%d",&r,&c);
	ptr=(int *)malloc(r*c*(sizeof(int)));
	if(ptr==NULL){
		printf("allocation failed");
		exit(0);
	}
	printf("enter elements into matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",(ptr+i*c+j));
	}
	printf("\nThe element of the matrix :\n");
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",*(ptr+i*c+j));
                }
		printf("\n");
        }
}
