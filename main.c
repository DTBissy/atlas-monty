#include "monty.h"

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    fprintf(stderr, "Usage: monty file\n");
    exit(EXIT_FAILURE);
  }

  glob.stack_n = 0;
  glob.stack_mode = PUSH_STACK;

  readline(argv[1]);
  return (EXIT_SUCCESS);
}