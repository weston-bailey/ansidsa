#define JUNIT_CUSTOM_HOOKS
#include "./junit.h"
#include "../src/slist.h"

void free_int_ptr(void *ptr)
{
	int *int_ptr = (int *)ptr;
	if (int_ptr)
	{
		free(int_ptr);
	}
}

slist_t *list;

void junit_setup(void)
{
	list = slist_create();
}

void junit_teardown(void)
{
	slist_free(list, free_int_ptr);
}

JUNIT(slist_test) {
	JSUITE("list alloc and free");
	JDESCRIBE("it should should handle malloc and free");
    JASSERT(list != NULL);
    JASSERT(slist_get_head(list) == NULL);
    JASSERT(slist_get_tail(list) == NULL);
    JASSERT(slist_get_length(list) == 0);
	JSUITE_END();
}
