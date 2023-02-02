#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @index: index of bit to set starting from 0
 * @n: pointer number of i
 *
 * Return: 1 upon success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
