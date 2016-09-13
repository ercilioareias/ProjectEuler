#include <time.h>



			
int buscaProximoPrimo(long long fator)
{
	long long temp;
	bool isPrime = false;
	clock_t start_t, end_t, total_t;

	start_t = clock();


	while (!isPrime)
	{
		temp = ++fator;
		long long metade;
		if (temp > 10)
		{
			metade = long long(temp / 2);
		}
		else
		{
			metade = temp;
		}


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

