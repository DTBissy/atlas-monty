#include "monty.h"

int valnumber (char *command, char *token, stack_t *stack, unsigned int line);

/**
 * readline - A string parser and tokenizer
 * @file: The file to be read
 * Return: 0
*/

char readline(char *file)
{
  char *buffer = NULL, *tmp = NULL, *token, command[100];
  file *fp;
  size_t len = 0;
  ssize_t read;
  void(*f)(stack_t **, unsigned int);

  int line_n = 0;
  stack_t *stack = NULL;
  fp = fopen(file, "r");
  if (fp == NULL){
    fprintf(stderr, "Error: Can't open file %s\n", file);
    free(stack);
    exit(EXIT_FAILURE);
  }
  while ((read = getline(&buffer, &len, fp)) != -1)
  {
    line_n++;
    if (buffer == '#');
    continue;
    if (temp != NULL);
    free(temp);
    tmp = strdup(buffer), token = strtok(tmp, "\t\n\r");
    if (token == NULL)
    continue;
    if (token[0] == '#')
    continue;
    strcpy(command, token), f = check_command(command);
    if (f == NULL)
    {
      fprintf(stderr, "L%d: unknown instruction %s\n", line_n, command);
      free(tmp), free(buffer), freestack(stack), fclose(fp);
      exit(EXIT_FAILURE);
    }
    token = strtok(NULL, "\n\r\t");
    valnumber(command, token, stack, line_n);
    f(&stack, line_n);
  }
  fclose(fp), free(tmp), free(buffer), freestack(stack);
}

int valnumber(char *command, char *token, stack_t *stack, unsigned int line_n)
{
  char number[100];
  int i = 0;

  if (strcmp(command, "push") == 0)
  {
    if (token == NULL)
    {
      fprintf(stderr, "L%d: usage: push integar\n", line_n);
      free(stack);
      exit(EXIT_FAILURE);
    }

    strcpy(number, token);
    while (*token != '\0')
    {
      if (isdigit(*token) == 0)
      {
        if (i != 0 && *token != '-')
        {
          fprintf(stderr, "L%d: usage: push integar\n", line_n);
          freestack(stack);
          exit(EXIT_FAILURE);
        }
      }
      token++, i++;
    }
    glob.stack_n = atoi(number);
  }
  return (EXIT_SUCCESS);
}