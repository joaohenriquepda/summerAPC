#include <stdio.h>

int main(){


    int par[1000001];
    int impar[1000001];


    int n, i,xp = 0, xi = 0, a;

    scanf("%d", &n);

    for(int i = 0; i < n; ++i){
        scanf("%d", &a);
        if(a % 2 == 0){
            par[xp] = a;
            xp++;
        }else{

            impar[xi] = a;
            xi++;

        }
    }


    // sort(par, par + xp);
    //
    // sort(impar, impar + xi);

    for (i = 0; i < xp; i++) {
        printf("%i\n", par[i]);
    }

    for (i = 0; i < xi; i++) {
        printf("%i\n", impar[xi - i - 1]);
    }

    return 0;

}
