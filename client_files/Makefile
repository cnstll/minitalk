NAME = client

SRCS = srcs/client.c \
		srcs/client_utils.c \
		../shared/srcs/shared_utils.c \

OBJS = $(SRCS:.c=.o)

UNAME_S := $(shell uname -s)
   ifeq ($(UNAME_S),Linux)
        CC += -D clang-9
    endif
    ifeq ($(UNAME_S),Darwin)
        CC += -D clang
    endif

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
