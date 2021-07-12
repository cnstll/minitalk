#include "../headers/server.h"
#include "../headers/shared.h"

static void	handle_sigusr(int signal_number)
{
	static int	count_bits_received;
	static char	character;

	if (signal_number == SIGUSR1)
		character += 1 << count_bits_received;
	count_bits_received++;
	if (count_bits_received == 8)
	{
		if (character == '\0')
			write(1, "\n", 1);
		else
			write(1, &character, 1);
		character = 0;
		count_bits_received = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	write(1, "Server PID: ", 12);
	write_number(pid);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, handle_sigusr);
		signal(SIGUSR2, handle_sigusr);
	}
	return (0);
}
