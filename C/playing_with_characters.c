#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  char ch;
  char cs[100];
  char s[100];

  scanf("%c", &ch);
  scanf("%s", &cs);
  scanf("\n");
  scanf("%[^\n]%*c", &s);

  printf("%c\n", ch);
  printf("%s\n", cs);
  printf("%s", s);

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  return 0;
}
