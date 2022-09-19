#include "main.h"
/**
 * int_strlen - function that returns the length of a string
 * @n: evaluation of input
 * Description: returns the legth of string
 * Return: empty
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
