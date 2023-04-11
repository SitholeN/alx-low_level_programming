#include "main.h"

/**
 * clear_bit - to set the value of a given bit to 0
 * @n: the pointer of the number to change
 * @index: the index of the bit to be cleared
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

