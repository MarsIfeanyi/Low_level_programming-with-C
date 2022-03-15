#include <stdio.h>
/**
 * main - main block
 * Description:Print all numbers of base64 in lowercase
 * You can only use putchar and only 3 times.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
