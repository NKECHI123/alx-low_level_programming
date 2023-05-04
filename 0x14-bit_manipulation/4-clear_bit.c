#include "main.h"

/**
*clear_bit - sets a bit at a position to 0
*@n: pointer to the number to change
*@index: index of the bit to be cleared
*
*Return: 1 on success, -1 on fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
