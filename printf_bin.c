#include "main.h"

/**
 * printf_bin - prints a binary number
 * @val: arguments
 * Return: c
 */

int printf_bin(va_list val)
{
	int flag = 0;
	int c = 0;
	int i, b, a = 1;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
