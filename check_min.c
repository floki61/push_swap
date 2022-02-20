#include "push_swap.h"
int    check_min(struct node   *stack)
{
    struct node *tmp;
    int i;
    int pos;

    i = stack->data;
    tmp = stack;
    pos = 1;
    while(tmp)
    {
        if(i > tmp->data)
            i = tmp->data;
        tmp = tmp->next;
    }
    tmp = stack;
    while(tmp)
    {
        if (tmp->data == i)
            return (pos);
        tmp = tmp->next;
        pos++;
    }
    return(0);   
}
int    check_max(struct node   *stack)
{
    struct node *tmp;
    int i;
    int pos;

    i = stack->data;
    tmp = stack;
    pos = 1;
    while(tmp)
    {
        if(i < tmp->data)
            i = tmp->data;
        tmp = tmp->next;
    }
    tmp = stack;
    while(tmp)
    {
        if (tmp->data == i)
            return (pos);
        tmp = tmp->next;
        pos++;
    }
    return(0);  
}
