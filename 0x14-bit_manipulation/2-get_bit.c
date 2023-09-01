#include "main.h"

/**
 * get_bit - gives the decimal value ofa bit at a certain index
 * @n: input number
 * @index: bit position
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_dec;

	if (index > 63)
		return (-1);
	bit_dec = (n >> index) & 1;
	return (bit_dec);
}
