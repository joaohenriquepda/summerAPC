#include <stdio.h>


int main() {


  int count,i,j,k,l=1,total=1;
  int elements[100000];


  while(scanf("%d",&count) != EOF){
    total=1;

    if (count == 0) {
      printf("Caso 1: 1 numero\n");
      printf("0");
    }else
    {
      for (i = 0; i <= count; i++) {
        for (j = i; j > 0; j--) {
          elements[total-1]=i;
          total++;

        }
      }
      printf("Caso %d: %d numeros\n",l,total);
      printf("0 ");
      for (k = 0; k < total-1; k++) {
            printf(" %d",elements[k]);
      }
    }
    printf("\n\n");
    l++;
  }

  return 0;
}
