#include "monty.h"

void queue(stack_t **stack, unsigned int line_number)
{
  (void) stack;
  (void) line_number;

  glob.stack_mode = PUSH_QUEUE;
}