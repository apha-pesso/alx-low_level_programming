#include "main.h"





/**
 * _pow - calculates a raised to the power b
 * @a: base number
 * @b: exponent
 *
 * Return: number
 */

int _pow(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);

	return (a * _pow(a, b - 1));
}



/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to string of 0 and 1
 * Return: return converted number or 0 when it fails
 */


unsigned int binary_to_uint(const char *b)
{
	int n = 0, i = 0, sum = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	while (i-- && i >= 0)
	{
		if (b[i] == '1')
		{
			sum = sum + _pow(2, n);
		}
		else if (b[i] != '0')
			return (0);

		n++;
	}
	return (sum);
}
