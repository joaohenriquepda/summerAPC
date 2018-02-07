
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindro(const char *str)
{
	int i,j;
	int len = strlen(str);


	for (i = 0, j = len -1; i < j; i++, j--)
		if (str[i] != str[j]){
			return 0;
		}
	return 1;
}


int main()
{
	char w[1000];
	int count,i;

	scanf("%d\n",&count);

	for (i = 0; i < count; i++) {
		scanf(" %[^\n]*c", w);
		printf("%d\n",isPalindro(w));
	}


	return 0;
}
