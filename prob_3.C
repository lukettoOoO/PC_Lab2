#include <stdio.h>

void print_menu(){
  printf("Meniu:\n");
  printf("(1.)Maximul dintre x si y:\n");
  printf("(2.)Minimul dintre x si y:\n");
  printf("(3.)x\n");
  printf("(4.)y\n");
}

void perform_op(int op, float x, float y){
  if(op==1){
      printf("Maximul dintre x si y este: %f \n", x>y?x:y);
  }
  else if(op==2){
    printf("Minimul dintre x si y este: %f \n", x<y?x:y);
  }
  else if(op==3){
    printf("%f\n", x);
  }
  else if(op==4){
    printf("%f\n", y);
  }
}

int main()
{
  float x, y;
  int op;
  
  printf("Introduceti 2 numere reale:\n ");
  scanf("%f %f", &x, &y);
  printf("S-au introdus numerele: %f, %f\n", x, y);

  print_menu();
  /*
  printf("Meniu:\n");
  printf("(1.)Maximul dintre x si y:\n");
  printf("(2.)Minimul dintre x si y:\n");
  printf("(3.)x\n");
  printf("(4.)y\n");
  */
  
  printf("Introduceti codul de operatie:\n");
  scanf("%d",&op);
  perform_op(op, x, y);
  /*
  if(op==1){
      printf("Maximul dintre x si y este: %f \n", x>y?x:y);
  }
  else if(op==2){
    printf("Minimul dintre x si y este: %f \n", x<y?x:y);
  }
  else if(op==3){
    printf("%f\n", x);
  }
  else if(op==4){
    printf("%f\n", y);
  }
  */

  return 0;
}
