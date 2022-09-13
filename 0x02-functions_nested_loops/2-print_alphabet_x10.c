#include 'main.h'

/**
* print_alphabet_x10 - prints the lowercase alphabet ten times
*/

void print_alphabet_x10(void)
{
		int j;
		for (j = 'a'; j <= 'z'; j++)
		{
			int i;
			for (i = 0; i <= 9; i++)
			{
				_putchar(i);
			}
			_putchar('\n');
		}
}
