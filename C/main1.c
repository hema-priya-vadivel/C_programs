/*What is the output of the following C code?*/

#include <stdio.h>

void main()
{
    int i=1,j=1;
    for(; ;){
        if(i>5){
            break;
        }
        else{
            j+=i;
            printf("\n %d",j);
            i+=j;
        }
    }
}

/* Output: 2 
           5 */