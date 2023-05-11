//structure program to take input details of student and display
#include<stdio.h>
main()
{
	struct info{
		char name[50];
		char branch[10];
		char sic[15];
		int rollno;
	};
	struct info s;
	printf("Enter your name:");
	gets(s.name);
	printf("Enter your branch:");
	gets(s.branch);
	printf("Enter your sic no");
	gets(s.sic);
	printf("enter your roll no:");
	scanf("%d",&s.rollno);
	printf("name=%s\nbranhc=%s\nsic=%s\nrollno=%d",s.name,s.branch,s.sic,s.rollno);
}
