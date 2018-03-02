#include<stdio.h>
int main()
{
int n,i,c;
int a=1,b=1;
printf("enter a number:");
scanf("%d",&n);
printf("%d\t%d\t",a,b);
for(i=2;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
return 0;
}
