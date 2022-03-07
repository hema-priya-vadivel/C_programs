/*Step 1:Find the largest number in ARR as LARGE
Step 2: [INITIALIZE] SET NOP = Number of digits
in LARGE
Step 3: SET PASS =0
Step 4: Repeat Step 5 while PASS <= NOP-1
Step 5: SET I = 0 and INITIALIZE buckets
Step 6:Repeat Steps 7 to 9 while I
Step 7: SET DIGIT = digit at PASSth place in A[I]
Step 8: Add A[I] to the bucket numbered DIGIT
Step 9: INCREMENT bucket count for bucket
numbered DIGIT
[END OF LOOP]
Step 10: Collect the numbers in the bucket
[END OF LOOP]
Step 11: END*/
  
  #include <stdio.h>
#include <conio.h>
#define size 10
int largest(int arr[], int n);
void radix_sort(int arr[], int n);
void main()
{
int arr[size], i, n;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++)
{
 scanf("%d", &arr[i]);
}
radix_sort(arr, n);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
getch();
}
int largest(int arr[], int n)
{
int large=arr[0], i;
for(i=1;i<n;i++)
{
 if(arr[i]>large)
 large = arr[i];
}
return large;
}
void radix_sort(int arr[], int n)
{
int bucket[size][size], bucket_count[size];
int i, j, k, remainder, NOP=0, divisor=1, large, pass;
large = largest(arr, n);
while(large>0)
{
NOP++;
large/=size;
}
for(pass=0;pass<NOP;pass++)
{
for(i=0;i<size;i++)
bucket_count[i]=0;
for(i=0;i<n;i++)
 {

remainder = (arr[i]/divisor)%size;
 bucket[remainder][bucket_count[remainder]] = arr[i];
bucket_count[remainder] += 1;
 }

i=0;
for(k=0;k<size;k++)
 {
for(j=0;j<bucket_count[k];j++)
 {
 arr[i] = bucket[k][j];
i++;
 }
 }
divisor *= size;
}
}
