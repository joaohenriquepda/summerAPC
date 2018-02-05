#include <stdio.h>


void print(int player){
  printf("Jogador %d ganha!\n",player);
}

int main() {

  int p,j1,j2,r,a;

  scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);

  switch (p) {
    case 1:

    if (r==1 && a==1) {
      print(2);
    }else if(r==0 && a==1){
      print(1);
    }else if(r==1 && a==0){
      print(1);
    }else if ((j1+j2)%2 == 0) {
      print(1);
    }else{
      print(2);
    }
    break;

    case 0:

    if (r==1 && a==1) {
      print(2);
    }else if(r==0 && a==1){
      print(1);
    }else if(r==1 && a==0){
      print(1);
    }else if ((j1+j2)%2 != 0) {
      print(1);
    }else{
      print(2);
    }
    break;
  }
    return 0;
}
