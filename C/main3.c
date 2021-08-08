/*What is the Output of the following C program?*/

#include <stdio.h>

int main()
{
    int x,y;
    int *p;
    int temp=3;
    p=&temp;
    x=5*(temp+5)+*p;
    y=5*(*p+2)+temp;
    printf("%d\t%d",x,y);
    
}

/*Output: 43	28*/