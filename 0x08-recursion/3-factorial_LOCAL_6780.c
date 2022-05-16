#include "main.h"

<<<<<<< HEAD
/** 
=======
/**
 * Youtube
>>>>>>> da4bac1ca111162973fa2a808e98c4c1e3f7b23a
 * @n: input
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
