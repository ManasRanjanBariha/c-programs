#include<stdio.h>
int gcd(int,int);
int main()
{
	int g,num1,num2;
	printf("Enter two number");
	scanf("%d%d",&num1,&num2);
	g=num1>num2?gcd(num1,num2):gcd(num2,num1);
	printf("the gcd of %d,%d is %d\n",num1,num2,g);
	return 0;
}
int gcd(int a,int b)
{
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
