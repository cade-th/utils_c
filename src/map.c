#include "map.h"
#include <string.h>
#include <stdlib.h>

static map_error error;

void *map_init(int item_size, int capacity) {
    void *ptr = 0;
    int size = item_size * capacity * sizeof(Map_Header);
    Map_Header *h = malloc(size);

    if (h) {
        h->capacity = capacity;
        h->length = 0;
        ptr = h + 1;
    }
    return ptr;
}

map_error map_find(char *input) {
    int index;
    while (index < length) {
        if (strcmp(input, map[index]) == 1) {
            return map[index];
        }
        else {

        }
    }
}
