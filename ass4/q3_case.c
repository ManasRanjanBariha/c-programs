#include<stdio.h>
int main(){
	char ch;
	printf("Enter a charecter:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
		printf("%c is lowercase charecter of %c",ch+32,ch);
	else
		printf("%c is uppercase charecter of %c",ch-32,ch);
	return 0;
}
