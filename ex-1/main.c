#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

number *create_list(int value)
            {  
	            number *first = malloc(sizeof(*first));
	            first->value = value;
	            first->next = NULL;

	            return first;
            }

  void add_to_end(number **list, int a)
{
	number *tmp = *list;

	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	number *item = malloc(sizeof(*item));
	item->value = a;
	item->next = NULL;

	tmp->next = item;
}

void display_list(number **list)
{
	number *tmp = *list;

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

int main()
{
    int fin = 0; 
    printf("Veuillez saisir un premier nombre\n");
    int value;
    scanf("%d", &value);
    number *croissant = NULL;
    croissant = create_list(value);

    while(fin != 1)
    {
        printf(" Que souhaitez vous faire:\n Ajouter un nombre (1)\n Afficher la liste (2)\n Quitter le programme (3)\n Effacer l ecran (4)\n");
        int nombre;
        scanf("%d", &nombre); 

        if (nombre == 1)
        {
            printf("Veuillez saisir un nombre\n");
            int value2;
            scanf("%d", &value2);
            add_to_end(&croissant, value2); 
            
        }
        else if (nombre == 2)
        {
          display_list(&croissant); 
        }
        else if (nombre == 3)
        {
            fin = 1; 
        }
        else if (nombre == 4)
        {
            system ("clear");
        }
        else 
        {
            printf("L operation n est pas reconnue.");
            
            return 1;
        }
    }

    delete_list(&croissant); 
return 0; 
}