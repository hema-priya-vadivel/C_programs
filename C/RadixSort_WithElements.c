#include<stdio.h>
int get_max(int a[],int n){
int max=a[0];
for(int i=1;i<n;i++)
if(a[i]>max)
max=a[i];
return max;
}
void radix_sort(int a[],int n){
int bucket[10][10],bucket_count[10];
int i,j,k,r,NOP=0,divisor=1,large,pass;
large=get_max(a,n);
while(large>0){
NOP++;
large/=10;}
for(pass=0;pass<NOP;pass++){
for(i=0;i<10;i++){
bucket_count[i]=0;
}
for(i=0;i<n;i++){
r=(a[i]/divisor)%10;
bucket[r][bucket_count[r]]=a[i];
bucket_count[r]+=1;
}
i=0;
for(k=0;k<10;k++){
for(j=0;j<bucket_count[k];j++){
a[i]=bucket[k][j];
i++;}}
divisor*=10;}
}
int main(){
int i,n;
int a[6]={41,37,6,15,23,99};
n=sizeof(a)/sizeof(int);
radix_sort(a,n);
printf("The sorted order of the elements is:\n");
for(i=0;i<n;i++)
printf("%d \n",a[i]);
printf("\n");
return 0;
}
