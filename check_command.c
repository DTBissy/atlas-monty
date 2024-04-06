#include "monty.h"
/**
 * check_command - Monty command validation
 * @command: The command
 * Return: Nada
 * Refer to calc.h and function pointers repo
 */
int check_command(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
  instruction_t inst[] = {
      {"pall", pall},
      {"push", push},
      {"pint", pint}, {"pop", pop}, {"nop", _nop}, {"queue", queue}, {"stack", astack}, {"swap", swap}, {"pchar", pchar},
      /* {"pstr", pstr},*/
      {NULL, NULL}};
  unsigned int i = 0;
  char *op;

  op = strtok(content, " \n\t");
  if (op && op[0] == '#')
    return (0);
  sas.arg = strtok(NULL, " \n\t");
  while (inst[i].opcode && op)
  {
    if (strcmp(op, inst[i].opcode) == 0)
    {
      inst[i].f(stack, counter);
      return (0);
    }
    i++;
  }
  if (op && inst[i].opcode == NULL)
  {
    fprintf(stderr, "L%d: unknown instructions %s\n", counter, op);
    fclose(file);
    free(content);
    free_stack(*stack);
    exit(EXIT_FAILURE);
  }
  return (1);
}