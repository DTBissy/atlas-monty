#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

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
typedef struct sas_s
{
  char *arg;
  FILE *file;
  char *content;
  int lifi;
} sas_t;

extern sas_t sas;
typedef struct instruction_s
{
  char *opcode;
  void (*f)(stack_t **stack, unsigned int line_number);
}instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);
void pall(stack_t **head, unsigned int number);
void push(stack_t **head, unsigned int number);
void pint(stack_t **head, unsigned int number);
int check_command(char *content, stack_t ** head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void pop(stack_t **head, unsigned int counter);
void swap(stack_t **head, unsigned int counter);
void pchar(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void queue(stack_t **head, unsigned int counter);
void astack(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);

void _nop(stack_t **head, unsigned int counter);
#endif