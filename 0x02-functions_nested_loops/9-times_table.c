#include "main.h"
/**
* times_table - prints multiplication of two numbers
*
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) + ',' + ' ');
		}
		_putchar('\n');
	}
}
