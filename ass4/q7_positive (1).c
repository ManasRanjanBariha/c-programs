#include<stdio.h>
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==0)
		printf("The inputed number is 0");
	else
	{	if(num>0)
			printf("The inputed number %d is positive",num);
		else
			printf("The inputed number %d is negetive",num);
	}
	return 0;
}
