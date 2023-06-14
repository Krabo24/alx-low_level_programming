#include "main.h"

/**
 * _isalpha - searches for the alphabetic characters
 * @c: the characters we want to check
 * Return: 1 if c is a letter, an 0 if its not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
