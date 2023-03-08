#include "main.h"

/**
 * isPrime - check prime
 * @n: number
 * @i: counter
 * Return: 1 if 0
 */
int isPrime(int n, int i)
{
	if (n % i == 0 && i < n && i != 1)
		return (0);
	isPrime(n, ++i);
	return (1);
}
/**
 * is_prime_number - check if the number is prime of not
 * @n: number
 * Return: 1 if true, 0 if not
 */
int is_prime_number(int n)
{
	if (isPrime(n, 1))
		return (1);
	return (0);
}
