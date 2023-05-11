#include<stdio.h>
main()
{
	char s[50];
	int i=0,cc=0,cw=1,cs=0,ct=0;
	printf("Enter a sentence:");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='\t')
			ct++;
		if(s[i]==' ')
			cs++;
		if(s[i]==' ' && s[i+1]!=' ')
			cw++;
		printf("%c",s[i]);

	}
	printf("no.of\nchar=%d\nword=%d\ntab=%d\nspace=%d",i,cw,ct,cs);
}
