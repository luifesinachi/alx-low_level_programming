#include "main.h"
#include <stdio.h>

/** 
* _strlen - Returns the length of a string
* @str: The string to get the length of. 
* 
* Return: 0.
*/
int main (void)	
{
char str[50];
int len;

strcpy(str, "This is tutorialspoint.com");

len = strlen(str);
printf("Length of |%s| is |%d|\n", str, len);
		          
return(0);
}
