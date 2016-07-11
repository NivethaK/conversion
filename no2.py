#include<stdio.h> 
int main() 
{ 
int num, r, f=0; 
 
scanf("%d",&num); 
while(num>2) 
{ 
r=num%2; 
if(r==1) 
{ 
f=1; 
break; 
} 
else 
num=num/2; 
} 
if(f==1) 
printf("\n Num is not Power of two."); 
else 
printf("\n Num is Power of two"); 
} 
