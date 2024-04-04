#ifndef HOLBERTON_FIFO_LIFO
#define HOLBERTON_FIFO_LIFO

#define PUSH_STACK 0
#define PUSH_QUEUE 1

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

typedef struct global
{
  int stack_n;
  int stack_mode;
}global;
extern global glob;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integar
 * @prev: Points to the previous element of the stack
 * @next: Pointd to the next element of the stack
 *
 * Description: doubly linked lists node structure
 * for stack, queue, LIFO, FIFO
*/
typedef struct stack_s
{
  int n;
  struct stack_s *prev;
  struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *Function Pointer heavy
 * Description: opcode and its function
 * for stack, queue, LIFO, FIFO
*/
typedef struct instruction_s
{
  char *opcode;
  void (*f)(stack_t **stack, unsigned int line_number);
}instruction_t;


void pall(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void freestack(stack_t *stack);
void(*check_command(char *command))(stack_t **, unsigned int);
void readline(char *file);
int valnumber(char *command, char *token, stack_t *stack, unsigned int line_n);
void lineNum(char *number);
#endif