#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long lli;
	float f;
	printf("Size of a char: %lu\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu\n", (unsigned long)sizeof(l));
	printf("Size of long long int: %lu\n", (unsigned long)sizeof(lli));
	printf("Size of float: %lu\n", (unsigned long)sizeof(f));
}
