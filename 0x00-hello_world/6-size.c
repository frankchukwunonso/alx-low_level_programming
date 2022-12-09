#include <stdio.h>
/**
 * main - Entry point
 * Return: Success
 */
int main(void)
{
	char charType;
	int integerType;
	long int lintType;
	long long int llintType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lintType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(llintType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
