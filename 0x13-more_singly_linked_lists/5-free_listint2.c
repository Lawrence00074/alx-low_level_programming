#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: points to listint_t list to be free
 */
void free_listint2(listint_t **head)
{
listint_t *temprose;
if (head == NULL)
return;
while (*head)
{
temprose = (*head)->next;
free(*head);
*head = temprose;
}
*head = NULL;
}
