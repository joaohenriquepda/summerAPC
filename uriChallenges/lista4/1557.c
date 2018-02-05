#include <stdio.h>

int main(void) {

   int a, i, j,c;
	for (;;)
	{
		int k = 1;
		scanf("%d", &a);

		if(a == 0)break;

		for (i = 1; i <= a;i++)
		{
			for (j = 1;j <= a;j++)
			{
				printf("%d   ", k);

				if(j == 2){
					c = k;
				}
					k *= 2;
			}
			if(a!=1)
			k =c;
			printf("\n");
		}


	}
	return 0;
}
