#include "main.h"
#include <stdlib.h>

/*
* malloc_check - function that allocates memory using malloc
* @b: size of int
* return: nothing
*/

void *malloc_check(unsigned  int b);
{
void *al;

al = malloc(b);
if (al == NULL)
exit(98);
else
return (al);
}
