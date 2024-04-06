#include "monty.h"

void push(stack_t **head, unsigned int counter)
{
  int n, j = 0, flag = 0;

  if (sas.arg)
  {
    if (sas.arg[0] == '-')
      j++;
    for (; sas.arg[j] != '\0'; j++)
    {
      if (sas.arg[j] > 57 || sas.arg[j] < 48)
        flag = 1;
    }
    if (flag == 1)
    {
      fprintf(stderr, "L%d: usage: push integar\n", counter);
      fclose(sas.file);
      free(sas.content);
      free_stack(*head);
      exit(EXIT_FAILURE);
    }
  }
  else
  {
    fprintf(stderr, "L%d: usage: push integar\n", counter);
    fclose(sas.file);
    free(sas.content);
    free_stack(*head);
    exit(EXIT_FAILURE);
  }
  n = atoi(sas.arg);
  if (sas.lifi == 0)
    addnode(head, n);
  else
    addqueue(head, n);
}