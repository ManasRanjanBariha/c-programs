#include<stdio.h>
int main(){
	long int tax,salary;
	printf("Enter your income: ");
	scanf("%ld",&salary);
	if(salary<=150000)\
		tax=0;
		else if(salary<=300000)
			tax=(salary*10)/100;
			else if(salary<=500000)
				tax=(salary*20)/100;
				else
					tax=(salary*30)/100;

	printf("Your Income tax =%ld",tax);
}
