#include<stdio.h>
void test(char *,char *);
main()
{
	char s[50],cps[50];
    int len;
    printf("Enter  a String:");
	gets(s);
	printf("enter the string you want to conatenate");
	gets(cps);
	test(s,cps);
	printf("After concatinate the string is = %s \n copy string is %s",cps,s);
}
void test(char *p,char *c)
{
	int i,j;
	for(i=0;*p!='\0';i++)
	{
		p=p+i;	
	}
//	printf("%c",*p);
	for(j=0;*c!='\0';j++)
	{
		*p=*c;
		p=p+j;
		c=c+j;
	}

}
