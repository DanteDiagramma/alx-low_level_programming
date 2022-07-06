#include<stdio.h>
/**
 * print_alphabet - a function that prints out the alphabets in lowercase
 *
 * Return: Always 0 Success
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar (i);
	putchar ('\n');
}
