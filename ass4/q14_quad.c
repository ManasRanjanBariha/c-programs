#include<math.h>
#include<stdio.h>
int main(){
	int a,b,c,D;
	float root1,root2;
	printf("Enter a,b,c of quadratic equation:");
	scanf("%d%d%d",&a,&b,&c);
	D=(b*b)-4*a*c;
	if(D>0){
		printf("Real roots\n");
		root1=(-b+D)/(2*a);
		root2=(-b-D)/(2*a);
		printf("The roots are %f,%f",root1,root2);
	}
	else if(D==0){
		printf("Single root\n");
		root1=(-b+D)/(2*a);
		printf("The root is %f",root1);
	}
	else
		printf("Imaginary roots");

	return 0;

}
