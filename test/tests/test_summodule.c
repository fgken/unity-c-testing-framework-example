#include "summodule.h"
#include "unity.h"

void
setUp(void)
{
    // set stuff up here
}

void
tearDown(void)
{
    // clean stuff up here
}

void
test_sum(void)
{
    TEST_ASSERT_EQUAL_INT(2, sum(1, 1));
}
