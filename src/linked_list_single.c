#include "./linked_list_single.h"

static struct Node
{
	void *data;
	struct Node *next;
} Node;

static struct Node *node_create(void)
{
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	if (!node) 
	{ 
		return NULL;
	}
	node->data = NULL;
	node->next = NULL;
	return node;
}

static void node_free(struct Node *node, void (*cb)(void*))
{
	cb(node->data);
	free(node);
}

struct LinkedListSingle {
	struct Node *head;
	struct Node *tail;
	size_t length;
};

LinkedListSingle *linked_list_single_create(void)
{
	LinkedListSingle *list = (LinkedListSingle *)malloc(sizeof(LinkedListSingle));
	if (!list) 
	{
		return NULL;
	}
	list->head = NULL;
	list->tail = NULL;
	list->length = 0;
	return list;
}

void linked_list_single_free(LinkedListSingle *list, void (*cb)(void*))
{
	if (!list)
	{
		return;
	}
	struct Node *current = list->head;
	while(current) 
	{
		struct Node *next = current->next;
		node_free(current, cb);
		current = next;
	}
	free(list);
}
