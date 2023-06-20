#include "main.h"
/**
 *print_alphabet - Entry point
 *Description: 'Prints lowercase alphabet'
 *Return: always 0 (success)
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
