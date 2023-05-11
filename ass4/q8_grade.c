#include<stdio.h>
int main()
{
	int avg,a,b,c;
	printf("Enter the mark  of three subject");
	scanf("%d%d%d",&a,&b,&c);
	avg =(a+b+c)/3;
	if(avg>=90)
		printf("O Grade");
	if(avg<90 && avg>=80)
		printf("E Grade");
	if(avg<80 && avg>=70)
		printf("A Grade");
	if(avg<70 && avg>=60)
		printf("B Grade");
	if(avg<60 && avg>=50)
		printf("C Grade");
	if(avg<50 && avg>=40)
		printf("D Grade");
	if(avg<40)
		printf("F Grade");
	return  0;

}
