#ifndef _SLIST_H_
#define _SLIST_H_

#include <stdlib.h>

typedef struct slist slist_t;

slist_t *slist_create(void);
void slist_free(slist_t *list, void (*cb)(void*));

void *slist_get_head(slist_t *list);
void *slist_get_tail(slist_t *list);
size_t slist_get_length(slist_t *list);

/*
slist_create         - Allocate and initialize a new empty list
slist_free           - Free all nodes and the list itself
slist_append         - Append a value to the end of the list
slist_prepend        - Insert a value at the front of the list
slist_remove         - Remove the first occurrence of a value
slist_print          - Print all values in the list (debug use)
slist_contains       - Return 1 if value exists, 0 otherwise
slist_length         - Return the number of elements in the list
slist_get            - Retrieve value at a specific index
slist_insert         - Insert value at a specific index
slist_delete_at      - Remove node at a specific index
slist_pop_front      - Remove and return the front value
slist_pop_back       - Remove and return the back value
slist_peek_front     - Return the front value without removing
slist_peek_back      - Return the last value without removing
slist_reverse        - Reverse the list in-place
slist_sort           - Sort the list in ascending order
slist_clone          - Deep-copy the list into a new instance
slist_clear          - Remove all elements, leaving an empty list
slist_foreach        - Apply a function to each element in the list
slist_find           - Return pointer to first value that matches predicate
*/

#endif /* _SLIST_H_ */

