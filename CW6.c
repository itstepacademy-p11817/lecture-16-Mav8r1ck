#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[5] = { 0 };
	int array2[2] = { 2, 3 };
	int i = 0;
	for (i; i <= 4; i++)
	{
			scanf_s ("%d", &array[i]);
	}
	int b = 0;
	for (b; b <= 4; b++)
	{
		if (array2[0] == array[b] && array2[1] == array[b + 1])
		{
			printf("%d", b);
		}
	}
	system("pause");
	return 0;
}