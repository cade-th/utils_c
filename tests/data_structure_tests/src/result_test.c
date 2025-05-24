#include "../include/result_test.h"
#include <stdio.h>

RESULT(double,char *) My_Result; 

My_Result divide(double x, double y) {
    if (y == 0) {
        My_Result err = ERR("divided by zero");
        return err;
    } else {
        My_Result ok = OK(x / y);
        return ok;
    }
}

void test_result(void) {
    My_Result r = divide(9,1);
    if (r.is_ok) {
        printf("Test worked!\n");
    } else {
        printf("%s\n", UNWRAP_ERR(r));    
    }
}
