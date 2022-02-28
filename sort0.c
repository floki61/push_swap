#include "push_swap.h"
void    sort0(struct node **a,struct node**b)
{

    int lent;
    int min;
    int max;
    int i;
    int min_move;
    int pos;
    int nearest_num_a;

    i = 1;
    lent = lent_stack(*a);
    min = check_min(*a);
    max = check_max(*a);
    while(lent-- > 0)
    {
        if(i == min || i == max)
            ra(a);
        else
            pb(a,b);
        i++;
    }
    lent = lent_stack(*b);
    while(lent--)
    {   
        value(*a,*b);
        min_move = check_min_value(*b);
        pos = position(*b,&i,min_move);
        sorted(pos,i,b);
        // if(pos == 1)
        // {
        //     while(i-- > 0)
        //         ra(b);
        // }
        // else
        // {
        //     while(i-- > 0)
        //         rra(b);
        // }
        nearest_num_a = nearest_num(a,b);
        pos = position(*a,&i,nearest_num_a);
         if(pos == 1)
        {
            while(i-- > 0)
                ra(a);
        }
        else
        {
            while(i-- > 0)
                rra(a);
        }
        pa(a,b);
    }
    trtib(a);
}

 