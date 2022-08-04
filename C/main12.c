#include<stdio.h>
int main()    
{    
int n,r,sum=0,temp,digit, reverse;   
printf("enter the number");    
scanf("%d",&n);    
temp=n;
while(n>0)    
{    
digit=n%10;    
 reverse=reverse*10+digit;    
n=n/10;    
}    
if(temp==reverse)    
printf("YES , It is a palindrome  ");    
else
printf("NO,It is not a palindrome");   
return 0;  
}   

