#include "monty.h"

void pchar(stack_t **head, unsigned int counter)
{
  stack_t *h;

  h = *head;
  if (!h)
  {
    fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
    fclose(sas.file);
    free(sas.content);
    free_stack(*head);
    exit(EXIT_FAILURE);
  }
  if (h->n > 127 || h->n < 0)
  {
    fprintf(stderr, "L%d: cant pchar, value out of range\n", counter);
    fclose(sas.file);
    free(sas.content);
    free_stack(*head);
    exit(EXIT_FAILURE);
  }
  printf("%c\n", h->n);
}