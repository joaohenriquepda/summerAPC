#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n=0,i=0,j,result=0,max,min;

  scanf("%d\n",&n);
  scanf("%d",&j);

  max = (n>j)? n :j;
  min = (n<j)? n :j;

  for (i = min+1; i < max ; i++) {
    result += ( (i%2==1||i%2==-1) )?  i:0 ;
  }
  printf("%d\n", result);
  return 0;
}
