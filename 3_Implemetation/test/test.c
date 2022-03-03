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
    UNITY_TEST_ASSERT_EQUAL_INT((-1), (login()), __LINE__, NULL);
}

