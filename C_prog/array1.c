#include <stdio.h>

int main(){
    int a[5]={3,6,2,8,1};\
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d %d",a[1],n);
}