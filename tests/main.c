#include "unity.h"
#include "data_structure_tests/include/dyn_array_tests.h"
#include "data_structure_tests/include/result_test.h"
#include <string.h>

void setUp(void) {
    // Optional: initialize test environment
}

void tearDown(void) {
    // Optional: clean up after test
}

int main(void) {
    UNITY_BEGIN();
    // RUN_TEST(test_array_push);
    RUN_TEST(test_result);
    return UNITY_END();
}

