#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the args
 * on a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
