#include "../headers/client.h"
#include "../headers/shared.h"

static int	is_digit(char character)
{
	return (character < '0' || character > '9');
}

int	is_number(char *string)
{
	int	index;

	index = 0;
	while (string[index])
	{
		if (is_digit(string[index]) != 0)
			return (1);
		index++;
	}
	return (0);
}

int	atoi_lite(char *string)
{
	int		number;
	int		index;

	index = 0;
	number = 0;
	while (string[index] > 47 && string[index] < 58)
	{
		if (string[index + 1] > 47 && string[index + 1] < 58)
			number = (number + (int)(string[index]) % 48) * 10;
		else
			number = (number + (int)(string[index]) % 48);
		index++;
	}
	return (number);
}

void	send_char_as_signals(int pid_of_endpoint, char ascii_character)
{
	int		bit_position;

	bit_position = 0;
	while (bit_position < 8)
	{
		if (ascii_character & (1 << bit_position))
			kill(pid_of_endpoint, SIGUSR1);
		else
			kill(pid_of_endpoint, SIGUSR2);
		bit_position++;
		usleep(20);
	}
}
