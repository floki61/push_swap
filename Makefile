NAME=push_swap.a

SRCS= push_swap.c  check_minmax.c error.c libft.c outils.c push.c rotate.c sort0.c small_sort.c  swap.c outils_ll.c outils_lll.c\

FLAGS=-Wall -Wextra -Werror -c

OBJS= push_swap.o  check_minmax.o error.o libft.o outils.o push.o rotate.o sort0.o small_sort.o  swap.o outils_ll.o outils_lll.o \

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(SRCS) 
	ar rc $(NAME) $(OBJS)
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
