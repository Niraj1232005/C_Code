#include<stdio.h>
int facto(int no)
{
    int i,fact=1;
for(i=1;i<=no;i++)
{
fact=fact*i;
}
return fact;
}
int main()
{
int no,fa,i,j;
printf("Enter no\n");
scanf("%d",&no);
for(i=0;i<no;i++)
{
for(j=0;j<no-i;j++)
{
printf(" ");
}
for(j=0;j<=i;j++)
{
fa=facto(i)/(facto(j)*facto(i-j));
printf("%d ",fa);
}
printf("\n");
}
}

