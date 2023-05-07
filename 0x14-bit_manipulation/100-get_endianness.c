#include "main.h"

/**
 * get_endianness - This one checks for the endianness.
 *
 * Return: 0 if big endian.
 *         Otherwise - 1 if little endian.
 */

int get_endianness(void)
{
	int j = 1;
	char *endian = (char *)&j;

	if (*endian == 1)
		return (1);

	return (0);
}
