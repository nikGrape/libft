#include <stdlib.h>

void itoa2(char *str, int nbr)
{
	int index;
	int sing;

	sing = 0;
	index = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr >= 10)
		itoa2(str, nbr/10);
	while(str[index])
		index++;
	str[index] = nbr % 10 + '0';
	str[++index] = '\0';
}

char *itoa(int nbr)
{
	char *str;

	if (nbr == -2147483648)
	return "-2147483648";
	str = (char *)malloc(12);
	if (str == NULL)
		return (NULL);
	itoa2(str, nbr);
	return str;
}
