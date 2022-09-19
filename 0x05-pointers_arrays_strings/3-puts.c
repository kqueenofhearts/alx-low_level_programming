#include "main.h"
/**
 * _puts - function that prtints string to stdout
 * @str: evaluated input
 * Description: function that prints string to stdout
 * Return: empty
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
