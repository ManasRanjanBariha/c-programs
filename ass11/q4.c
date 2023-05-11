#include<stdio.h>
main()
{
	char s[50];
	int i,n,len=0;;
	printf("Enter  a String:");
	scanf("%[^\n]",s);
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	if(n>len)
	{	
		printf("the value of n is greater than string length");
	}
	
	else
	{
		printf("the first n charecter of the string:");
		for(i=0;i<n;i++)
		{
			printf("%c",s[i]);
		}
	}
}
