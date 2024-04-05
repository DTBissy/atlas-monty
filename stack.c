#include "monty.h"

void astack(stack_t **head, unsigned int counter)
{
  (void) head;
  (void) counter;
  args.lifi = 0;
}

void addnode(stack_t **head, int n)
{
  stack_t *aux = *head;
  stack_t *new_node = malloc(sizeof(stack_t));

  if (new_node == NULL)
  {
    printf("Error\n");
    exit(0);
  }
  if (aux)
  {
    aux->prev = new_node;
    new_node->n = n;
    new_node->next = *head;
    new_node->prev = NULL;
  }
}