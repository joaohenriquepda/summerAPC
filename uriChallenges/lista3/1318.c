#include <stdio.h>
#include <string.h>

int array[10001];

int main()
{
    int n,m,t,i,counter;

    while (scanf("%d %d", &n, &m) && n != 0 && m != 0)
    {
        memset(array, 0, sizeof(array));
        counter = 0;

        for (i = 0; i < m; ++i)
        {
            scanf("%d", &t);
            array[t]++;
            if (array[t] == 2)
                counter++;
        }

        printf("%d\n", counter);
    }

    return 0;
}
