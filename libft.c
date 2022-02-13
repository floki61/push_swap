#include "push_swap.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	whitespace(char c)
{
	if (c == '\n' || c == '\v' || c == '\f' || c == '\t' || c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

long long	ft_atoi(const char *str)
{
	int			i;
	int			negativity;
	long long	result;

	i = 0;
	negativity = 1;
	result = 0;
	while (whitespace(str[i]))
		i++;
	if (str[i] == '-')
		negativity = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * negativity);
}	

void	ft_lstadd_back(struct node **alst, struct node *new)
{
	new->next = NULL;
	if (!*alst)
		*alst = new;
	else
		(ft_lstlast(*alst))->next = new;
}

 struct node	*ft_lstnew(int content)
{
	 struct node	*new;

	new = ( struct node *) malloc(sizeof( struct node));
	if (!new)
		return (NULL);
	new->data = content;
	new->next = NULL;
	return (new);
}

struct node	*ft_lstlast(struct node *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
