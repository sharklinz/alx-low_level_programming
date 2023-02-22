#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 * code by sharklins
 */

void print_alphabet(void)
{
	char bright;

	for (bright = 'a'; bright <= 'z'; bright++)
		_putchar(bright);
	_putchar('\n');
}
