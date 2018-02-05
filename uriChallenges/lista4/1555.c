// #include <stdio.h>
// #include <math.h>
//
// int r(  long long int x, long long int y){
//   int total = 0;
//   total = pow((3*x),2)+pow(y,2);
//   return total;
// }
//
// int b(long long int x,  long long int y){
//
//   int total = 0;
//   total = 2*pow(x,2)+pow((5*y),2);
//   return total;
//
// }
//
// int c(long long int x, long long int y){
//
//     int total = 0;
//     total = -100*x+(pow(y,3));
//     return total;
//
// }
//
//
// int main() {
//
//   int count,i;
//   long long int  x,y;
//
//   scanf("%d",&count );
//
//   for ( i = 0; i < count; i++) {
//     scanf("%lld %lld",&x, &y );
//     if(  (r(x,y)>b(x,y)) && (r(x,y)>b(x,y)) ) {
//       printf("Rafael ganhou");
//     }
//     if(  (b(x,y)>r(x,y)) && (b(x,y)>c(x,y)) ) {
//       printf("Beto ganhou");
//     }
//     if ((c(x,y)>r(x,y)) && (c(x,y)>b(x,y))) {
//       printf("Carlos ganhou");
//     }
//   }
//
//   return 0;
// }


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,x,y,r,b,c,i;
        scanf("%d",&n);
    for(i = 0 ; i < n ; i++){
        scanf("%d %d", &x, &y);
    r = (3*x) * (3*x) + y*y;
    b = 2*(x*x) + (5*y) * (5*y);
    c = -100*x + y*y*y;
    if(r > b && r > c){
        printf("Rafael ganhou\n");
    }
    else if(b > r && b > c){
        printf("Beto ganhou\n");
    }
    else if(c > r && c > b){
        printf("Carlos ganhou\n");
      }
    }
    return 0;
}
