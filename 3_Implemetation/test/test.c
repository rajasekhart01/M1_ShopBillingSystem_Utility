#include "bill.h"
#include "unity.h"

void setUp()
{

}

void tearDown()
{

}

void test_login (void);


int main()
{
    UNITY_BEGIN();

    RUN_TEST(login);

    return UNITY_END();
}

void test_login (void)
{   
    TEST_ASSERT_EQUAL(-1,login());
}

