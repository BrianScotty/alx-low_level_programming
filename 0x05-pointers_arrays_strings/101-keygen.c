#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: always 0 (Success)
 */

int main(void)
{
	int pass[100];
	int i, m, n;

	m = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		m += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - m) - '0' < 78)
		{
			n = 2772 - m - '0';
			m += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

