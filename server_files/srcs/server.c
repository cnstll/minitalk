#include "../headers/server.h"
#include "../headers/shared.h"

void	handle_sigusr(int signal_number)
{
	static int	count_bits_received = 7;
	static char	character = 0;

//	if (signal_number == 10)
//		count_bits_received--;
//	if (signal_number == 12)
//	{
//		character = character | (1 << count_bits_received);
//		count_bits_received--;
//	}
	character |= (((signal_number >> 1) & 1) << count_bits_received);
	count_bits_received--;
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
	//struct sigaction	action;

	pid = getpid();
	write(1, "Server PID: ", 12);
	write_number(pid);
	write(1, "\n", 1);
	//action.sa_handler = handle_sigusr;
	//sigemptyset(&action.sa_mask);
	//action.sa_flags = 0;
	//action.sa_flags = SA_RESTART;
	//sigaction(SIGUSR1, &action, NULL);
	//sigaction(SIGUSR2, &action, NULL);
	while (1)
	{
		signal(SIGUSR2, handle_sigusr);
		signal(SIGUSR1, handle_sigusr);
		pause();
	}
	return (0);
}
