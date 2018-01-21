#include <stdio.h>

int main(int argc, char const *argv[]) {

  int value=0,parcial=0;

  do{
    parcial += value;
    value++;
    // printf("PARCIAL: %d\n",parcial );
    (parcial%3 == 0) ?  : printf("PARCIAL: %d\n",parcial ) ;
  }while(value < 5);

  return 0;
}
