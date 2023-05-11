#include<stdio.h>
int main()
{
	int n1,n2,i,j,p=1,num,temp,rem,rev=0;
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
	//	printf("%d ",rev);
		num=i;
		while(num!=0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		if(i==rev)
			printf("%d ",i);
        	rev=0;
	}
//	printf("%d",i);
	return 0;
}
