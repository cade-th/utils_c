#pragma once
#include "error.h"

typedef enum {
    MAP_BODY,
} Map_Error_T;
ERROR(Map_Error_T) map_error;

typedef struct {
    int length;
    int capacity;
} Map_Header;

#define INITIAL_CAPACITY 100

typedef struct {
    char *key;
    void *value;
} Key_Value;

void *map_init(int item_size, int capacity);

map_error map_find(char *key);

// Add ensure capcity to this at some point
#define MAP_PUSH(m, p) \
    (m)[map_header(m)->length] = (p), \
    &(m)[map_header(m) (array_header(v)->capacity)


#define  MAP_FIND(key, map) \
    
void run_map_tests();
void map_basic_test();
