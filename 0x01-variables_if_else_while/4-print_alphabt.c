#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - enrty point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
		putchar(low);
	}
	printf("\n");
	return (0);
}
