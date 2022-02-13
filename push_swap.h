#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
#include <string.h>
#include <limits.h>

struct node{
	int data;
	struct node* next;
};

void    sa(struct node** p);
void		sb(struct node** p);
void    sort_3(struct node** a);
void rra(struct node** a);
void ra(struct node** a);
void	ft_lstadd_back(struct node **alst, struct node *new);
 struct node	*ft_lstnew(int content);
struct node	*ft_lstlast(struct node *lst);
int	lineardata_data(char *argv[],struct node **head);
int	error(char *argv[]);
int ft_strlen(char *str);
int	ft_isdigit(int c);
long long	ft_atoi(const char *str);


#endif