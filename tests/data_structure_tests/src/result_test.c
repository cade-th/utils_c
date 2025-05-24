#include "../include/result_test.h"
#include "../../unity.h"

RESULT(double,int) My_Result; 

My_Result divide(double x, double y) {
    if (y == 0) {
        My_Result err = ERR(1);
        return err;
    } else {
        My_Result ok = OK(x / y);
        return ok;
    }
}

void test_result(void) {
    My_Result r = divide(9,1);
    TEST_ASSERT(r.is_ok == 1);
        
}
