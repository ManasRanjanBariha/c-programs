#include<stdio.h>
int main()
{
	int n1,n2,i,j,num,temp;
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
		for(j=2;j<num;j++)
		{	
			if(num%j==0)
                		break;
		}
		if(j==num)
			printf("%d ",num);
        }

	return 0;
}
