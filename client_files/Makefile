NAME = client

SRCS = srcs/client.c \
		srcs/client_utils.c \
		../shared/srcs/shared_utils.c \

OBJS = $(SRCS:.c=.o)

CC = clang

CFLAGS = -Wall -Wextra -Werror

INCLUDES= -I headers/ -I ../shared/headers/

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	mv $(NAME) ../

%.o: %.c
	$(CC) -o $@ -c $^ $(CFLAGS) $(INCLUDES)

clean :
	rm -f $(OBJS)

fclean:	clean
	rm -f ../$(NAME)

re: fclean all
