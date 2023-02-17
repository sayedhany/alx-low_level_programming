#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
  *main - get rand number and make some validation on it
  *Return - return 0 if success
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of ");
	int last_number = 0;

	last_number = n % 10;
	if (last_number > 5)
	{
		printf("%d is %d and is greater than 5\n", n, last_number);
	}
	else if (last_number == 0)
	{
		printf("%d is %d and is 0\n", n, last_number);
	}
	else if ((last_number < 6) && (last_number != 0))
	{
		printf("%d is %d and is less than 6 and not 0\n", n, last_number);
	}
	return (0);
}
