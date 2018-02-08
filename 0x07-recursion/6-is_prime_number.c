#include "holberton.h"

/**
 * iter - increasing and comparing counter to input number n
 *
 * @n: integer, given as an input
 * @i: counter to compare with n
 *
 * Return: 1 if integer n is prime, 0 if it isn't, caling itslef, if
 * the none of the above conditions are true
 */
int iter(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (iter(n, i + 1));
}

/**
 * is_prime_number - checking if the given number is a prime number
 *
 * @n: integer, given as an input
 *
 * Return: 0 is the number is not prime, caling function iter othewise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (iter(n, 2));
}
