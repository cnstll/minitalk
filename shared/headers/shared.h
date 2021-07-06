#ifndef SHARED_H
# define SHARED_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <signal.h>

void	set_memory_to_zeros(void *s, size_t n);
void	set_array_to_zeros(int *array, size_t array_length);
#endif
