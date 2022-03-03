

/*Consider an array ARR with N elements. Selection sort works as follows:
First find the smallest value in the array and place it in the first position. Then, find the second 
smallest value in the array and place it in the second position. Repeat this procedure until the 
entire array is sorted. Therefore,
∑ In Pass 1, find the position POS of the smallest value in the array and then swap ARR[POS] and 
ARR[0]. Thus, ARR[0] is sorted.
∑ In Pass 2, find the position POS of the smallest value in sub-array of N–1 elements. Swap 
ARR[POS] with ARR[1]. Now, ARR[0] and ARR[1] is sorted.
∑ In Pass N–1, find the position POS of the smaller of the elements ARR[N–2] and ARR[N–1]. Swap 
ARR[POS] and ARR[N–2] so that ARR[0], ARR[1], ..., ARR[N–1] is sorted.*/




/*SELECTION SORT(ARR, N)
Step 1: Repeat Steps 2 and 3 for K=1
to N-1
Step 2: CALL SMALLEST(ARR, K, N, POS)
Step 3: SWAP A[K] with ARR[POS]
[END OF LOOP]
Step 4: EXIT

SMALLEST (ARR, K, N, POS)
Step 1: [INITIALIZE] SET SMALL = ARR[K]
Step 2: [INITIALIZE] SET POS=K
Step 3: Repeat forJ= K+1 to N
IF SMALL > ARR[J]
SET SMALL = ARR[J]
SET POS=J
[END OF IF]
[END OF LOOP]
Step 4: RETURN POS*/



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int smallest(int arr[], int k, int n);
void selection_sort(int arr[], int n);
void main() {
int arr[10], i, n;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++)
{
 scanf("%d", &arr[i]);
}
selection_sort(arr, n);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
}
int smallest(int arr[], int k, int n)
{
int pos = k, small=arr[k], i;
for(i=k+1;i<n;i++)
{
 if(arr[i]< small)
 {
 small = arr[i];
 pos = i;
 }
}
return pos;
}
void selection_sort(int arr[],int n)
{
int k, pos, temp;
for(k=0;k<n;k++)
{
 pos = smallest(arr, k, n);
 temp = arr[k];
 arr[k] = arr[pos];
 arr[pos] = temp;
 }
 }