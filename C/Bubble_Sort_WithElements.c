#include<stdio.h>
void main()
{
int arr[7]={57,83,62,5,17,9,111};
int temp;
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n-1;i++){
  for(int j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
     }
   }
}
printf("Sorted order:\n");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
 }
}
