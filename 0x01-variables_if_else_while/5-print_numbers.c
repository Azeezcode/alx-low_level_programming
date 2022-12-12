#include<stdio.h>
#include<ctype.h>
/**
 * Main - Entry point
 * Description: print all single digits of Base 10 followed by new line
 * Return: returns 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = '0' ; digit <= '9' ; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
