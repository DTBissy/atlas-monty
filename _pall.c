#include "monty.h"
#include <stdio.h>

/**
 * _pall - Prints all the values on the stack, starting on top
 * @stack_t: The stack with data
 * @line_number:
 * Return:
*/
void pall(stack_t **stack, unsigned int line_number)
{
  stack_t *node;

  (void)line_number;
  node = *stack;
  while(node != NULL)
  {
    printf ("%d\n", node->n);
    node = node->next;
  }
}