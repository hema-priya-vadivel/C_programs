#include<stdio.h>
int stack[100],choice,n,top,x,i;
void main()
{
  top=-1;
 printf("\n Enter the size of stack:");
 scanf("%d",&n);
 printf("\n*Stack Operations using array*");
 printf("\n1.Push");
 printf("\n2.Pop");
 printf("\n3.Display");
 printf("\n4.Exit");
 do{
   printf("\nEnter the Choice:");
   scanf("%d",&choice);
 switch(choice) {
   case 1:
      push();
      break;
   case 2:
      pop();
      break;
   case 3:
      display();
      break;
   case 4:
      printf("Exit");
      break;
   default:
      printf ("\nWrong Choice: Please check the Choice");
  } 
}
 while(choice!=4);
}
void push(){
 if(top>=n-1){
   printf("\nStack is overflow");
 }
 else{
   printf("\nEnter a value to be pushed:");
   scanf("%d",&x);
   top++;
   stack[top]=x;
 }
}
void pop(){
 if(top<=-1){
   printf("\nStack is underflow");
 }
 else{
   printf("\nThe popped element is %d",stack[top]);
   top--;
 } 
}
void display(){
 if(top>=0){
   printf("\nThe elements in Stack are:");
   for(i=top; i>=0; i--)
     printf("\n%d",stack[i]);
 }
 else{
  printf("\nStack is empty");
 } 
 }