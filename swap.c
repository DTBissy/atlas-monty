#include "monty.h"

void swap(stack_t **head, unsigned int counter)
{
  stack_t *h;
  int len = 0, aux;

  h = *head;
  while (h)
  {
    h = h->next;
    len++;
  }
  if (len < 2)
  {
    fprintf(stderr, "L%d: Can't swap, stack to short\n", counter);
    fclose(args.file);
    free(args.content);
    free_stack(*head);
    exit(EXIT_FAILURE);
  }
  h = *head;
  aux = h->n;
  h->n = h->next->n;
  h->next->n = aux;
}