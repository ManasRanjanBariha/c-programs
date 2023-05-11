#include<stdio.h>
int xstrlen(char[]);
main()
{
	char s[50];
        int len;
        printf("Enter  a String:");
        scanf("%[^\n]",s);
	len=xstrlen(s);
	printf("The length of the string is %d",len);
}
int xstrlen(char s[])
{
	int i,len=0;
	for(i<0;s[i]!='\0';i++)
		len++;
	return len;
}
