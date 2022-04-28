#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: Number
 * @m: Number
 *
 * Return: Numbers of bits that n have to change for be equal to m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, counter;

for (counter = i = 0; i < 64; i++, counter++)
if (((n >> i) & 1) == ((m >> i) & 1))
counter--;

return (counter);
}
