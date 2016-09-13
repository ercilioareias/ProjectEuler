/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?
*/

#include <stdio.h>
#include <math.h>

bool isDivisible(int num)
{
	for (int i = 2; i <= 20; i++)
	{
		if ((num % i) > 0)
		{
			return false;
		}
	}
	return true;
}
void main()
{
	int numero = 20;
	

	
	while (!isDivisible(numero))
	{
		numero++;
	}

	printf("%d", numero);
	getchar();

	

}