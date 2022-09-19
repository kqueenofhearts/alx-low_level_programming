#include "main.h"
/**
 * swap_int - swaps values of two intergers
 * @a: first evaluated input
 * @b: second evaluated input
 * Description: swaps the values of two intergers
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int cin;

	cin = *a;
	*a = *b;
	*b = cin;
}
