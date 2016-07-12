#include<stdio.h>
int main()
{
int n,r,s=0,t;
printf("Enter a number:");
scanf("%d",&n);
t=n;
while(n)
{
r=n%10;
n=n/10;
s=s*10+r;
}
if(t==s)
printf("%d is a palindrome",t);
else
printf("%d is not palindrome",t);
return 0;
}
