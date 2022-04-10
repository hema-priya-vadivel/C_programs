#include<stdio.h>
#include<conio.h>
int a[100],n,i;
void create();
void display();
void search();


void main()
{
int op;
clrscr();
printf("ARRAY IMPLEMENTATION OF ORDER LIST");
printf("\n***************************************\n");
printf ("1.CREATE\n");
printf("2.DISPLAY\n");
printf("3.SEARCH\n");
printf("4.EXIT");
printf("\n ENTER THE NUMBER OF ARRAY ELEMENTS:");
scanf("%d",&n);
do
{
printf("\n ENTER THE OPTION:");
scanf("%d",&op);
switch(op)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
search();
break;
case 4:
exit(0);
default:
{
printf("\n INVALID OUTPUT");
break;
}
}
}while(op!=6);
getch();
}
void create()
{
  printf("\n ENTER THE ARRAY ELEMENTS:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
void display()
{
printf("\n THE ARRAY ELEMENTS ARE:");
for(i=0;i<n;i++)
printf("\n a[%d]=%d",i,a[i]);
}
void search()
{
int m;
printf("\n PLEASE ENTER THE ELEMENT TO SEARCH:");
scanf("%d",&m);
for(i=0;i<n;i++)
{
if(a[i]==m)
{
printf("THE ELEMENT FOUND AT POSITION:%d",i);
break;
}
}
if(i==n)
printf("\n ELEMENT IS NOT FOUND");
}

