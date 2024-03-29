#ifndef MONTY_H
#define MONTY_H

/**
 * struct stack_node - Structure representing a node in the stack
 * @data: Integer data stored in the node
 * @next: Pointer to the next node in the stack
 */
typedef struct stack_node
{
	int data;
	struct stack_note *next;
} StackNode;

void push(StackNode **top, int data, unsigned int line_number);
void pall(StackNode *top);
void pint(stackNode *top);

#endif /* MONTY_H */
