#include "main.h"

/**
 * print_binary - Print the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to print in binary.
 *
 * Return: No return value.
 */
void print_binary(unsigned long int n)
{
    if (n > 0)
    {
        /*If 'n' is greater than 0, continue shifting and printing binary digits*/
        print_binary(n >> 1);
        _putchar((n & 1) + '0'); /*Extract and print the least significant bit*/ 
    }
    else
    {
        /*If 'n' is 0, print a single '0' character*/ 
        _putchar('0');
    }
}
