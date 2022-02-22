#include "push_swap.h"
void    sort_5(struct node   **a,struct node   **b)
{
    int pos;
    int i;
    int d;

    i = 0;
    pos = check_min(*a);
    d = position(*a,&i,pos);
    if(d == 1)
    {
        while(i-- > 0)
            ra(a);
    }
    else
    {
        while(i-- > 0)
            rra(a);
    }
    pb(a,b);
    sort_4(a,b);
    pa(a,b);
}

