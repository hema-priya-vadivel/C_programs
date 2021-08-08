/*Step 1: Arrange the elements of the array in the form of a table and sort the columns (using 
insertion sort).
 Step 2: Repeat Step 1, each time with smaller number of longer columns in such a way that 
at the end, there is only one column of data to be sorted.
Note that we are only visualizing the elements being arranged in a table, the algorithm does its 
sorting in-place.*/ 

 /*Shell_Sort(Arr, n)
Step 1: SET FLAG=1, GAP_SIZE=N
Step 2: Repeat Steps 3 to 6 while FLAG=1OR GAP_SIZE>1
Step 3: SET FLAG =
Step 4: SET GAP_SIZE = (GAP_SIZE + 1) / 2
Step 5: Repeat Step 6 forI= to I < (N - GAP_SIZE)
Step 6: IF Arr[I + GAP_SIZE] > Arr[I]
SWAP Arr[I + GAP_SIZE], Arr[I]
SET FLAG =0
Step 7: END
*/
  
#include<stdio.h>
void main()
{
int arr[10]={-1};
   int i, j, n, flag = 1, gap_size, temp;
   printf("\n Enter the number of elements in the array: ");
   scanf("%d", &n);
   printf("\n Enter %d numbers: ",n); // n was added
   for(i=0;i<n;i++)
   scanf("%d", &arr[i]);
   gap_size = n;
   while(flag == 1 || gap_size > 1){
      flag = 0;
      gap_size = (gap_size + 1) / 2;
      for(i=0; i< (n - gap_size); i++){
         if( arr[i+gap_size] < arr[i]){
            temp = arr[i+gap_size];
            arr[i+gap_size] = arr[i];
            arr[i] = temp;
            flag = 0;
		}
	  }
	}
   printf("\n The sorted array is: \n");
   for(i=0;i<n;i++){
      printf(" %d\t", arr[i]);
	}
}