#pragma once
#include "../../../include/error.h"

typedef enum {
	error_1,
	error_2,
	error_3,
	error_4,
} getnum_error_t;
error(getnum_error_t) getnum_error;

void test_result(void);
