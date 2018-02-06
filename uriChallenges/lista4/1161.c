#include <stdio.h>

long long int fatorial(long long int n){

  if ((n==1) || (n==0)){
    return 1;
  }else{
    return fatorial(n-1)*n;
  }
}

int main() {

  long long int n1,n2;

  while(scanf("%lld %lld",&n1,&n2) != EOF){
    printf("%lld\n",fatorial(n1)+fatorial(n2));
  }

  return 0;
}
