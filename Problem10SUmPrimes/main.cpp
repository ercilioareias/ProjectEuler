/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <stdio.h>
#include <Primo.h>
#include <bitset>
#define MAXPRIMO 3000000
using namespace std;
void antigo()
{
	long long soma = 0;
	long primo = 2;
	long count = 0;

	while (primo  < MAXPRIMO)
	{
		soma = soma + primo;
		primo = buscaProximoPrimo(primo);
		if (count++ > 1000)
		{
			printf("count: %d primo: %d soma: %lld\n", count, primo, soma);
		}
	}

	printf("a soma e %lld \n", soma);
	getchar();


}

void main()
{

	bitset<MAXPRIMO>  marca;
	long long soma = 0, count = 0, countMarca = 0;
	marca.flip();  // set all bits to 1;	
	marca[0].flip(); // set 0 e 1 para não primos
	marca[1].flip(); // set 0 e 1 para não primos

//	antigo();

	// vamos checjar todosos numero de 1 ate 2 milhoes
	for (long i = 2; i < MAXPRIMO; i++)
	{
		if (!marca[i])  // if marca not primo então ja saio
		{
			continue;
		}
		else
		{
			countMarca = 0;
			// vou setar todos os multiplos como não primo
			for (long j = 2 * i; j < MAXPRIMO; j += i)
			{
				marca[j] = 0;
				countMarca++;
			}

			if (countMarca > 0)
			{

				printf("%lld numeros marcados i = %d \n", countMarca,i);
			}
		}
		
	}
	
	for (long i = 2; i < MAXPRIMO; ++i)
	{
		if (marca[i])
		{
			soma += i;
			count++;
		}
	}
	printf("a soma de %lld primo =  %lld \n", count , soma);
	getchar();

}

