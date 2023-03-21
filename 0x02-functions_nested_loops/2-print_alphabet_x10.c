#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}

}
