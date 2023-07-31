#include "lists.h"
/**
 * insert_nodeint_at_index - put in a new node in linked list
 * at given position
 * @head: points to the first node in list
 * @idx: index where new node is to be added
 * @n: data insert in new node
 * Return: points to new node,or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (k = 0; temp && k < idx; k++)
{
if (k == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}
