#include<stdio.h>
int cube(int x);
int main()
{ int n=5;
printf("Cube of %d is %d",n,cube(n));
return 0;
}
int cube(int x)
{
x=x*x*x;
return(x);
}
