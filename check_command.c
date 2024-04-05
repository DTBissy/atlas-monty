#include "monty.h"
/**
 * check_command - Monty command validation
 * @command: The command
 * Return: Nada
 * Refer to calc.h and function pointers repo
*/
int check_command(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
  instruction_t ins_t[] = {
    {"pall", pall},
    {"push", push},
    {"pop", pop},
    {"pint", pint},
    {"nop", _nop},
    {"queue", queue},
    {"stack", astack},
    {"swap", swap},
    {NULL, NULL}
  };
  unsigned int i = 0;
  char *op;

  op = strtok(content, " \n\t");
  if (op && op[0] == '#')
  return (0);
  args.arg = strtok(NULL, " \n\t");
  while (ins_t[i].opcode && op)
  {
    if (strcmp(op, ins_t[i].opcode) == 0)
    {
      ins_t[i].f(stack, counter);
      return (0);
    }
    i++;
  }
  if (op && ins_t[i].opcode == NULL)
  {
    fprintf(stderr, "L%d: unknown instructions %s\n", counter, op);
    fclose(file);
    free(content);
    free_stack(*stack);
    exit(EXIT_FAILURE);
  }
  return (1);
}