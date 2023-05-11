#include<stdio.h>
#include<math.h>
int main()
{	
	int n,i;
	float fact=1;
	float res=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		res=res+(1/fact);
	}
	printf("result=%f",res);
	return 0;
}
