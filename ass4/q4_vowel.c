#include<stdio.h>
int main(){
	char ch;
	printf("Enter a charecter:");
	scanf("%c",&ch);
	if(ch=='A' || ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'|| ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u')
		printf("%c is Vowel",ch);
	else
		printf("%c is consonant",ch);
	return 0;
}
