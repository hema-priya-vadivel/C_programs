#include<stdio.h>
#include<conio.h>
int a[100],n,i;
void create();
void display();
void search();
void sort();
void insert();
void delete();
void reverse();
void main(){
    int choice;
    printf("**Array implementation of ordered list**\n");
    printf("1.Create\n");
    printf("2.Display\n");
    printf("3.Search\n");
    printf("4.Sort\n");
    printf("5.Insert\n");
    printf("6.Delete\n");
    printf("7.Reverse\n");
    printf("8.exit\n");
    printf("\nEnter the number of Array Elements::");
    scanf("%d",&n);
    do{
        printf("\nEnter the Option::");
        scanf("%d",&choice);
        switch(choice){
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
                sort();
                break;
            case 5:
                insert();
                break;
            case 6:
                delete();
                break;
            case 7:
                reverse();
                break;
            case 8:
                exit(0);
            default:
            {
                printf("\nInvalid choice");
                break;
            }
                
        }
        
    }while(choice!=8);
     getch();
}

void create(){
    printf("\nEnter the array elements::");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}


void display(){
    printf("\nThe Array elements are::");
    for(i=1;i<n;i++){
        printf("\n a[%d]=%d",i,a[i]);
    }
}


void search(){
    int m;
    printf("\nEnter the element to search::");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(a[i]==m){
            printf("\nThe element is found at position:: %d",i);
            break;
        }
    }
    if(i==n){
        printf("\nThe element is not found::");
    }
}


void sort(){
    int j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nThe sorted Array is::");
    for(i=0;i<n;i++){
        printf("\n\ta[%d]=%d",i,a[i]);
    }
}


void insert(){
    int pos,m;
    printf("\nEnter the position to insert the element::");
    scanf("%d",&pos);
    printf("\nEnter the element to insert::");
    scanf("%d",&m);
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];       
    }
    a[pos-1]=m;
    n++;
}


void delete(){
    int m,pos;
    printf("\nEnter the element to be deleted::");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(a[i]==m){
            pos=i;
            break;
        }
    }
    if(i==n){
        pos=-1;
    }
    for(i=pos;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
}


void reverse(){
    int i;
    printf("\nThe list in reverse order::");
    for(i=n;i>=0;i--){
        printf("\n%d",a[i]);
    }
}