#include<stdio.h>

int main(){
	int a,no,r;
	printf("enter no");
	scanf("%d",&no);
	
	while(no>0)
	{
		a=no%10;
		r=r*10+a;
		no=no/10;
	}
	printf("%d",r);
	return 0;
}
