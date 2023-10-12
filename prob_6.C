#include <stdio.h>

int main()
{
  int x, y;
  scanf("%d %d", &x, &y);
  
  if((x>=0 && y>=0) || (x<0 && y<0))
    printf("Numerele au acelasi semn.\n");
  else
    printf("Numerele nu au acelasi semn.\n");
  
  return 0;
}
