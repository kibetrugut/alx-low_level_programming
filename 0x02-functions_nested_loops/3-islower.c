#include "main.h"
/**
 * _islowe - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >=9 && c <= 122)
	{
		return (1);
	}
	return (0);
}
