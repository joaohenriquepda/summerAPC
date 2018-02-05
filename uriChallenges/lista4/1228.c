#include <stdio.h>

int main(){
    int largada[24];
    int chegada[24];
    int comp[24];
    int fim, n, aux,j,i,k,l;

    while(scanf("%d",&n) != EOF){
                         fim = 0;

                         aux = 0;
                         while(aux < n){
                                   scanf("%d", &largada[aux]);
                                   aux++;
                         }
                         aux = 0;
                         while(aux < n){
                                   scanf("%d", &chegada[aux]);
                                   aux++;
                         }
                         for( i = 0; i < n; i++){
                                 for(j = 0; j < n; j++){
                                         if(largada[i] == chegada[j]){
                                                       comp[j] = i + 25;
                                         }
                                 }
                         }
                         for(k = 0; k < n; k++){
                                 for(l = k+1; l < n; l++){
                                         if(comp[k] > comp[l]){
                                                       aux = comp[l];
                                                       comp[l] = comp[k];
                                                       comp[k] = aux;
                                                       fim++;
                                         }
                                 }
                         }
                         printf("%d\n",fim);

    }
    return 0;
}
