#include<stdio.h>
int xstrcmp(char *,char *);
main()
{
	char a[50],b[50],flag;
	printf("Enter the 1st String:");
	gets(a);
	printf("Enter the 2nd string");
	gets(b);
	flag=xstrcmp(a,b);
	if(flag==-1)
		printf("strings not identical");
	else
		printf("Strings are identical");
}
int xstrcmp(char *p1,char *p2)
{
	int len1=0,len2=0,i;
	for(i=0;*(p1+i)!='\0';i++)
		len1++;
	for(i=0;*(p2+i)!='\0';i++)
                len2++;
	if(len1!=len2)
		return -1;
	while(*p1!='\0' || *p2!='\0')
	{
		if(*p1!=*p2)
			return -1;
		p1++;
		p2++;

	}
	return 0;
}
