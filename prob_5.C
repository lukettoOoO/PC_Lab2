#include <stdio.h>

int main()
{
  float x, y, rez;
  int op;

  printf("1-Adunare, 2-Scadere, 3-Inmultire, 4-Impartire, 5-Iesire\n");
  
  while(1){
    scanf("%d",&op);
    if(op==5)
      break;
    else if (op!=5){
	printf("Introduceti 2 numere:\n");
	scanf("%f", &x);
	scanf("%f", &y);
	if(op==1)
	  rez=x+y;
	else if(op==2)
	  rez=x-y;
	else if(op==3)
	  rez=x*y;
	else if(op==4)
	  rez=x/y;
	printf("Rezultatul este: ");
	printf("%f", rez);
      }
  }
  
  return 0;
}
