/*Insertion sort works as follows:
∑ The array of values to be sorted is divided into two sets. One that stores sorted values and 
another that contains unsorted values.
∑ The sorting algorithm will proceed until there are elements in the unsorted set.
∑ Suppose there are n elements in the array. Initially, the element with index 0 (assuming LB =
0) is in the sorted set. Rest of the elements are in the unsorted set.
∑ The first element of the unsorted partition has array index 1 (if LB = 0).
∑ During each iteration of the algorithm, the first element in the unsorted set is picked up and 
inserted into the correct position in the sorted set.*/


/*Step 1: Repeat Steps 2 to 5 forK=1toN–1
Step 2: SET TEMP = ARR[K]
Step 3: SETJ=K-1
Step 4: Repeat while TEMP <= ARR[J]
SET ARR[J + 1] = ARR[J]
SETJ=J-1
[END OF INNER LOOP]
Step 5: SET ARR[J + 1] = TEMP
[END OF LOOP]
Step 6: EXIT
*/

#include<stdio.h>
#include<conio.h>

void main(){

   int n, i, j, temp, a[100];
 
   printf("Enter the no of elements: ");
   scanf("%d", &n);
 
   printf("Enter the elements: ", n);
   for (i = 0; i < n; i++) 
      scanf("%d", &a[i]);
      
   for (i = 1; i < n; i++) {
      temp = a[i];
      j = i - 1;
      while ((temp < a[j]) && (j >= 0)) {
         a[j + 1] = a[j];
         j = j - 1;
      }
      a[j + 1] = temp;
   }
 
   printf("List after Sorting is: ");
   for (i = 0; i < n; i++)
      printf(" %d", a[i]);

  getch();
}