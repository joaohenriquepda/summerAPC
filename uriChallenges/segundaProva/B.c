#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i,count,distancia,vezes,k,step,matriz[100];

  scanf("%d",&count);
  for (i = 0; i < count; i++) {

    scanf("%d %d",&distancia,&vezes);

    for (k = 0; k < vezes; k++) {
      scanf("%d",&step);
      matriz[k]=step;
    }
    k=0;

    if(matriz[0]==0){
      printf("voltou demais\n");
    }else{

      for (k = 0; k < vezes; k++) {

        if (distancia != 0) {
          if (matriz[k] == 1) {
            distancia--;
          }else{
            distancia++;
          }
        }else{
          printf("chegou\n");
        }


      }
      if (distancia>0) {
        printf("parou no meio\n");
      }
    }
  }
  return 0;
}
