
int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stck_b;
	char	*instruction;

	a = NULL;
	b = NULL;
	if (argc < 2 || !lineardata (argv, &stack_a))
		return (0);
	while()
}
int    is_sorted(t_node *a)
{
    while(a->next)
    {
        if(a->data > a->next->data)
            return 0;
        a = a->next;
    }
    return (1);
}
