#include<stdio.h>
void xstrcpy(char *,char *);
main()
{
	char s[50],cps[50];
        int len;
        printf("Enter  a String:");
        scanf("%[^\n]",s);
	xstrcpy(s,cps);
	printf("The original string= %s \n copy string is %s",s,cps);
}
void xstrcpy(char *p,char *c)
{
	while(*p!='\0')
	{
		*c=*p;
		p++;
		c++;		
	}

}
