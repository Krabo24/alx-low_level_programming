#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return sum of 2 numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - return difference 2 numbers
 * @a: first number.
 * @b: second number
 * Return: difference of a and b
 */

int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - return multiplication 2 numbers
 * @a: first number
 * @b: second number
 * Return: multiplied answer of a and b
*/

	int op_mul(int a, int b)
	{
		return (a * b);
	}

/**
 * op_div - returns division of 2 numbers
 * @a: first number
 * @b: second number
 * Return: divided sum of a and b
 */

int op_div(int a, int b)

{
	return (a / b);
}

/**
 * op_mod - returns remainder division two numbers
 * @a: first number
 * @b: second number
* Return: remainder of division a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
