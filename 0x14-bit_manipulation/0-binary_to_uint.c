#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: A string representing a binary number.
 *
 * Return: The converted unsigned integer, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int length, powerOfTwo = 1;

    if (!b)
        return 0; /*Handle the case of a NULL string input*/

    length = 0;
    /*Calculate the length of the input string*/
    while (b[length] != '\0')
        length++;

    /*Iterate through the string from right to left*/
    for (length--; length >= 0; length--, powerOfTwo *= 2)
    {
        if (b[length] != '0' && b[length] != '1')
        {
            return 0; /*Invalid character in the binary string*/
        }

        /*Add the binary digit's contribution to the result*/
        if (b[length] == '1')
        {
            result += powerOfTwo;
        }
    }

    return result;
}
