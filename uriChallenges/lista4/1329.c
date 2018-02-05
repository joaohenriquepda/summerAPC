#include <stdio.h>


int main() {

  int n,i,j,mary,johns;



  for (;;) {

    mary = 0;
    johns = 0;

  scanf("%d",&n);

  if(n==0){
    break;
  }

  for (i = 0; i < n; i++) {
    scanf("%d",&j);

    if (j == 1 ) {
      johns += 1;
    }else{
      mary +=1;
    }
  }

  printf("Mary won %d times and John won %d times\n",mary,johns);
}


  return 0;
}
