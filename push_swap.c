#include "push_swap.h"

int main(int argc,char *argv[])
{
    struct node* stack_a;
	struct node *stack_b;

	stack_a = NULL;
	stack_b = NULL;

    if(argc < 2 || !lineardata_data(argv,&stack_a))
		return (0);
	if (--argc == 2)
		sort_2(&stack_a);
	if(argc == 3)
		sort_3(&stack_a);
	else if (argc == 4)
		sort_4(&stack_a,&stack_b);
	else if (argc == 5)
		sort_5(&stack_a,&stack_b);
	else if (argc > 5)
		sort0(&stack_a,&stack_b);
	// print_stack(stack_a);
	return 0;
}