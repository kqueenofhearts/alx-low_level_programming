#include "main.h"
/**
 * _strcat -  concanates the first count characters of string2 to string1 and ends the resulting string with a null character (\0)
 * @dest: first evaluated input
 * @src: second evaluated input
 * Description: concanates two strings
 * Return: empty
 */
char *_strcat(char *dest, char *src);
{

	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}

