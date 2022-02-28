#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int num;
  float d;
  scanf("%d",&num);
  for(int i=0 ;i<num;i++){
  scanf("%f",&d);
  printf("%.2f\n",d);
  }
  return 0;
}

//Representing floating number
//with 2 numbers
//after decimal point.