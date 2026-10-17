#include<stdio.h>

int main(){
	int i,a[100],n,t;
	printf("enter n");
	scanf("%d",&n);
	printf("enter the value ");
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	t=a[0];
	for(i=0;i<n;i++){
		a[i]=a[i+1];
	}
	a[n-1]=t;
	printf("array \n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
