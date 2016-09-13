/*
By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number ?
*/
#include <stdio.h>
#include <primo.h>

void main()
{
	long primo = 2;
	int count = 1;

	while (count < 10001)
	{
		primo = buscaProximoPrimo(primo);
		count++;
	//	printf("count %d primo %d\n", count, primo);
	}

	printf("count %d primo %d\n", count, primo);

	getchar();
}