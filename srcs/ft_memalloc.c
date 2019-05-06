
#include <stdlib.h>
#include "libft.h"

void * ft_memalloc(size_t size)
{
	char *temp;

	temp = (char *)malloc(size);
	if (temp == NULL || size == 0)
		return (NULL);
	ft_bzero(temp, size);
	return ((void *)temp);
}
