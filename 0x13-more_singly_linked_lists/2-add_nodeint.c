#include "lists.h"
/**
 * add_nodeint - adds the new node in the beginning of a linked list
 * @head: point to first node in the list
 * @n: data to be inserted in the new node
 * Return: point to the new node, or NULL when if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new01;
new01 = malloc(sizeof(listint_t));
if (!new01)
return (NULL);
new01->n = n;
new01->next = *head;
*head = new01;
return (new01);
}
