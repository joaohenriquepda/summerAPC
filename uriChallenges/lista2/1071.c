#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n,i=0,j=0,max,min;

  scanf("%d\n",&n);
  scanf("%d",&j);

  max = (n>j)? n :j;
  min = (n<j)? n :j;

  for (i = min; i <= max ; i++) {
    (i%2 == 0)? : printf("%d\n",i);
  }

  return 0;
}
