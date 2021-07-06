NAME = server
NAME2 = client

NAME_FILE = ./server_files
NAME_FILE2 = ./client_files

all : $(NAME) $(NAME2)

$(NAME) :
		$(MAKE) -C $(NAME_FILE)
$(NAME2) :
		$(MAKE) -C $(NAME_FILE2)

clean :
	$(MAKE) clean -C $(NAME_FILE)
	$(MAKE) clean -C $(NAME_FILE2)

fclean:	clean
	$(MAKE) fclean -C $(NAME_FILE)
	$(MAKE) fclean -C $(NAME_FILE2)

re: fclean all
