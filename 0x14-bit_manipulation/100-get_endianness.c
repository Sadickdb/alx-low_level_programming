#include "main.h"

/**
 * get_endianness - gets the endianness.
 *
 * Return: 0 if endian is big, 1 if endian is small.
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
