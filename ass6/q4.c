#include<stdio.h>
int main()
{
	int temp,n1,n2,i,num,rem,sum=0;
	printf("Enter the range:");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	{
		temp=n1;
		n1=n2;
		n2=n1;
	}
	else
	{
		temp=n2;
		n2=n1;
		n1=temp;
	}
	for(i=n2;i<n1;i++)
        {
		num=i;
	//	printf("%d ",rev);
		while(num!=0)
		{
			rem=num%10;
			sum=sum+rem;
			num=num/10;
		}
		if(i%sum==0)
			printf("%d ",i);
        	sum=0;
	}
//	printf("%d",i);
	return 0;
}
