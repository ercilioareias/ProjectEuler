/*
A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3 - digit numbers.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int inverte(int numero)
{
	int length, index =0;
	char algarismos[32];
	char inverter[32];
	sprintf_s(algarismos, "%d\0", numero);
	length = strlen(algarismos);
	
	for (int j = length - 1; j >= 0; j--){
		inverter[index++] = algarismos[j];		
	}
	inverter[index] = '\0'; // null para determinar o fim da string;

	return  atoi(inverter);
}

void main()
{
	
	int number = 9099;	
	int length, maxPalindrome=0, produto;
	
	
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			produto = i * j; 
			if (produto == inverte(produto)) // é um plaindrome
			{
				if (produto > maxPalindrome)
				{
					maxPalindrome = produto;
					printf("New Max %d\n", maxPalindrome);
				}
			}
		}
	}
	
	
	getchar();

}