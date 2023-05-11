#include<stdio.h>
int main(){
	int m,n,temp;
	printf("Enter the m and n:");
	scanf("%d%d",&m,&n);
	if(n<m)
	{
		temp=m;
		m=n;
		n=temp;
	}
	for(int i=m;i<=n;i++){
		printf("%d ",i);
	}
	return 0;
}
