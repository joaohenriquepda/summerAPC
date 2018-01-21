#include <stdio.h>

int main ()
{
	int L, R, total;

	scanf("%d %d", &L, &R);

	while( (L !=0) && (R != 0))
		{
			total = L + R;
			printf("%d\n", total);

			scanf("%d %d", &L, &R);
		}

	return 0;
}
