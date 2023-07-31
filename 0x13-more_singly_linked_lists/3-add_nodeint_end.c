#include "lists.h"
/**
 * add_nodeint_end - add node at the end of linked list
 * @head: point to first element of a list
 * @n: data to be inserted in new element
 * Return: poinys to new node,or NULL if if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new22;
listint_t *temp = *head;
new22 = malloc(sizeof(listint_t));
if (!new22)
return (NULL);
new22->n = n;
new22->next = NULL;
if (*head == NULL)
{
*head = new22;
return (new22);
}
while (temp->next)
temp = temp->next;
temp->next = new22;
return (new22);
}
