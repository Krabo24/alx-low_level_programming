#include "main.h"
/**
 * _strspn - the entry point
 * @s: input
 * @accept: input
 * Return: 0 on Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				b++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
