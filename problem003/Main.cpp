/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <stdio.h>
#include <time.h>
#define NUMBER 10000


long long fatores[1000];
long long  expoentes[1000];

long long primo; 

int buscaProximoPrimo(long long fator)
{
	long long temp; 	
	bool isPrime = false;
	clock_t start_t, end_t, total_t;

	start_t = clock();


	while (!isPrime)
	{
		temp = ++fator;
		long long metade = long long(temp / 2) + 1;
		

		for (long long i = 2; i < metade; i++) // modo mais difícil
		{
			if ((temp % i) == 0)
			{
				// não é primo
				isPrime = false;
				break; // interrompo o loop
			}			
			else
			{
				isPrime = true; // mantenho a fé;
			}
		}
		
	}
	end_t = clock();

	double total = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	// printf("retornando primo %d em %f\n", temp, total);
	return temp;

}

void main()
{
	
	/// temos que inicar a fatoração do numero.

	// vamos testar a fatoração iniciando do primeiro numero primo 2
	int fator = 2;
	long long resultado = 0;
	long long numero = NUMBER;
	int index = 0, count = 0;
	clock_t start_t, end_t, total_t;

	start_t = clock();

	while (numero > 1)
	{
		if ((numero % fator) == 0) // é divisível pelo fator primo
		{
			
			resultado = long long (numero / fator);
			printf("Fator: %d resultado : %lli\n", fator, resultado);
			fatores[index] = fator;
			index++;
			numero = resultado;			
		}
		else
		{
			fator = buscaProximoPrimo(fator);
			
			if (++count > 1000)
			{
				 printf("%d \n", fator);
				count = 0;
			}
		}
	}
	
	end_t = clock();


	for (int i = 0; i < index; i++)
	{
		printf(" fator: %d \n", fatores[i]);
	}
	
	float total = ((double)(end_t - start_t) )/ CLOCKS_PER_SEC;
	printf("tempo gasto %f\n", total);

	
	getchar();


}