#include "monty.h"

void pall(stack_t **head, unsigned int counter)
{
  stack_t *h;
  (void)counter;

  h = *head;
  if (h == NULL)
    return;
  while (h)
  {
    printf("%d\n", h->n);
    h = h->next;
  }
}