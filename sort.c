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
int    check_end(struct node **stack)
{
    struct node *tmp;
    tmp = *stack;
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    return(tmp->data);
}
int nearest_num(struct node **a,int b)
{
    struct node *tmp;
    int i;
    int a1;
    int j;
    int pos;

    tmp = *a;
    i = 2147483647;
    pos = 1;
    while(tmp)
    {
        a1 = tmp->data - b;
        if(tmp->data > b && i > a1)
        {
            i = a1;
            j = tmp->data;
            
        }
        tmp = tmp->next;
    }
    tmp = *a;
    while(tmp->data != j)
    {
        pos++;
        tmp = tmp->next;
    }
    return(pos);
}
int    move_num(struct node **a,int pos,int *k)
{
    int move;
    int d;
    int i;

    move = 0;
    d = position(*a,&i,pos);
    *k = d;
    if(d == 1)
    {
        while(i-- > 0)
            move++;
    }
    else
    {
        while(i-- > 0)
            move++;
    }
    return (move);
}

void sort(struct node **a,struct node **b)
{
    struct node *tmp;
    int min;
    int max;
    int i;
    int lent;
    int end;

    i = 1;
    lent = lent_stack(*a);
    tmp = *a;
    min = check_min(*a);
    max = check_max(*a);
    end = check_end(a);
    while(lent-- > 0)
    {
        if(i == min || i == max)
            ra(a);
        else
            pb(a,b);
        i++;
    }
    sort_help(a,b);
    trtib(a);
    
}
void    sort_help(struct node **a,struct node **b)
{
    int p;
    int k;
    int move_num1;
    int move_num2;
    int d;

    p = nearest_num(a,(*b)->data);
    k = nearest_num(a,check_end(b));
    move_num1 = move_num(a,p,&d);
    move_num2 = move_num(a,k,&d);
    while(lent_stack(*b))
    {
        p = nearest_num(a,(*b)->data);
        k = nearest_num(a,check_end(b));
        move_num1 = move_num(a,p,&d);
        move_num2 = move_num(a,k,&d);
        if(move_num1 <= move_num2 + 1)
        {
            if(d == 1)
            {
                while(move_num1-- > 0)
                    ra(a);
            }
            else
            {
                while(move_num1-- > 0)
                    rra(a);
            }
            pa(a,b);
        }
        else
        {
            if(d == 1)
            {
                while(move_num2-- > 0)
                    ra(a);
            }
            else
            {
                while(move_num2-- > 0)
                    rra(a);
            }
            rra(b);
            pa(a,b);
        }
    }
}