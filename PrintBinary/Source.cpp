#include <stdio.h>
#include <limits.h>
#include <stdint.h>

void printBits(size_t const size, void const * const ptr)
{
	
	unsigned char *b = (unsigned char*)ptr;
	unsigned char byte;
	int i, j;
	for (i = size - 1;i >= 0; i--)
	{
		for (j = 7; j >= 0; j--)
		{
			byte = (b[i] >> j) & 1;
			printf("%u", byte);
		}
	}
	puts("");
}

int main(void)
{
	
	char a = 0x22;
	char b = 0xf8;
	char c = 0x00;
	printBits(sizeof(a), &a);
	printBits(sizeof(b), &b);
	printf("and (&)\n");
	c = b&a;
	printBits(sizeof(b), &c);
	printf("inclusive OR (\)\n");
	c = b|a;
	printBits(sizeof(b), &c);
	printf("XOR (^)\n");
	c = b ^ a;
	printBits(sizeof(b), &c);
	printf("left shit (<<)\n");
	c = b << a;
	printBits(sizeof(b), &c);
	printf("right shit (>>)\n");
	c = b >> a;
	printBits(sizeof(b), &c);
	printf("left not (~)\n");
	c = ~b;
	printBits(sizeof(b), &c);
	c = ~a;
	printBits(sizeof(a), &c);
	printf(" not (!)\n");
	c = !b;
	printBits(sizeof(b), &c);
	c = !a;
	printBits(sizeof(a), &c);



	getchar();

}