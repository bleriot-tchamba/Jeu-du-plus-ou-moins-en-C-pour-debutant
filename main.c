#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("  BIENVENUE DANS NOTRE JEUX DE ''deviner le nombre secret''!\n\n");
     const int min=1;
     int max=0;
     int nombresecret;
     int nombreutilisateur;
     int essai;
     int rejouer;
     int niveau;

     srand(time(NULL));
     printf("  1= Nombre secret compris entre 1 et 100\n");
     printf("  2= Nombre secret compris entre 1 et 1000\n");
     printf("  3= Nombre secret compris entre 1 et 10000\n\n");
     printf("  Veuillez entrer le nombre correspondant au niveau de difficulte que vous voulez affronter:");

     scanf("%d",&niveau);
    do{
            switch(niveau)
            {
            case 1:
                max=100;
                break;
            case 2:
                max=1000;
                break;
            case 3:
                max=10000;
                break;
            default:
             do
       {
         printf("Erreur!! vous avez entre un mauvais nombre\n");
         printf("Veuillez reessayer:");
         scanf("%d",&niveau);
       }while(niveau!=1&&niveau!=2&&niveau!=3);
       break;
            }
     }while(max==0);
     printf("  Quel est le nombre secret? ");
     do
   {
            nombresecret=(rand()%(max-1+1))+1;
            essai=0;



     do
     {
         scanf("%d",&nombreutilisateur);
              essai++;


         if(nombresecret>nombreutilisateur)
            {
                printf("C'est plus ");
            }
         else if(nombresecret<nombreutilisateur)
         {
             printf("C'est moins ");
         }
         else
         {
             printf("Bravo,vous avez trouve le nombre secret apres %d essais\n",essai);

         }

     }while(nombresecret!=nombreutilisateur);

     printf("voulez-vous rejouer? 1 pour OUI ou 2 pour NON:");
     scanf("%d",&rejouer);
     switch(rejouer)
     {
     case 1:
                  printf("entrez de nouveau le nombre");
                  break;
     case 2:
                 printf("vous avez bien joue et vous etes maintenant fatigue");
                 break;
     default:
         do
         {
            printf("Erreur!! Vous avez choisi un mauvais nombre\n");
          printf("Veuillez reessayer:");
          scanf("%d",&rejouer);
         }while(rejouer!=1&&rejouer!=2);
        printf("Entrez de nouveau le nombre:");




    }

   }while(rejouer==1);


    return 0;
}

