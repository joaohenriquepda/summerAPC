
#include <stdio.h>

int main() {

  int n, j, aux;
  int a[1000], i, posicao[1000];
  scanf("%d", &n);


  while(n!=0){
    if(n==0)
      return 0;

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        posicao[i]=i+1;
    }
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
          aux=a[i];
          a[i]=a[j];
          a[j]=aux;
          aux=posicao[i];
          posicao[i]=posicao[j];
          posicao[j]=aux;
        }
      }
    }

    printf("%d\n", posicao[n-2]);
    scanf("%d", &n);
  }

  return 0;
}
