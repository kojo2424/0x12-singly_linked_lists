#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - shows numbers of elements of a line
 * @h: a linked list
 * Return: the number
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
