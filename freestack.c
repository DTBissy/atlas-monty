#include "monty.h"

/**
 * freestack - Frees the stack(or queue)
 * @stack: Stack being freed
 * Return: Nothing void
*/
void freestack(stack_t *stack)
{
  stack_t *node = stack;

  while (stack != NULL)
  {
    node = stack;
    stack = stack->next;
    free(stack);
  }
}