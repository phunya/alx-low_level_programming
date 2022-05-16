#include "main.h"

<<<<<<< HEAD
/** 
=======
/**
<<<<<<< HEAD
 * Youtube
>>>>>>> da4bac1ca111162973fa2a808e98c4c1e3f7b23a
 * @n: input
 * Return: Always 0 (Success)
=======
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
>>>>>>> a98dd71f3e75edba3daa184e78b2ebe7cd6c68a0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
