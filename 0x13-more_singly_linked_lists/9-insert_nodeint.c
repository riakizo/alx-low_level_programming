#include "lists.h"

/**
* insert_nodeint_at_index - Insert a new node to a listint_t list.
* @head: A pointer to the address of the head of the listint_t list.
* @idx: The index of the listint_t list the new .
*       node will be added indices start at 0.
* @n: The integer for the new node contain.
*
* Return: If the function fails - NULL.
*         Otherwise - the address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{unsigned int i;
	listint_t *recent, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		recent = *head;
		for (i = 0; i < idx - 1 && recent != NULL; i++)
		{
			recent = recent->next;
		}
		if (recent == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = recent->next;
	recent->next = new;
	return (new);
}

