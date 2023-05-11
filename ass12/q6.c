#include<stdio.h>
struct distance
{
	int km;
	int m;
};
struct distance addstructure(struct distance,struct distance);
main()
{
	struct distance s1,s2,s3;
	printf("enter the distance in  km and metre");
	scanf("%d %d",&s1.km,&s1.m);
	printf("enter the distance in km and meter");
	scanf("%d %d",&s2.km,&s2.m);
	s3=addstructure(s1,s2);
	printf("The additon of s1 and s2 is %d km and %d m ",s3.km,s3.m);
}
struct distance addstructure(struct distance p1,struct distance p2)
{
	int n;
	struct distance ans;
	ans.km=p1.km+p2.km;
	ans.m=p1.m+p2.m;
	n=ans.m/1000;
	ans.km+=n;
	ans.m=ans.m%1000;
	return ans;
}

