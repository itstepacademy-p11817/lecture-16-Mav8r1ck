#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[5] = { 1,0,2,0,3 };
	int array2[5] = { 0 };
	int i = 0;
	int b = 0;
	for (i; i <= 4; i++)
	{
		if (array[i] != 0)
		{
			array2[b] = array[i];
			b++;
		}
	}
	for (int c = 0; c <= 4; c++)
	{
		if (array2[c] == 0)
		{
			array2[c] = -1;
		}
		printf("%d", array2[c]);
	}
	system("pause");
	return 0;
}