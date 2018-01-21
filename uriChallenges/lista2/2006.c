#include <stdio.h>

int main(int argc, char const *argv[]) {

  int t,i,recipent,count=0;

  scanf("%d",&t );

  for ( i = 0; i < 5; i++) {
    scanf("%d",&recipent);
    (recipent != t) ? : count++;
  }
  printf("%d\n",count);
  return 0;
}
