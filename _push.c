#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
  stack_t *node;
  stack_t *tail;

  (void) line_number;
  node = malloc(sizeof(stack_t));
  if (!node)
  {
    fprintf(stderr, "Error: malloc failed\n");
    freestack(*stack);
    exit(EXIT_FAILURE);
  }

  if (glob.stack_mode == PUSH_STACK || !*stack)
  {
    node->next = *stack;
    node->prev = NULL;
    node->n = glob.stack_n;
    *stack = node;
  }
  else if (glob.stack_mode == PUSH_QUEUE)
  {
    tail = *stack;
    while (tail->next)
    {
      tail = tail->next;
    }
    node->next = NULL;
    node->prev = tail;
    node->n = glob.stack_n;
    tail->next = node;
  }
}

void _push(stack_t **stack, unsigned int line_number)
{
  stack_t *node;

  (void) line_number;
  node = malloc(sizeof(stack_t));
  if (!node)
  {
    fprintf(stderr, "Error: malloc failed\n");
    freestack(*stack);
    exit(EXIT_FAILURE);
  }

  node->next = *stack;
  node->prev = NULL;
  node->n = glob.stack_n;
  *stack = node;
}