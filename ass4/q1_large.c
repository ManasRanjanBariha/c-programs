#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter two number:");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
		printf("%d is the largest",num1);
	else
		printf("%d is the largest",num2);
	return 0;
}
