#include "./slist.h"

typedef struct node {
    void *data;
    struct node *next;
} node_t;

static node_t *node_create(void)
{
    node_t *node = (node_t *)malloc(sizeof(node_t));
    if (!node) {
        return NULL;
    }
    node->data = NULL;
    node->next = NULL;
    return node;
}

static void node_free(node_t *node, void (*cb)(void *))
{
    if (cb) cb(node->data);
    free(node);
}

struct slist {
    node_t *head;
    node_t *tail;
    size_t length;
};

slist_t *slist_create(void)
{
    slist_t *list = (slist_t *)malloc(sizeof(slist_t));
    if (!list) {
        return NULL;
    }
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
    return list;
}

void slist_free(slist_t *list, void (*cb)(void *))
{
    if (!list) {
        return;
    }
    node_t *current = list->head;
    while (current) {
        node_t *next = current->next;
        node_free(current, cb);
        current = next;
    }
    free(list);
}

void *slist_get_head(slist_t *list)
{
    return list ? list->head : NULL;
}

void *slist_get_tail(slist_t *list)
{
    return list ? list->tail : NULL;
}

size_t slist_get_length(slist_t *list)
{
    return list ? list->length : 0;
}

