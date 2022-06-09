#include "main.h"

/**
* main - check the code
*
* Return: always 0.
*/

void print_numbers(void)
{
int n = 0;

while (n < 10)
{
_putchar(n + '0');
n += 1;
}
_putchar('\n');
return (0);
}
