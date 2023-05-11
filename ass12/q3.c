//structure program to take input details of student and display
#include<stdio.h>
main()
{
	struct DOB{
		int month;
		int year;
	};
	struct student{
		char name[50];
		int rollno;
		float fees;
		struct DOB date;
	};
	struct student s;
	printf("Enter your name:");
	gets(s.name);
	printf("Enter the fees :");
	scanf("%f",&s.fees);
	printf("enter your roll no:");
	scanf("%d",&s.rollno);
	printf("Enter month and year");
	scanf("%d%d",&s.date.month,&s.date.year);
	printf("name=%s\nfees=%f\nrollno=%d",s.name,s.fees,s.rollno);
	printf("dob month=%d \t year=%d",s.date.month,s.date.year);
}
