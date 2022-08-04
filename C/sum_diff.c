#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int m, n;
  float o, p;
  scanf("%d %d", &m, &n);
  scanf("%f %f", &o, &p);
  printf("%d %d\n", m + n, m - n);
  printf("%.1f %.1f", o + p, o - p);
  return 0;
}
