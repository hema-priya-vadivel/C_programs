/*STEP 1. Start the program.

STEP 2. Read the elements in the array
STEP 3. For performing linear search,
Read the search element in the array
STEP 4.Compare the search element with 
all the elements 
in the array if it is found means print 
"element found" otherwise print 
"element not found"

Step 5:after performing linear search exit 
from the program.*/


#include <stdio.h>
void main(){
  int a[100],i,x,n;
  printf("Enter the no of elements :\n");
  scanf("%d",&n);
  printf("Enter the array elements :\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter the search element :\n");
    scanf("%d",&x);
  for(i=0;i<n;i++){
    if(a[i]==x){
      printf("Entered element found");
      break;
    }
  }
  if(i==n)
       printf("Entered element not found");
}
