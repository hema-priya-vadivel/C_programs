/*SUM OF ODD NUMBERS BASED ON GIVEN LIMITS*/
#include <stdio.h>

int main()
{
    int i, n1,n2, sum=0;
    printf("Enter the lower limit: ");
    scanf("%d", &n1);
    printf("Enter the upper limit: ");
    scanf("%d", &n2);
    for(i=n1; i<=n2; i+=1)
    if(i%2==1)
    {
        sum += i;
    }
    printf("Sum of odd numbers = %d", sum);
    return 0;
}