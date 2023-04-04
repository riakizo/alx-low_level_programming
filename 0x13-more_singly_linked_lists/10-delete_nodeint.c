#include "lists.h"

/**
*delete_nodeint_at_index - Deletes the node at agiven
*                           index of a listint_t list.
*@head: A pointer to the address of the head
*       of the listint_t list.
*@index: The index of the node to be deleted - starts at 0.
*
* Return: success - 1.
*         failure - -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
	listint_t *recent, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	recent = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (recent->next == NULL)
			return (-1);
		recent = recent->next;
	}
	next = recent->next;
	recent->next = next->next;
	free(next);
	return (1);
}
