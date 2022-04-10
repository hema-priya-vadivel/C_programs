#include <stdio.h>
#include <stdlib.h>
struct node
{
 int info;
 struct node *ptr;
}*front,*rear,*temp,*front1;
int frontelement();
void enq(int data);
void deq();
void display();

int count = 0;
void main() {
  int no, ch, e;
 printf("Queue ADT using Linked List");
 printf("\n 1.Enqueue");
 printf("\n 2.Dequeue");
 printf("\n 3.Display");
 printf("\n 4.Exit");
 
 
 while (1)
 {
 printf("\n Enter the choice : ");
 scanf("%d", &ch);
 switch (ch) {
 case 1:
 printf("Enter the data : ");
 scanf("%d", &no);
 enq(no);
 break;
 case 2:
 deq();
 break;
 case 3:
 display();
 break;
 case 4:
 exit(0);
 default:
   printf("Wrong choice, Please enter correct choice ");
 break;
 } } }

void enq(int data) {
 if (rear == NULL)
 {
 rear = (struct node *)malloc(1*sizeof(struct node));
 rear->ptr = NULL;
 rear->info = data;
 front = rear;
 }
 else
 {
 temp=(struct node *)malloc(1*sizeof(struct node));
 rear->ptr = temp;
 temp->info = data;
 temp->ptr = NULL;
 rear = temp;
 }
 count++; }
 
void display()
{
 front1 = front;
if ((front1 == NULL) && (rear == NULL))
 {
 printf("Queue is empty");
 return; }
 while (front1 != rear)
 {
 printf("%d ", front1->info);
 front1 = front1->ptr;
 }
 if (front1 == rear)
 printf("%d", front1->info);
}

void deq()
{
 front1 = front;
 if (front1 == NULL)
 {
 printf("\n Error: Trying to display elements from empty queue");
 return;
 }
 else
 if (front1->ptr != NULL)
 {
 front1 = front1->ptr;
 printf("\n Dequeued value : %d", front->info);
 free(front);
 front = front1;
 }
 else
 {
 printf("\n Dequeued value : %d", front->info);
 free(front);
 front = NULL;
 rear = NULL;
 }
 count--;
}