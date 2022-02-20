NAME=push_swap.a

SRCS= push_swap.c  check_min.c error.c libft.c outils.c push.c rotate.c sort.c sort_3.c sort_4.c sort_5.c swap.c sort_2.c\

FLAGS=-Wall -Wextra -Werror -c

OBJS= push_swap.o  check_min.o error.o libft.o outils.o push.o rotate.o sort.o sort_3.o sort_4.o sort_5.o  swap.o sort_2.o \

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(SRCS) 
	ar rc $(NAME) $(OBJS)
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
