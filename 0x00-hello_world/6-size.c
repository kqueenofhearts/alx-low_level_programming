#include <stdio.h>

/**
 *  * main - prints the size char,int,lomg int,long long int and float
 *   * Return: 0 if success
 **/

int main(void)

{

		char a;
		int b;
		long int c;
		long long int d;
		float e;

		printf("Size of a char: %d byte(s)\n", sizeof(a));
		printf("Size of an int: %d byte(s)\n", sizeof(b));
		printf("Size of a long int: %d byte(s)\n", sizeof(c));
		printf("Size of a long long int: %d byte(s)\n", sizeof(d));
		printf("size of float: %d bytes(s)\n", sizeof(e));
		return (0);

}
