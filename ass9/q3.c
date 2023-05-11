#include<stdio.h>
float area(float);
int main()
{
	float rad,a;
	printf("Enter radious o the circle:");
	scanf("%f",&rad);
	a=area(rad);
	printf("the area of the tringle is %.2f",a);
	return 0;
}
float area(float r)
{
	return (r*r*3.141);
}
