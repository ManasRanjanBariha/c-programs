#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter two number:");
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
		printf("The inputed number are same");
	else
	{	if(num1>num2)
			printf("num1 is greater than num2");
		else
			printf("num1 is smaller than num2");
	}
	return 0;
}
