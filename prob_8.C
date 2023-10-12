#include <stdio.h>

int main()
{
  int an;

  scanf("%d", &an);
  
  if(an%400==0)
    printf("Este an bisect.\n");
  else if(an%100==0)
    printf("Nu este an bisect.\n");
  else if(an%4==0)
    printf("Este an bisect.\n");
  else
    printf("Nu este an bisect.\n");
  
  return 0;
}
