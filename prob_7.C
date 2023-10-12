#include <stdio.h>

int main()
{
  unsigned int n, x, y;
  scanf("%u", &n);

  if(n%2!=0){
    x=n-2;
    y=n-4;
  }
  else{
    x=n-1;
    y=n-3;
  }

  printf("%u %u\n", x, y);

  return 0;
}
