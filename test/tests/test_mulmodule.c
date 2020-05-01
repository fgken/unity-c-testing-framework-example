#include "mulmodule.h"
#include "unity.h"

void
test_mul(void)
{
    TEST_ASSERT_EQUAL_INT(6, multiple(2, 3));
}
