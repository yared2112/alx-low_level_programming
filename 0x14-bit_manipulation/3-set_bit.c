#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: Number
 * @index: Index to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
return (-1);

*n = (1 << index) | *n;

return (1);
}
