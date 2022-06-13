#include "main.h"
#include <studio.h>

/** 
* _strlen - Returns the length of a string
* @str: The string to get the length of. 
* 
* Return: 0.
*/
int main () 
{
char str[50];
int len;

strcpy(str, "This is tutorialspoint.com");

len = strlen(str);
printf("Length of |%s| is |%d|\n", str, len);
		          
return(0);
}
