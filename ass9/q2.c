#include<stdio.h>
int large(int,int,int);
int main()
{
	int lar,num1,num2,num3;
	printf("Enter three number");
	scanf("%d%d%d",&num1,&num2,&num3);
	lar=large(num1,num2,num3);
	printf("The largest among three is `%d\n",lar);
	return 0;
}
int large(int a,int b,int c)
{
	int ans;
	if(a>b && a>c)
		ans=a;
	else if(b>a && b>c)
		ans=b;
	else
		ans=c;
	return ans;
}
