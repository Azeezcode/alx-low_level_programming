#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{

	int integerType;
	char charType;
	float floatType;
	long int longintegerType;
	long long int longlongintegerType;
	
	//sizeof operator is used to evaluate size of variable

	printf("Size of char: %ld byte(s)\n", sizeof (charType));
	printf("Size of int: %ld byte(s)\n" , sizeof (integerType));
	printf("Size of long int: %ld byte(s)\n" , sizeof (longintegerType));
	printf("Size of long long int: %ld byte(s)\n" , sizeof (longlongintegerType));
	printf("Size of float: %ld byte(s)\n" , sizeof (floatType));
	return 0;
}
