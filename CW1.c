#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[3] = { 1,2,3 };
	int i = 2;
	for (i; i >= 0; i--)
	{
		printf("%d", array[i]);
	}
	system("pause");
	return 0;
}