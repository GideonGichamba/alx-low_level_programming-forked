#ifndef _LISTS_H
#define _LISTS_H

#include<stdio.h>
#include<stddef.h>

/**
 * struct dlistint_t - doubly linked lists
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 * Description - Doubly linked lists node structure
 * 
 */
typedef struct dlistint_t 
{
    int n;
    struct dlistint_t *prev;
    struct dlistint_s *next;
}dlistint_t ;


#endif