#include <stdio.h>

int main() {

  int count,i,x,y,j,k;

  scanf("%d",&count );

  for (i = 0; i < count; i++) {

    scanf("%d %d",&x,&y);
    for ( j= 0; j < x; j++) {

      for ( k = 0; k < y; k++) {
        printf("%d ",j+k);
      }

      printf("\n");

    }




  }



  return 0;
}
