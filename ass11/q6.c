#include<stdio.h>
main()
{
	char s[50];
	int i,n,p,len=0;
	printf("Enter  a String:");
	scanf("%[^\n]",s);
	printf("enter the postion and length of substring:");
	scanf("%d%d",&p,&n);
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	if(n+p<len)
	{
		printf("the substring:");
		for(i=p;i<=n+p-1;i++)
		{
			printf("%c",s[i]);
		}
	}
	else
		printf("It is going outside of string");
}
