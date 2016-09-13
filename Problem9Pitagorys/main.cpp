/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

	a2 + b2 = c2
	For example, 32 + 42 = 9 + 16 = 25 = 52.

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
	*/
#include <stdio.h>
#include <math.h>

bool testaPitagoras(int a, int b, int c)
{
	if (((a*a) + (b*b)) == (c*c))
	{
		return true;
	}
	else
	{
		return false;
	}



}

void main()
{
	/// a < b < c

	for (int a = 1; 997; a++)
	{
		for (int b = a + 1; b < 998; b++)
		{
			for (int c = b + 1; c < 1000; c++)
			{
				if ((a + b + c) == 1000)
				{
					printf("a: %d b: %d c: %d ", a, b, c);
					if (testaPitagoras(a, b, c))
					{
						printf("OK produto = %d \n", a*b*c);
						getchar();
					}
					else
					{
						printf("NOPE!! \n", a, b, c);
					}
				}
			}
		}
	}

}
