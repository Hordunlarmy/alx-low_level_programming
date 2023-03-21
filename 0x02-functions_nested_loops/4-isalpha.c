#include "main.h"


/**
 * _isalpha - Entry point
 * @c: The character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);

		else
			return (0);
	}
}
