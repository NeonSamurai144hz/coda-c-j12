#include "struct.h"

number *create_list(int value)
{
	number *list = malloc(sizeof(*list));
	list->next = NULL;
	list->value = value;

	return list;
}

void add_to_list(number **list, int value)
{
	number *tmp = *list;

	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	number *item = malloc(sizeof(*item));
	item->next = NULL;
	item->value = value;
	tmp->next = item;
}

void insert_after(number **link, int value)
{
	number *tmp = *link;
	number *item = malloc(sizeof(*item));
	item->next = tmp->next;
	item->value = value;
	tmp->next = item;
}

void display_list(number **list)
{
	number *tmp = *list;

	printf("\nLa liste : \n\n");
	while(tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}

void delete_list(number **list)
{
	number *tmp = *list;

	while(tmp != NULL)
	{
		number *to_remove = tmp;
		tmp = tmp->next;
		free(to_remove);
	}
}

void sort_list(number **list)
{
    int swapped;
    number *ptr1;
    number *lptr = NULL;

    if (*list == NULL)
    {
        return;
    }

    do 
    {
        swapped = 0;
        ptr1 = *list;

        while (ptr1->next != lptr)
        {
            if (ptr1->value > ptr1->next->value)
            {
                int temp = ptr1->value;
                ptr1->value = ptr1->next->value;
                ptr1->next->value = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}