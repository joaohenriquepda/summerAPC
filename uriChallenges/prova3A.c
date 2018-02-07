#include <stdio.h>



int main() {

  int j,i,n,x,y,k;

  scanf("%d",&n);

  for (i =0; i < n; i++) {

    scanf("%d %d",&x,&y );

    for (k = 0; k < x; k++) {

      for (j = 0; j < y; j++) {
        printf("%d ",j+k);
      }
      printf("\n");
    }
  }

  return 0;
}
