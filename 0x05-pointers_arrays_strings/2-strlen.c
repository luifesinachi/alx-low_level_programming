#include "main.h"
#include <stdio.h>
#include <string.h>
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

str = "My first strlen!";

len = strlen(str);
printf("Length of |%s| is |%d|\n", str, len);
		          
return(0);
}
