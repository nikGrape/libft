SRCS=*.c
NAME=libft.a
OBJ=*.o

all:
	gcc -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	rm $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
