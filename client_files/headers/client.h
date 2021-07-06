#ifndef CLIENT_H
# define CLIENT_H

int		is_digit(char character);
int		is_number(char *string);
int		atoi_lite(char *string);
void	send_char_as_signals(int pid_of_endpoint, char ascii_character);
#endif
