#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the loop is not there - NULL.
 *         Otherwise - the address of the node where the loop
 *         starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise, *hare;

	tortoise = hare = head;
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			break;
		}
	}
	if (!tortoise || !hare || !hare->next)
		return (NULL);
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}
