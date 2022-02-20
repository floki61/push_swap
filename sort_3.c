#include "push_swap.h"

void    sort_3(struct node** a)
{
    int _1_;
    int _2_;
    int _3_;

    _1_ = (*a)->data;
    _2_ = (*a)->next->data;
    _3_ = (*a)->next->next->data;

    if (_1_ > _2_ && _2_ > _3_)
    {
      sa(a,"sa");
      rra(a);
    }
    else if (_1_ > _2_ && _1_ < _3_)
      sa(a,"sa");
    else if (_1_ > _3_ && _2_ < _3_)
      ra(a);
    else if (_1_ < _2_ && _2_ > _3_ && _1_ < _3_)
    {
      sa(a,"sa");
      ra(a);
    }
    else if (_1_ < _2_ && _2_ > _3_ && _1_ > _3_)
      rra(a);
}
