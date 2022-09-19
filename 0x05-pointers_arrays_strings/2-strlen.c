#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: evaluated input
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
