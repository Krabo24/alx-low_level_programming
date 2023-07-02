#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - function to return string length
* @s : s for the character
* Return: value equals to i
*/

int _strlen(const char *s)

{
   int i = 0;

   while (s[i] != '\0')
   {
       i++;
   }
   return (i);
}

/**
* add_node - add new node at beginning of list_t list
* @head: head at list_t list
* @str: value inserted element
* Return: number of nodes
*/

list_t *add_node(list_t **head, const char *str)

{
   list_t *add;

   add = malloc(sizeof(list_t));
   if (add == NULL)
       return (NULL);
   add->str = strdup(str);

   add->len = _strlen(str);
   add->next = *head;
   *head = add;

   return (add);
}
