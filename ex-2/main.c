#include "struct.h"


int main()
{
    int fin = 0; 
    printf("Veuillez le premier nombre de la liste: \n");
    int value;
    scanf("%d", &value);
    number *croissant = NULL;
    croissant = create_list(value);

    while(fin != 1)
    {
        printf(" Que souhaitez vous faire:\n Ajouter un autre nombre a la liste (1)\n Afficher la liste (2)\n Afficher un nombre juste apres un autre (3)\n Quitter le programme (4)\n Effacer l ecran (5)\n");
        int nombre;
        scanf("%d", &nombre); 

        if (nombre == 1)
        {
            printf("Veuillez saisir un nombre\n");
            int value2;
            scanf("%d", &value2);
            add_to_list(&croissant, value2); 
            
        }
        else if (nombre == 2)
        {
          display_list(&croissant); 
        }
        else if (nombre == 3)
        {
            
            printf("choissisez un nombre a inserer: \n");
            int add;
            scanf("%d", &add);
            printf("Vous voulez l inserer avant: ");
            int where;
            int * p_where = malloc(sizeof(*p_where));
            p_where = &where;
            scanf("%d", p_where);

            number *list;
	        list = create_list(nombre);

	        display_list(&list);

	        number *tmp = list;
	        number *link;

	        while(tmp != NULL)
	        {
		        if(tmp->value == where)
		        {
			        link = tmp;
		        }

		    tmp = tmp->next;
	        }

	        printf("Ajouter le nombre %d juste après %d\n",add ,where );

	        insert_after(&link, add);

	        display_list(&list);

        }
        else if (nombre == 4)
        {
            system ("clear");
        }
        else if (nombre == 5)
        {
            fin = 1; 
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