#include "monty.h"
/**
 * check_command - Monty command validation
 * @command: The command
 * Return: Nada
 * Refer to calc.h and function pointers repo
*/
void(*check_command(char *command))(stack_t **, unsigned int)
{
  instruction_t ins_t[] = {
    {"pall", pall}
  };
  unsigned int i;

  for (i = 0; i < sizeof(ins_t) / sizeof(instruction_t); i++)
  {
    if (strcmp(command, ins_t[i].opcode)== 0)
    {
      return (ins_t[i].f);
    }
  }
  return (NULL);
}