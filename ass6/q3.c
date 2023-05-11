#include<stdio.h>
int main()
{
	int n1,n2,i,j,p=1,num,temp,rem,sum=0;
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
        while(num>0)
        {
                rem=num%10;
                sum=sum+(rem*rem*rem);
                num=num/10;
        }
        if(i==sum)
                printf("%d ",i);
	sum=0;
	}
//	printf("%d",i);
	return 0;
}
