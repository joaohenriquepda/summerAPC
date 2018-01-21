#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&a);
        if(a > 2015)printf("%d A.C.\n",a - 2014);
        else if(a < 2015)printf("%d D.C.\n",2015 - a);
        else printf("1 A.C.\n");
    }
    return 0;
}
