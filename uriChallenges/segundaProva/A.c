#include <stdio.h>

int main() {

  int i,count,index,j,k,l;
  int matriz[100][100];

  scanf("%d",&count);
  for (i = 0; i < count; i++) {
    scanf("%d",&index);

    for (j = 0; j < index; j++) {
      for (k = 0; k < index; i++) {
        printf("%d ",j);
      }
    }



  }

  return 0;
}
