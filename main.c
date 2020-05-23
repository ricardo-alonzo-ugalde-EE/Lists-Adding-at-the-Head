#include <stdio.h>

void addHead(List* list, int value)
{
	ListNode* node =  malloc(sizeof(ListNode)); /* creates a new node. node pointer (ListNode* node) is in stack 
												the acual memonry that it points to (malloc(sizeof(listnode))
												is on the heap */
	node->data = value;
	node->next = list->head; /* not doing: we are not having node->next point to list->head
							 actually doing: whatever list->head points to, point node->next to the same thing*/
	list->head = node;
}