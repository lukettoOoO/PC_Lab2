#include <stdio.h>

int main()
{
  int x;
  unsigned int y;
  long z;
  unsigned long a;
  long long b;
  unsigned long long c;

  scanf("%d", &x);
  scanf("%u", &y);
  scanf("%ld", &z);
  scanf("%lu", &a);
  scanf("%lld", &b);
  scanf("%llu", &c);
  printf("%d %u %ld %lu %lld %llu \n", x, y, z, a, b, c);
}
