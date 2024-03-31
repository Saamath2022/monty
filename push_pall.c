#include <stdio.h>
#include <stdlib.h>
/**
 * push - Function to push an element onto the stack
 * @top: Pointer to the top of the stack
 * @data: Integer data to be pushed onto the stack
 * @line_number: Line number in the file where push is called
 */
void push(StackNode **top, int data, unsigned int line_number)
{
	StackNode *new_node = (StackNode *)malloc(sizeof(StackNode));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->data = data;
	new_node->next = *top;
	*top = new_node;
}

/**
 * pall - Function to print all elements of the stack
 * @top: Pointer to the top of the stack
 */
void pall(StackNode *top)
{
	StackNode *current = top;

	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}
