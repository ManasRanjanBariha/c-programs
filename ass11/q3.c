#include<stdio.h>
main()
{
	char s[50];
	int i;
	printf("Enter  a String:");
	scanf("%[^\n]",s);
//	printf("%d%d",'A','Z');
//	for(i=0;s[i]!='\0';i++)
//	{
////		if(s[i]>=97 && s[i]<=122)
////		{
////			s[i]-=32;
////		}
//
//	}
	strupr(s);
	printf("The string is %s",s);
}
