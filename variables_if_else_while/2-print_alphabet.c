/*
 * File: 3-print_alphabets.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	

	putchar('\n');

	return (0);
}


