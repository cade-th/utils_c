#pragma once
#include <stdbool.h>

#define RESULT(T, E) \
    typedef struct { \
	bool is_ok;  \
	union {      \
	    T val;   \
	    E err;   \
	} inner;           \
    }

#define UNWRAP(RESULT_VAL) RESULT_VAL.inner.val

#define UNWRAP_ERR(RESULT_VAL) RESULT_VAL.inner.err

#define OK(VALUE) { .is_ok = 1, .inner.val = VALUE}

#define ERR(VALUE) { .is_ok = 0, .inner.err = VALUE}
