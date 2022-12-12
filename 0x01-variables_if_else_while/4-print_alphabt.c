#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 * Description: Program to print all letters in lowercase except q and e
 * Return: return 0 (Success)
 */
int main(void)
{
	int letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
