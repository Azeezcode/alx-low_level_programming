include "main.h"
/**
 * _isdigit - function that checks if a charcter is digit or not
 * @c: tested charcter
 *Return: returns 1 if true, returns 0 if false
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);

	return (0);
}
