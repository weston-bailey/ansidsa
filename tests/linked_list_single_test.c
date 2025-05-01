#include "./junit.h"
#include "../src/linked_list_single.h"

void free_int_ptr(void *ptr)
{
	int *int_ptr = (int *)ptr;
	if (int_ptr)
	{
		free(int_ptr);
	}
}

JUNIT(linked_list_single_test) {
	LinkedListSingle *list;
	JDESCRIBE("it should should handle malloc and free");
    JASSERT(list != NULL);
	list = linked_list_single_create();
    JASSERT(list->head == NULL);
    JASSERT(list->tail == NULL);
    JASSERT(list->length == 0);
	linked_list_single_free(list, free_int_ptr);
	JDESCRIBE_END();
}
