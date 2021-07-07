#include "../headers/server.h"
#include "../headers/shared.h"

void	handle_sigusr(int signal_number)
{
	static int	count_bits_received = 7;
	static char	character = 0;

	if (signal_number == SIGUSR2)
		count_bits_received--;
	if (signal_number == SIGUSR1)
	{
		character |= (1 << count_bits_received);
		count_bits_received--;
	}
	if (count_bits_received < 0)
	{
		write(1, &character, 1);
		character = 0;
		count_bits_received = 7;
	}
}

int	main(void)
{
	pid_t				pid;

	pid = getpid();
	write(1, "Server PID: ", 12);
	write_number(pid);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR2, handle_sigusr);
		signal(SIGUSR1, handle_sigusr);
		pause();
	}
	return (0);
}
