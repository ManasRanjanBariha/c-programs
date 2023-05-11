#include<stdio.h>
main()
{
	struct emp{
		char name[50];
		int salary;
	};
	struct emp a[20];
	int n,i;
	printf("Enter the number of employees");
	scanf("%d",&n);
	printf("Enter the employess detail:");
	for(i=0;i<n;i++)
	{
		printf("Enter employess name:");
		scanf("%s",a[i].name);
		printf("enter the salary:");
		scanf("%d",&a[i].salary);
	}
	for(i=0;i<n;i++)
        {
                printf("the %d employess name=%s\t salary=%d\n",i+1,a[i].name,a[i].salary);
        }


}
