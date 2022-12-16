#include "main.h"

/**
 * _isupper - checks if function os uppercase or not
 * @c: carrier variable
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)

{
	if ((c >= 'A') && c <= 'Z')
	return (1);

	return(0);
}
