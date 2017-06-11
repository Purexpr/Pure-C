/*
Tip:
1. use "compound literal"(C99) to return new struct on-the-fly
*/
#include "closure.h"

int
aux
(   struct fn_add obj,
    int y
)
{return obj.x + y;}

struct fn_add
return_fn_add
(int x)
{   return
    (struct fn_add)
    {   .x = x,
        .call = aux
    }; 
}
