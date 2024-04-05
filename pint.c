#include "monty.h"

void pint(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{fprintf(stderr, "L%u: Can't pint, stack empty\n", counter);
  fclose(args.file);
  free(args.content);
  free_stack(*head);
  exit(EXIT_FAILURE);}
printf("%d\n", (*head)->n);
}