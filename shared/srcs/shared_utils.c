#include "../headers/shared.h"

void	set_memory_to_zeros(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

void	set_array_to_zeros(int *array, size_t array_length)
{
	unsigned int	i;

	i = 0;
	while (i < array_length)
	{
		array[i] = 0;
		i++;
	}
}
