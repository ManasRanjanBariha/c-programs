#include<stdio.h>
#include<math.h>
main()
{
	struct point{
		int x;
		int y;
	};
	struct point p1,p2;
	printf("Enter the x y coordinate of 1st point");
	scanf("%d %d",&p1.x,&p1.y);
	printf("Enter the x y coordinate of 2nd point");
	scanf("%d%d",&p2.x,&p2.y);
	int x=(p2.x-p1.x)*(p2.x-p1.x);
	int y=(p2.y-p1.y)*(p2.y-p1.y);
	float d=sqrt(x+y);
	printf("the distance is %f",d);
}
