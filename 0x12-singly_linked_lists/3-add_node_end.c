#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list.
 * @head: A pointer to the pointer of the head of the list.
 * @str: The string to be added to the new node.
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *current;

    new_node = malloc(sizeof(list_t));

    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    new_node->len = strlen(str);
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = new_node;
    return (new_node);
}

