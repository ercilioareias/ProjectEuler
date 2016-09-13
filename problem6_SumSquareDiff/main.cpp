/*
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <stdio.h>
#include <math.h>

void main()
{
	long somaQuadrados = 0, somaNumeros = 0, resposta = 0;
	/// primeiro vou pegar a soma dos quadrados

	for (int i = 1; i <= 100; i++)
	{
		somaQuadrados += pow((long double)i,2);
		somaNumeros += i;
	}

	resposta = pow((long double)somaNumeros, 2) - somaQuadrados;
	
	printf("resposta: %d ", resposta);
	getchar();
}