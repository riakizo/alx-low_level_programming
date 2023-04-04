#include "lists.h"

/**
* reverse_listint - Reverses a listint_t list.
*@head: A pointer to the address of
*the head of the listint_t list.
*
* Return: A pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *behind = NULL, *tmpd = NULL, *recent = *head;

	if (!head || !(*head))
		return (*head);

	behind = recent->next;
	recent->next = NULL;

	while (next_dest)
	{
		tmpd = behind->next;
		behind->next = recent;
		recent = behind;
		behind = tmpd;
	}
	*head = recent;

	return (*head);
}
