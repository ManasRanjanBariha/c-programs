#include<stdio.h>
struct distance
{
	int km;
	int m;
};
void display(struct distance *);
main()
{
	struct distance s1;
	printf("enter the distance in  km and metre");
	scanf("%d %d",&s1.km,&s1.m);
	display(&s1);
}
void display(struct distance *ptr)
{
		printf("%d km and %d m",ptr->km,ptr->m);
}

