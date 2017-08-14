#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[5] = {0};
	int i = 0;
	int sum = 0;
	for (i; i <= 4; i++)
	{
		scanf_s("%d", &array[i]);
		sum += array[i];
	}
	printf("%d", sum);
	system("pause");
	return 0;
}