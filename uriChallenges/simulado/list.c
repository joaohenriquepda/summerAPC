#include <stdio.h>

int main () {
    int casosDeTeste;
    scanf("%d", &casosDeTeste);

    int i=0;
    for (i=0;i<casosDeTeste;i++){
        int armazena, tiradas;
        scanf("%d%d", &armazena, &tiradas);

        int j=0, limSup, limInf;
        int repeticoes = tiradas - armazena +1;
        int k=0;
        for(j=0;j<repeticoes;j++){

            for(k=0;k<armazena;k++){
                printf("%d", k+j);
            }
            printf("\n");
        }
    }
}



#include <stdio.h>
#include <string.h>


int main() {
  /* code */
  int count,i,len,j,somIpar=0,somPar=0;
  char w[100],impar[100],par[100];

  scanf("%d", &count);



  for (i = 0; i < count; i++){
    scanf("%s",w);
    len = strlen(w);
    printf("%d",len);

    for (j = 0; j <= len; j++) {
      printf("%c",w[j]);
      if(j%2==0){
        par[somPar] = w[j];
        somPar++;
      }else{
        impar[somIpar] = w[j];
        somIpar++;
      }
    }

    printf("%s %s\n",par,impar);
  }


  return 0;
}
