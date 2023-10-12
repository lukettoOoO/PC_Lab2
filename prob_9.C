#include <stdio.h>

int main()
{
  float x, y, total;
  
  scanf("%f %f", &x, &y);

  total=(x*5)+(y*7);
  if(total<=20)
    printf("da");
  else
    printf("nu");
  
  return 0;
}
