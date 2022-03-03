#include<stdio.h>
void Selection(int arr[],int n){
  int i,j,min_idx,temp;
for(i=0;i<n-1;i++){
min_idx=i;
for(j=i+1;j<n;j++){
if(arr[j]<arr[min_idx]){
min_idx=j;
temp=arr[min_idx];
arr[min_idx]=arr[i];
arr[i]=temp;
}
}
}
printf("Sorted items:\n");
for(i=0;i<n;i++){
printf("%d\n",arr[i]);
}
}
int main()
{
int arr[6]={241,37,78,16,15,7};
int n=sizeof(arr)/sizeof(int);
Selection(arr,n);
return 0;
}
