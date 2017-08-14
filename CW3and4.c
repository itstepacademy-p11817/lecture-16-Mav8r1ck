#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[12] = {0};
	int i = 0;
	int sum = 0;
		for (i; i <= 11; i++)
		{
		scanf_s("%d", &array[i]);
		sum += array[i];
		}
	printf("%d\n%d\n", sum, sum/12);
	int max = array[0];
	for (i; i <= 11; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
		else
		{
			continue;
		}
	}
	int min = array[11];
		for (i; i <= 11; i++)
	{
			if (array[i] < min)
			{
			min = array[i];
			}
			else
			{
			continue;
			}
	}
			printf("%d\n%d\n", max, min);
	system("pause");
	return 0;
}