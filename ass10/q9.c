#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	printf("before swapping value of a=%d and value of b=%d",a,b);
	swap(&a,&b);
	printf("\nafter swapping value of a=%d and value of b=%d",a,b);
	return 0;
}
void swap(int *p1,int *p2)
{
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
}
