#include "monty.h"

void push(stack_t **head, unsigned int counter)
{
int n, j = 0, flag = 0;

if (args.arg)
{
  if (args.arg[0] == '-')
  j++;
  for (; args.arg[j] != '\0'; j++)
  {
    if (args.arg[j] > 57 || args.arg[j] < 48)
    flag = 1; }
    if (flag == 1)
    {
      fprintf(stderr, "L%d: usage: push integar\n", counter);
      fclose(args.file);
      free(args.content);
      free_stack(*head);
      exit(EXIT_FAILURE); }
    }
    else
    {
      fprintf(stderr, "L%d: usage: push integar\n", counter);
      fclose(args.file);
      free(args.content);
      free_stack(*head);
      exit(EXIT_FAILURE);
    }
    n = atoi(args.arg);
    if (args.lifi == 0)
    addnode(head, n);
    else
    addqueue(head, n);
}