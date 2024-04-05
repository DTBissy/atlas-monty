#include "monty.h"

/**
 * free_stack - Frees the stack(or queue)
 * @stack: Stack being freed
 * Return: Nothing void
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
