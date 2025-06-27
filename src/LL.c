#include "LL.h"
// Memory for init: Header + One node

LL_Node *LL_init() {
    LL_Node *head = malloc(sizeof(LL_Node));
    if (head) {
        head->prev = 0;
        head->next = 0;
    }
    return head;
}

// if the list is empty, add data to head node
// Not sure where the mallocs should occur here
void LL_push(void *data, LL_Node *head) {
    LL_Node *ptr = head->next; 
    // The list is empty
    if (head->next == 0) {
        head->data = data;
    }
    LL_Node new;
    while (head->next != 0) {
        
    }
}

void *LL_read() {

}
