#include <stdio.h>
#include <stdlib.h>
struct btnode
{
 int value;
 struct btnode *l;
 struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;
void inorder(struct btnode *t);
void create();
void preorder(struct btnode *t);
void postorder(struct btnode *t);

int flag = 1;
void main()
{
 int ch;
 printf("\nOPERATIONS ---\n");
 printf("1-create\n");
 printf("2- Inorder Traversal\n");
 printf("3- Preorder Traversal\n");
 printf("4 - Postorder Traversal\n");
 printf("5 - Exit\n");
 while(1)
 {
 printf("\nEnter your choice : ");
 scanf("%d", &ch);
 switch (ch)
 {
 case 1: 
 create();
 break;
 case 2: 
 inorder(root);
 break;
 case 3: 
 preorder(root);
 break;
 case 4: 
 postorder(root);
 break;
 case 5: 
 exit(0);
 default :
   printf("Wrong choice, Please enter correct choice ");
 break; 
 }
 }
}
/* To insert a node in the tree */

/* To create a node */
void create() {
 int data;
 printf("Enter data of node to be inserted : ");
 scanf("%d", &data);
 temp = (struct btnode *)malloc(1*sizeof(struct btnode));
 temp->value = data;
 temp->l = temp->r = NULL;
}



   /* recursive function to perform inorder traversal of tree */
void inorder(struct btnode *t)
{
 if (root == NULL)
 {
 printf("No elements in a tree to display");
 return; }
 if (t->l != NULL) 
 inorder(t->l);
 printf("%d -> ", t->value);
 if (t->r != NULL) 
 inorder(t->r);
}


void preorder(struct btnode *t)
{
 if (root == NULL)
 {
 printf("No elements in a tree to display");
 return;
 }
 printf("%d -> ", t->value);
 if (t->l != NULL) 
 preorder(t->l);
 if (t->r != NULL) 
 preorder(t->r);
}
/* To find the postorder traversal */
void postorder(struct btnode *t)
{
 if (root == NULL)
 {
 printf("No elements in a tree to display ");
 return;
 }
 if (t->l != NULL) 
 postorder(t->l);
 if (t->r != NULL) 
 postorder(t->r);
 printf("%d -> ", t->value);
}
