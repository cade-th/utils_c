#include "../src/map.h"
#include "stdio.h"

static map_error error;

void run_map_tests() {

    map_basic_test();
}
void map_basic_test() {

    typedef enum {
        LDA,
    } OPCODE;

    // Generic key-value struct type called PAIR
    PAIR(char *, OPCODE); 
    MAP(PAIR);



    MAP_PUSH(
   
    if(error.ok) {
        printf("Map Test: PASS\n");
        return;
    }
    printf("Map Test: FAIL\n");
    switch (error.type) {
        case MAP_BODY:
            printf("Write the map\n");
            break;
        default:
            printf("Unknown Error\n");
    }
}
