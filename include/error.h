#pragma once
#include <stdbool.h>

#define RESULT(T, E) \
    typedef struct { \
	bool is_ok;  \
	union {      \
	    T val;   \
	    E err;   \
	} inner;     \
    }

#define error(enumerator)	\
    typedef struct {		\
	enumerator type;	\
	bool ok;		\
	void *data;		\
    }

#define THROW(E,T,D)		\
    E.data = malloc(sizeof(T)); \
    *(T *)E.data = D; return E;

#define CATCH(T,E)		\
    *(T *)E.data


#define UNWRAP_ERR(RESULT_VAL) RESULT_VAL.inner.err

#define OK(VALUE) { .is_ok = 1, .inner.val = VALUE}

#define ERR(T, VALUE) { .is_ok = 0, .inner.err = TYPE, .inner.val = VALUE}
