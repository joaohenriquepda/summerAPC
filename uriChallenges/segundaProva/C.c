#include <stdio.h>


int main() {

  int count,i,k;


  scanf("%d",&count);

  for (i = 1; i <= count; i++) {
      printf("%d ",i);
      for (k = 1; k <= i; k++) {
        printf("%d",k);
      }
      printf("\n");
  }


  return 0;
}
