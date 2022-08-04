#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{
  // return (m1=(a>b)?a:b > m2=(c>d)?c:d ? m1 : m2)
  int max;
  if (a > b && a > c && a > d)
  {
    max = a;
  }
  else if (b > a && b > c && b > d)
  {
    max = b;
  }
  else if (c > a && c > b && c > d)
  {
    max = c;
  }
  else
  {
    max = d;
  }
  return max;
}

int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);

  return 0;
}