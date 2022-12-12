#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 * Description - Program to print alphabet letters followed by a new line
 *
 * Return: Return 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
	letter = tolower(letter);
	putchar(letter);	
	}
putchar ('\n');
return (0);
}
