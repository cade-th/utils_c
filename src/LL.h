#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define INITIAL_CAPACITY 100

typedef struct LL_Node {      
	void *data;              
	struct LL_Node *next; 
	struct LL_Node *prev;
} LL_Node;                    

LL_Node *LL_init();
void LL_push(void *data, LL_Node *head);

// Do ensure capacity here at some point
// Do this with LL somehow not dyn_array
//
#define LL_HEADER(LL) ((LL_Header *)(LL) - 1)


void LL_Push(void *data);
void *LL_read();


