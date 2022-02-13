#include "push_swap.h"

void    sort_3(struct node** a)
{
    int _1;
    int _2;
    int _3;

    _1 = (*a)->data;
    _2 = (*a)->next->data;
    _3 = (*a)->next->next->data;

    //3 2 1
    if (_1 > _2 && _2 > _3)
    {
      sa(a);
      rra(a);
    }
    //2 1 3
    else if (_1 > _2 && _1 < _3)
      sa(a);
    //3 1 2
    else if (_1 > _3 && _2 < _3)
      ra(a);
    //1 3 2
    else if (_1 < _2 && _2 > _3 && _1 < _3)
    {
      sa(a);
      ra(a);
    }
    //2 3 1
    else if (_1 < _2 && _2 > _3 && _1 > _3)
    {
      rra(a);
    }
}
