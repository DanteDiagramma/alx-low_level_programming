#include<stdio.h>
/**
 * print_alphabet_x10 - prints the alphabets in 10 lines
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char i;

		for (i >= 'a'; i = 'z'; i++)
			putchar(i);
		putchar('\n');
		
		j++;
	}

}
