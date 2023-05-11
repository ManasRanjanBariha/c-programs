#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char *p,ch[50];
	p=(char *)malloc(10*sizeof(char));
	ptr=(char *)malloc(100);
	printf("Enter your name:");
	gets(p);
	strcpy(ptr,p);
	p=realloc(p,50);
	//puts(p);
	printf("Enter your last name:");
	gets(p);
	printf("Your name is ");
	strcat(ptr,p);
	printf("%s",*ptr);
	free(p);
}
