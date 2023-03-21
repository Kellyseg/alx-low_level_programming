#include "main.h"

/**
 * jack_bauer - prints all the minutes o a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int k, e, l, i;

	for (k = 0; k <= 2; k++)
	{
		for (e = 0; e <= 9; e++)
		{
			for (l = 0; l <= 5; l++)
			{
				for (i = 0; i <= 9; i++)
				{
					if (k >= 2 && e >= 4)
						break;
					_putchar(k + 48);
					_putchar(e + 48);
					_putchar(58);
					_putchar(l + 48);
					_putchar(i + 48);
					_putchar('\n');
				}
			}
		}
	}
}
