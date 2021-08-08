/*What is the Output of the following C program?*/

#include <stdio.h>

    int pr(int);
    int pr(int g){
        g=g%15+1-8/2;
        return g;
    }
    
    int main(){
        int a,b;
        a=8;
        b=pr(a);
        printf("%d",b);
        return 0;
        
    }


/*Output: 5 */