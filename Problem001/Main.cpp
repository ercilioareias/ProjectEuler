//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>

void main()
{
	/// aculmuladores

	int soma3= 0, soma5 = 0;

	/// brute force
	for (int i = 1; i < 1000; i++)
	{
		// primeiro testar se numero é multiplo de 3

		if ((i % 3) == 0)
		{
			soma3 += i;
		}
		else// testa multiplos de 5

		if ((i % 5) == 0)
		{
			soma5 += i;
		}

	}

	printf("Soma3 : %d\n", soma3);
	printf("Soma5 : %d\n", soma5);
	printf("total : %d\n", soma3 + soma5);
	getchar();

}

