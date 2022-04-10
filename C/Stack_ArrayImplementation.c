#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
int main()
{
 //clrscr();
 top=-1;
 printf("\n Enter the size of STACK:");
 scanf("%d",&n);
 printf("\n\t STACK OPERATIONS USING ARRAY");
 printf("\n\t--------------------------------");
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.EXIT\n\t");
 do
 {
 printf("\n Enter the Choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 {
 push();
 break;
 }
 case 2:
 {
 pop();
 break;
 }
 case 3:
   {
  printf("Exit");
  break;
 }
 default:
 {
 printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
 } } }
 while(choice!=4);
 return 0;
}
void push()
{
 if(top>=n-1)
 {
 printf("\n\tSTACK is over flow");
 
 }
 else
 {
 printf(" Enter a value to be pushed:");
 scanf("%d",&x);
 top++;
 stack[top]=x;
 printf("The entered data is pushed");
 } }
void pop()
{
 if(top<=-1)
 {
 printf("\n\t Stack is under flow");
 }
 else
 {
 printf("\n\t The popped elements is %d",stack[top]);
 top--;
 }
}
