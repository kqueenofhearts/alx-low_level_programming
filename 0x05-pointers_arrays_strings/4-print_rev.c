#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: evaluated input
 *Description: prints string in reverse
 *Return: empty
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
