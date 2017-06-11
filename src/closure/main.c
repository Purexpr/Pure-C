#include <stdio.h>
#include "closure.h"


int
main
(void)
{   printf("Hello Pure-C!\n");

    struct fn_add
    add_one = return_fn_add(1);

    struct fn_add
    add_two = return_fn_add(2);

    printf
    (   "add_one.call(add_one, 1) = %d\n",
        add_one.call(add_one, 1)
    );

    printf
    (   "add_two.call(add_two, 1) = %d\n",
        add_two.call(add_two, 1)
    );

    return 0;
}
