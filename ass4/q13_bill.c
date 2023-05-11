#include<stdio.h>
int main(){
	int cm,pm,total,bill;
	printf("Enter previous and current month rating:");
	scanf("%d%d",&pm,&cm);
	total=cm-pm;
	if(total<=100)
		bill=total*3;
	else if(total<=300)
		bill=300+(total-100)*5;
	else
		bill=300+1000+(total-300)*6;
	printf("Electricity bill=%d",bill);
	return 0;
}
