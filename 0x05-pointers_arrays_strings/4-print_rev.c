#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @n: evaluation input
 * Description: prints a string in reverse 
 * Return: empty
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	while (n >= 0)
	{
		_putchar(s[n]);
		--n;
	}
	_putchar('\n');
}
