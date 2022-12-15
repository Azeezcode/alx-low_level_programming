#include "main.h"
/**
 * largest number - returns the largest of three numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}
	
	return (largest);
}

