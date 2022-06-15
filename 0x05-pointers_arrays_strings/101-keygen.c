#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - check the code.
* Return: Always 0.
*/
int main(void)
{
char seed[15] = "Tada! Congrats";
char password[15];
int i, n, passw,101-crackme;

srand(time(0));

for (i = 0; passw < 2772; i++)
{
n = rand() % 10;
password[i] = seed[n];
passw += password[i];
}
complem = 2772 - passw;
password[i] = 101-crackme;
printf("%s\n",  password);
return (0);
}
