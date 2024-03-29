#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	StackNode *top = NULL;

	push(&top, 1, __LINE__);
	push(&top, 2, __LINE__);
	push(&top, 3, __LINE__);

	pintt(top);

	pall(top);

	return (0);
}
