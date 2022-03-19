/*Starting with the first element(index = 0), 
compare the current element with the
 next element of the array.
 
If the current element is greater
 than the next element of the array, 
 swap them.
 
If the current element is less
 than the next element, move to
 the next element. Repeat Step 1.*/
   
   
 /*Step 1: Repeat Step 2 For1= to N-1
Step 2: Repeat ForJ= toN-I
Step 3: IF A[J] > A[J+1]
SWAP A[J] and A[J+1]
[END OF INNER LOOP]
[END OF OUTER LOOP]
Step 4: EXIT
 */
  
  
#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp, flag=0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
           if( arr[j] > arr[j+1])
            {     
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            } 
        }
        if(flag==0)
        {
            break;
        }
    }
    
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int main()
{
    int arr[100], i, n, step, temp;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    printf("Enter the elements :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    
    return 0;
}
   