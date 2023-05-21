#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char low, e, f;

	e = 'e';
	f = 'f';
	
	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != f)
	putchar(low);
	}
	putchar('\n');
	return (0);
}
