#include "main.h"
#include <stdlib.h>

/*
* malloc_check - Allocates memory using malloc
* @b: The number of bytes to be allocated
* return: nothing
*/

void *malloc_check(unsigned  int b)
{
void *mem = malloc(b);

if (mem == NULL)
exit(98);
return (mem);
}
