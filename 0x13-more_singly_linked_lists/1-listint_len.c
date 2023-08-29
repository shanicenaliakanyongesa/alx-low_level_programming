#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 * Return: Numbers of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t numNodes = 0;

	while (h)
	{
		h = h->next;
		numNodes++;
	}
	return (numNodes);
}
