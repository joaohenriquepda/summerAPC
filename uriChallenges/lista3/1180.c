#include <stdio.h>

int main() {


  int n,i,lowest=1000000000,position;
  int numbers[1000];
  scanf("%d\n",&n);

  for(i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);

    if(lowest > numbers[i]) {
      position = i;
      lowest = numbers[i];
    }
  }
  //
  // for (i = 0; i < n; i++) {
  //   printf("%d ",numbers[i]);
  // }


  printf("Menor valor: %d\n",lowest);
  printf("Posicao: %d\n", position);


  return 0;
}
