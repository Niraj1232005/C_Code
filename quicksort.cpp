#include<stdio.h>

int partition(int a[],int l,int r){
	int i,j,t,x;
	x=a[l];
	i=l;
	j=r;
	while(i<j){
		while(i<=r && a[i]<=x)
			i++;
		while(a[j]>x)
			j--;
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[l];
	a[l]=a[j];
	a[j]=t;
	return j;
	}

void quicksort(int a[],int l,int r){
	int p;
	if(l<r){
		p=partition(a,l,r);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
}

int main() {
    int i, n, a[10];
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    quicksort(a,0,n-1);
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
