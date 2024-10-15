#include "struct.h"

number *create_list(int value)
            {  
	            number *first = malloc(sizeof(*first));
	            first->value = value;
	            first->next = NULL;

	            return first;
            }

void add_to_list(number **first, int value)
{
	number *tmp = *first;

	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	number *item = malloc(sizeof(*item));
	item->next = NULL;
	item->value = value;
	tmp->next = item;
}

void display_list(number **first)
{
	number *tmp = *first;

	while(tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}

void delete_list(number **first)
{
	number *tmp = *first;

	while(tmp != NULL)
	{
		number *to_remove = tmp;
		tmp = tmp->next;
		free(to_remove);
	}
}

void insert_after(number **link, int value)
{
    number *tmp = *link;
    number *item = malloc(sizeof(*item));  
    item->next = tmp->next;
    item->value = value;
    tmp->next = item;
}