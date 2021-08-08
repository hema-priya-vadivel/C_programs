/*What is the output of the following C program?*/

#include <stdio.h>

int main()
{
    float x;
    float *ptr;
    x=13.4;
    ptr=&x;
    printf("%f \n",ptr);
    printf("%f \n",*ptr);
    *ptr=*ptr+7.6;
    printf("%f \n",*ptr);
    return 0;
    
}

/*Output: 0.000000 
          13.400000 
          21.000000 */
