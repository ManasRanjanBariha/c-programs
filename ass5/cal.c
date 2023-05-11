#include<stdio.h>
int main()
{
	int num1,num2,ci=0,res;
	while(ci!=5)
	{
	printf("enter your choice\n1.addtion\t2.subtraction\n3.multiplication\t4.division\n5.quit\n");
	scanf("%d",&ci);
	
	switch(ci)
	{
		case 1:printf("Enter 2 numbers:");
		       scanf("%d%d",&num1,&num2);
		       res=num1+num2;
		       printf("sum=%d",res);
		       break;
		case 2:printf("Enter 2 numbers:");
                       scanf("%d%d",&num1,&num2);
                       res=num1-num2;
                       printf("sub=%d",res);
                       break;

 		case 3:printf("Enter 2 numbers:");
                       scanf("%d%d",&num1,&num2);
                       res=num1*num2;
                       printf("mul=%d",res);
                       break;
			case 4:printf("Enter 2 numbers:");
                       		scanf("%d%d",&num1,&num2);
                       		res=num1/num2;
                       		printf("div=%d",res);
                       	break;
		case 5:break;
		default:printf("Please enter between among choice");
			
		}
	}
	return 0;
}
