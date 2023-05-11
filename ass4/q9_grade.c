#include<stdio.h>
int main()
{
	int avg,a,b,c;
	printf("Enter the mark  of three subject");
	scanf("%d%d%d",&a,&b,&c);
	avg =(a+b+c)/3;
	if(avg>=90)
		printf("O Grade");
	else
	{

		if( avg>=80)
			printf("E Grade");
		else
		{
			if(avg>=70)
				printf("A Grade");
			else
			{
				if(avg>=60)
					printf("B Grade");
				else
				{	
					if( avg>=50)
						printf("C Grade");
					else
					{
						if(avg>=40)
							printf("D Grade");
						else
							printf("F Grade");
					}
				}
			}
		}
	}
	return  0;

}
