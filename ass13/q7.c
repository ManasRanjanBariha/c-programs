#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char *p;
	p=(char *)malloc(4);
	if(p==NULL)
	{
		printf("Memory has not be allocated");
		exit(0);
	}
	int i=0;
	while(*(p+i)!='\0')
	{
		printf("%c",*(p+i));
		i++;
	}
	printf("Enter your name:");
	gets(p);
	printf("%d",strlen(p));
//	puts(p);
	p=realloc(p,50);
	gets(p);
	printf("Enter your name again");
	gets(p);
	printf("Your name is");
	puts(p);
	free(p);
}
