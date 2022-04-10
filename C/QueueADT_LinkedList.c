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
void empty();
void display();
void create();
void queuesize();
int count = 0;
 
void main()
{
    int no, ch, e;
    printf("**Queue Implementation using Linked list**\n");
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Front element\n");
    printf("4.Empty\n");
    printf("5.Exit\n");
    printf("6.Display\n");
    printf("7.Queue size\n");
    create();
    while (1)
    {
        printf("\n Enter the choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d", &no);
            enq(no);
            break;
        case 2:
            deq();
            break;
        case 3:
            e = frontelement();
            if (e != 0)
                printf("Front element : %d", e);
            else
                printf("\n Queue is empty");
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            queuesize();
            break;
        default:
            printf("Wrong choice");
            break;
        }
    }
}
 
void create()
{
    front = rear = NULL;
}
 
void queuesize()
{
    printf("\n Queue size is : %d", count);
}
 
void enq(int data)
{
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
    count++;
}
 
void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
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
        printf("No dequeue value");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequeue value is : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequeue value is : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
 
int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}
 
void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue is empty");
    else
       printf("Queue is not empty");
}
