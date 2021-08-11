/*Binary search
1.Arrange the elements in ascending order
2.Find the mid position of the given array
3.Compare the search element to the mid element
(a)If it is equal to the number
 we are searching 
then print element found
(b)If it is less than move to the right.
(c)If it is greater than move to the left.
Repeat the same step until element is found.
 let low=0 and high=n-1
 read the data to be searched X
 find the mid position of the given array
 mid=(low+high)/2 
 e) compare X with a[mid]
 if equal then
 goto step 3(a)
 else
 if X less than a[mid] then high=mid-1
 if X higher than a[mid] then low=mid+1*/


#include <stdio.h>

void main(){
  int a[100],i,x,n;
  printf("Enter the no of elements :\n");
  scanf("%d",&n);
  printf("Enter the array elements :\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  int temp,j;
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;       
      }
    }
  }
  printf("Array in sorted order:\n");
  for(i=0;i<n;i++)
   printf("%d \n",a[i]);
  
  
  printf("Enter the search element :\n");
    scanf("%d",&x);
  int low=0;
  int high=n-1;
  int  mid=(low+high)/2;   
  while(low<=high){
    if(a[mid]==x){
      printf("Entered element found");
      break;
    }
    else if(a[mid]<x){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
   mid=(low+high)/2;
   if(low>high){
     printf("Entered element not found");
   }
  }
  }
