#include<stdio.h>
int main(){
	int avg,a,b,c;
	printf("Enter nmark in three subject:");
	scanf("%d%d%d",&a,&b,&c);
	avg=(a+b+c)/3;
	switch(avg/10){
		case 9:printf("O grade");break;

		case 8:printf("E grade");break;
		case 7:printf("A grade");break;
		case 6:printf("B grade");break;
		case 5:printf("C grade");break;
		case 4:printf("D grade");break;
		default:printf("F grade");
	
	}
	return 0;
}
