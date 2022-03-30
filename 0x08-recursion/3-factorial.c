#include "main.h"
/**
 * factorial - prints a factorial of a number
 * @n: input number
 * Return: intiger
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 0)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
