#pragma once
#include "../../../include/error.h"

typedef enum {
	error_1,
	error_2,
	error_3,
	error_4,
} divide_error_t;


error(divide_error_t);
void test_result(void);
