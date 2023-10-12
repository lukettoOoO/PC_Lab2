#include <stdio.h>

int main()
{
  int x, y, z;

  scanf("%d %d %d", &x, &y, &z);
  
  if(z>=x && z<y)
    printf("Apartine intervalului.");
  else
    printf("Nu apartine intervalului.");

  return 0;
}
