#include <stdio.h>
/**
 * main - Entry point
 *
 * description: reverse printing of alphabets
 * Return: 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
