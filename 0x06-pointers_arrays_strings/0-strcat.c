#include "main.h"
/**
 * _strcat - Concatenates two strings until n
 * @dest: First input
 * @src: Segundo input
 * Description: Concatenates two strings until n
 * Return: dest
 */
char *_strcat(char *dest, char *src)
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
