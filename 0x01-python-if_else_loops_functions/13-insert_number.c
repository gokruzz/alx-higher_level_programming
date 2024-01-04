#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * insert_node - Function to insert a number into a sorted singly linked list
 * @head: pointer to pointer head
 * @number: integer
 * Return: new node or NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return NULL;
    }
    new_node->data = number;
    new_node->next = NULL;

    if (*head == NULL || number < (*head)->data)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }
}
