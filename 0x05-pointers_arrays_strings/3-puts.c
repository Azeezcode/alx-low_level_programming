#include "main.h"

/**
 * _puts - prints a string
 * @str:string to print
 *
 * Desc: prints a string
 * On succes: return the numbers of charcters printed
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
