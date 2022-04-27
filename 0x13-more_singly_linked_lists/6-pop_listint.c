#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: head pointer
 * Return: return head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data;

	if ((*head) == NULL || head == NULL)
		return (0);

	temp = *head;
	if (*head != NULL)
	{
		*head = temp->next;
		data = temp->n;
		free(temp);
	}
	return (data);
}
