#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 * Description: Write a program that prints the lowercase alphabet in reverse, followed by a new line
 * return: Return 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'z' ; letter >= 'a'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
