#include <stdio.h>

int main() {

  int a,b,A,B,count,i;

  scanf("%d",&count);
  for(i = 0; i < count; i++) {
  scanf("%d %d %d %d", &a,&b,&A,&B);

  if ((A+B)%a == 0 && (A+B)%b == 0  ) {
    printf("Ambos venceram\n");
  }else if((A+B)%a == 0){
    printf("O primeiro venceu\n");
  }else if ((A+B)%b == 0){
      printf("O segundo venceu\n");
  }else{
    printf("Ambos perderam\n");
  }
}



  return 0;
}
