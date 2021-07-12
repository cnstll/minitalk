#include "../headers/server.h"
#include "../headers/shared.h"

static void	write_char(char c)
{
	write(1, &c, 1);
}

void	write_number(int positive_number)
{
	if (positive_number < 10)
		write_char(positive_number + '0');
	else
	{
		write_number(positive_number / 10);
		write_number(positive_number % 10);
	}
}
