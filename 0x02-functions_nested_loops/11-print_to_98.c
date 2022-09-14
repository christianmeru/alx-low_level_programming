#include "main.h"

/**
* print_to_98 - print all natural number and stops at 98
* @n: argument
* Return: always 0
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		return (i + ',' + ' ');
	}
	for (i = n; i >= 98; i--)
	{
		return (i + ',' + " ");
	}
}
