#include<stdio.h>
#include<math.h>

int factorial(int num);
int cos_series(int x,int n);
int to_radian(int degree);

int factorial(int num){
	if(num==1 || num==0){
		return 1;
	}
	else{
		return num*factorial(num-1);
	}
}
int to_radian(int degree){
	return degree*3.14/180;
}

int cos_series(int x,int n){
	int result=0;
	for(int i=0;i<n;i++){
		int term=pow(-1,i)*pow(x,2*i)/factorial(2*i);
		result=result+term;
	}
	return result;
}

int main(){
	int x,n;
	printf(" enter x and n");
	scanf("%d %d",&x,&n);
	int x_radian=to_radian(x);
	
	int cos_result=cos_series(x_radian,n);
	printf("%d",cos_result);
	return 0;
}
