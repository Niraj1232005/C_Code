#include <stdio.h>

int bubblesort(int a[],int n){
	int i,j,min,t,p;
	for(i=1;i<=n-1;i++){
		min=a[i];
		p=i;
		for(j=i;j<n;j++){
			if(a[j]<min){
				min=a[j];
				p=j;
			}
			t=a[i];
			a[i]=a[p];
			a[p]=t;
		}
		
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
    bubblesort(a, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

