#include "lists.h"
/**
 * pop_listint - delete head node of linked list
 * @head: points to first element in linked list
 * Return: data in the element that was deleted,
 * or 0 when list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tempq;
int numtobe;
if (!head || !*head)
return (0);
numtobe = (*head)->n;
tempq = (*head)->next;
free(*head);
*head = tempq;
return (numtobe);
}
