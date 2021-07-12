#include "../headers/client.h"
#include "../headers/shared.h"

static void	convert_string_to_signals(int server_pid, char *string_to_send)
{
	int		i;

	i = 0;
	while (string_to_send[i])
	{
		send_char_as_signals(server_pid, string_to_send[i]);
		i++;
	}
	send_char_as_signals(server_pid, string_to_send[i]);
}

int	main(int argc, char *argv[])
{
	int		server_pid;

	if (argc == 3)
	{
		if (is_number(argv[1]) != 0)
			return (1);
		server_pid = atoi_lite(argv[1]);
		convert_string_to_signals(server_pid, argv[2]);
		return (0);
	}
	else
	{
		write(1, "ARGUMENT ERROR\n", 15);
		return (1);
	}
}
