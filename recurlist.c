#include<stdio.h>
#include<conio.h>
int main()
{
int n,r=0,i;
printf("Enter the number:");
scanf("%d",&n);
while(n>=1)
{
i=n%10;
r=r*10+i;
n=n/10;
}
printf("After reverse:%d",r);
return 0;
}
