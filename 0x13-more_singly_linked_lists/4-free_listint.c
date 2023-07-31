#include "lists.h"
/**
 * free_listint  - free the linked list
 * @head: free listint_t
 */
void free_listint(listint_t *head)
{
listint_t *tempd;
while (head)
{
tempd = head->next;
free(head);
head = tempd;
}
}
