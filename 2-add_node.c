#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds a new node
 * @head: the original linked
 * @str: the string to add to the node
 * Return: The address of the new list or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[length])
		length++;
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
