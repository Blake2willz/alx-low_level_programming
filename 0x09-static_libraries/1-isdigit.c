#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isdigit - checks for a digit
 * @c: int to be checked
 * Return: if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
