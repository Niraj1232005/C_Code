#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,j,t;
	printf("Enter the no of terms");
	scanf("%d",&n);
	
	printf("");
		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);}
		for(i=0;i<n;i++)
		{
		 for(j=i+1;j<n;j++)
		 {
		 if(a[i]<a[j])
		{
		 t=a[i];
		 a[i]=a[j];
	     a[j]=t;}}}
	    {
		
			printf("Integer Decending order");}
			for(i=0;i<n;i++)
			{
				printf("%d",a[i]);
				printf("\t\n");
			}
		return 0;
}

	
	
	
	
	
	

