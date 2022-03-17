NAME = push_swap
BNAME = checker
FLAGS = -Wall -Wextra -Werror

SRCS =	push_swap.c 		\
		tools_4.c	\
		error.c 			\
		libft.c				\
		tools.c				\
		push.c 				\
		rotate.c			\
		sort.c 			\
		small_sort.c		\
		swap.c				\
		tools_2.c			\
		tools_3.c			\

SRCSB =	error.c 			\
		tools_2.c 			\
		tools.c 			\
		libft.c				\
		get_next_line.c		\
		checker.c			\
		ft_split.c 			\
		swap.c 				\
		rotate.c 			\
		push.c 				\
		tools_4.c 		\
		checker_tools.c 	\
		

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : 
	@gcc $(FLAGS) $(SRCS) -o $(NAME)
	
bonus:	$(BNAME)

$(BNAME) :
	@gcc $(FLAGS) $(SRCSB) -D BUFFER_SIZE=1000000 -o $(BNAME)

fclean:
	@rm -rf $(NAME) $(BNAME)

re: fclean all