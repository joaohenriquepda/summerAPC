#include <stdio.h>

int main(int argc, char const *argv[]) {

    int a,b,c,d,e,f,g,h,W,X,Y,Z;

    scanf("Dia %d", &a);
    scanf("%d : %d : %d\n", &b, &c, &d);
    scanf("Dia %d", &e);
    scanf("%d : %d : %d", &f, &g, &h);

    Z=h-d;
    Y=g-c;
    X=f-b;
    W=e-a;

    if(Z<0){
        Z+=60;
        Y--;
    }
    if(Y<0){
        Y+=60;
        X--;
    }
    if(X<0){
        X+=24;
        W--;
    }
    printf("%d dia(s)\n",W);
    printf("%d hora(s)\n",X);
    printf("%d minuto(s)\n",Y);
    printf("%d segundo(s)\n",Z);

    return 0;
}
