#include<stdio.h>

int fab(int n);

int main(){
	printf("%d",fab(6));
	return 0;
}

int fab(int n){
	if(n==0 || n==1){
		if(n==0){
			return 0;
		}
		if(n==1){
		return 1;
	}
	}
	int fabn=fab(n-1);
	int fabm=fab(n-2);
	int fabnt=fabn+fabm;
	printf("fib of %d is %d",n,fabnt);
	return fabnt;
}
