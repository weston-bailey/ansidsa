#ifndef _LIST_SINGLE_H_
#define _LIST_SINGLE_H_

#include <stdlib.h>

typedef struct LinkedListSingle LinkedListSingle;

LinkedListSingle *linked_list_single_create(void);
void linked_list_single_free(LinkedListSingle *list, void (*cb)(void*));
/*
list_single_create         - Allocate and initialize a new empty list
list_single_free           - Free all nodes and the list itself
list_single_append         - Append a value to the end of the list
list_single_prepend        - Insert a value at the front of the list
list_single_remove         - Remove the first occurrence of a value
list_single_print          - Print all values in the list (debug use)
list_single_contains       - Return 1 if value exists, 0 otherwise
list_single_length         - Return the number of elements in the list
list_single_get            - Retrieve value at a specific index
list_single_insert         - Insert value at a specific index
list_single_delete_at      - Remove node at a specific index
list_single_pop_front      - Remove and return the front value
list_single_pop_back       - Remove and return the back value
list_single_peek_front     - Return the front value without removing
list_single_peek_back      - Return the last value without removing
list_single_reverse        - Reverse the list in-place
list_single_sort           - Sort the list in ascending order
list_single_clone          - Deep-copy the list into a new instance
list_single_clear          - Remove all elements, leaving an empty list
list_single_foreach        - Apply a function to each element in the list
list_single_find           - Return pointer to first value that matches predicate
*/
#endif
