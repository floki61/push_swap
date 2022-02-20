#include "push_swap.h"
// void    sort(struct node   **a,struct node   **b)
// {
//     int pos;
//     int i;
//     int d;

//     i = 0;
//     while(lent_stack(*a) > 5)
//     {
//         pos = check_min(*a);
//         d = position(*a,&i,pos);
//         if(d == 1)
//         {
//             while(i-- > 0)
//                 ra(a);
//         }
//         else
//         {
//             while(i-- > 0)
//                 rra(a);
//         }
//         pb(a,b);
//     }
//     sort_5(a,b);
//     while(lent_stack(*b) != 0)
//     {
//         pa(a,b);
//     }
// }
int    check_end(struct node **a,struct node **b)
{
    struct node *tmp;
    tmp = a;
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    return(tmp->data);
}
int nearest_num(struct node **a,struct node **b)
{
    struct node *tmp;
    int i;

    tmp = a;
    i = 0
    while(tmp)
    {
        if(tmp->data > (*b)->data)
    }
}
void sort(struct node **a,struct node **b)
{
    struct node *tmp;
    int min;
    int max;
    int i;
    int lent;

    i = 1;
    lent = lent_stack(*a);
    tmp = *a;
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

}