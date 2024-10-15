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
        printf(" Que souhaitez vous faire:\n Ajouter un autre nombre a la liste (1)\n Afficher la liste (2)\n Quitter le programme (3)\n Effacer l ecran (4)\n");
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
            if (croissant == NULL) 
            {
                printf("\nLa liste est vide!\n");
            } 
            else
            {
                sort_list(&croissant);
                printf("\nLa liste triée :\n");
                display_list(&croissant);
            }
        }
        else if (nombre == 3)
        {
            system ("clear");
        }
        else if (nombre == 4)
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