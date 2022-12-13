#include<stdio.h>
#include<ctype.h>
/**
 *main - Entry point
 *Description: a program that prints the lowercase alphabet in reverse.
 *return: return 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'z' ; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
