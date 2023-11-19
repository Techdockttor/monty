#include "monty.h"


/**
* free_stack -  doubly linked list free
* @head: the stack head
*/

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
