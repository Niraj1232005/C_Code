#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,t;
//	printf("Enter the no of terms");
//	scanf("%d",&n);
	
	printf("Enter the values");
		for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);}
		for(i=0;i<5;i++)
		{
		 for(j=i+1;j<5;j++)
		 {
		 if(a[i]<a[j])
		{
		 t=a[i];
		 a[i]=a[j];
	     a[j]=t;}}}
	    {
		
			printf("Integer Decending order");}
			for(i=0;i<5;i++)
			{
				printf("%d",a[i]);
			}
		return 0;
}

	
	
	
	
	
	

