#include<stdio.h>
#define n 5
void main()
{
 int queue[n],choice=1,front=0,rear=0,i,j=1,x=n;
 printf("*Queue ADT using Array*");
 printf("\n1.Insertion");
 printf("\n2.Deletion");
 printf("\n3.Display");
 printf("\n4.Exit");

 while(choice)
 {
   printf("\nEnter the Choice:");
   scanf("%d",& choice);
   switch(choice)
   {
     case 1:
       if(rear==x){
         printf("\n Queue is Full");
       }
       else{
         printf("\n Enter the value %d:",j++);
         scanf("%d",&queue[rear++]);
       }
       break;
     case 2:
       if(front==rear)
       {
         printf("\n Queue is empty");
       }
       else
       {
       printf("\n Deleted Element is %d",queue[front++]);
       x++;
       }
       break;
     case 3:
       printf("\n Queue Elements are:\n ");
       if(front==rear){
       printf("\n Queue is Empty");
       }
       else{
         for(i=front; i<rear; i++){
           printf("%d",queue[i]);
           printf("\n");
       }
       }
       break;
     case 4:
       exit(0);
     default:
       printf("Wrong Choice: Please check the Choice");
    }
  }
}