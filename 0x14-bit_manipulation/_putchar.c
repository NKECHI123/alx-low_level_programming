#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the cahracter c to atdout
 * @c: The character to print
 *
 * Return: On success !.
 * On error, -1 is returned, and errno is set appropriately.
 */
int_putchar(char c)
{
	return (write(1,&c,1));
}
