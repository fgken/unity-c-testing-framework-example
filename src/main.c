#include <stdio.h>

#include "mulmodule.h"
#include "summodule.h"

int
main()
{
    int r;

    r = sum(1, 1);
    printf("1 + 1 = %d\n", r);

    r = multiple(2, 3);
    printf("2 * 3 = %d\n", r);

    return 0;
}