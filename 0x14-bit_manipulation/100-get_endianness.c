#include "main.h"
/**
 * get_endianness - Entry Point
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
