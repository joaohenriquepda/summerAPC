#include <stdio.h>

int main() {

  int n,i,side;
  char steps;

  while(scanf("%d", &n) && n != 0) {
    scanf("%d", &n);
    
    if (n==0) {
      break;
    }

    side = 0;
    for(i=n; i > 0; i--){
        scanf("%c",&steps);
        if(steps == 'D')
            side = (side+1)%4;
        else{
          side = (side-1 < 0? 3 : side-1);
        }
    }

    switch (side) {
      case 1:
        printf("L\n");
        break;
      case 0:
        printf("N\n");
        break;
      case 2:
        printf("S\n");
        break;
      case 3:
        printf("O\n");
        break;
    }
  }
  return 0;
}
