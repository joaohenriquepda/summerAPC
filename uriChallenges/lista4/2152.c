#include <stdio.h>


int main() {


  int H,M,O;
  int i,count;

  scanf("%d\n", &count);

  for ( i = 0; i < count; i++) {
    scanf("%d %d %d",&H, &M, &O );

    if (H < 10) {
      printf("0%d:",H);
    }else{
      printf("%d:",H);
    }
    if (M < 10) {
      printf("0%d",M);
    }else{
      printf("%d",M);
    }

    if (O == 1 ) {
      printf(" - A porta abriu!\n" );
    }else{
      printf(" - A porta fechou!\n");
    }
  }

  return 0;
}
