#include "../include/io.h"
#include <stdio.h>
#include <stdlib.h>

#define IO_READ_CHUNK_SIZE 1

File io_file_read(char *path) {
    File file = {
        .is_valid = false,
    };

    FILE *fstream = fopen(path, "rb");

    char *data = NULL;
    char *tmp;
    size_t used = 0;
    size_t size = 0;
    size_t n;
    while (true) {
        if (used + IO_READ_CHUNK_SIZE + 1 > size) {
            size = used + IO_READ_CHUNK_SIZE + 1;
            if (size <= used) {
                free(data);
                tmp = realloc(data, size);
                data = tmp;
            }
            n = fread(data + used, 1, IO_READ_CHUNK_SIZE, fstream);
        }
        if (n == 0)
            break;
        used += n;
    }
    tmp = realloc(data, used + 1);
    data = tmp;
    data[used] = 0;
    file.data = data;
    file.len = used;
    file.is_valid = true;
    return file;
}

