#include "main.h"
/**
 * print_array - update value.
 * @a: value to be evaluate.
 * @a: value to be evaluate.
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
