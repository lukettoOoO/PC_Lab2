#include <stdio.h>

int main()
{
  int n;

  while(1){
    scanf("%d", &n);
    if(n<0){
      printf("Eroare! Introduceti alt numar.\n");
    }
    else if(n==0){
      break;
    }
    else if(n>0){
      if(n%2==0)
	printf("Numarul este par.\n");
      else
	printf("Numarul este impar.\n");
    }
  }
  
  return 0;
}
