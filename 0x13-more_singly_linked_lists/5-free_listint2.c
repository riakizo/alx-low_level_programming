#include "lists.h"
/**
* free_listint2 - frees a listint_t list.
* @head: double pointer to head of list.
*/
void free_listint2(listint_t **head)
{
listint_t *recent;
listint_t *tmp;

if (!head)
return;
recent = *head;
while (recent)
{
tmp = recent;
recent = tmp->next;
free(tmp);
}
*head = NULL;
head = NULL;
}
