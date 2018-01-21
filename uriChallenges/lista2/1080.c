#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n = 1;
  int highest = 0;
  int position,number;

  do {
    scanf("%d\n",&number);
    position = (highest > number ) ? position : n;
    highest = (highest > number ) ? highest : number;
    n++;
  } while(n<=100);

  printf("%d\n",highest);
  printf("%d\n",position );
  return 0;
}
