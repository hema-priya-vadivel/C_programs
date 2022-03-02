#include<stdio.h>
int main()
{
int a[7]={67,53,82,7,11,3,101};
int n=sizeof(a)/sizeof(int);
int j,p;
int temp;
for(p=1;p<n;p++){
temp=a[p];
for(j=p;j>0 && a[j-1]>temp;j--){
a[j]=a[j-1];
a[j-1]=temp;
}
}
printf("Sorted order:\n");
for(int i=0;i<n;i++){
  printf("%d\n",a[i]);
}
return 0;
}
