#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print single digits of base 10 without variable of type char'
 *Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
