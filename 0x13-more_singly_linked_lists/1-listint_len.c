#include "lists.h"
/**
 * listint_len - return all number of elements in the linked lists
 * @h: the linked list of all typed listint_t to be traversed
 * Return: all number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num1 = 0;
while (h)
{
num1++;
h = h->next;
}
return (num1);
}
