#include<stdio.h>

int main()
{
    int i,k,n,a;
    float b[7]={1.50,2.50,3.50,4.50,5.50},cal;
    while(scanf("%d",&n)!=EOF){
        cal=0;
        for(i = 0;i < n;i++){
            scanf("%d %d",&k, &a);
            k=k%1000;
            cal += a * b[k-1];
        }
        printf("%.2f\n",cal);
    }
    return 0;
}
