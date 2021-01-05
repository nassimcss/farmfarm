#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include <gtk/gtk.h>


typedef struct
{
char jour[5],mois[5],anne[7];

}date;

struct calendrier
{
   char saison[20],arrosage[20],typedeplant[20],irrigation[20],production[20],jour[5],mois[5],anne[7],pd[12],pr[12];
   date d;
};
typedef struct calendrier calendrier;

void ajouter(calendrier c);
void modifier(char typedeplant45[],calendrier s);
void supprimer(char typedeplantsupp[]);
calendrier chercher(char typedeplantch[]);
void afficher(GtkWidget *liste);
void afficherch(GtkWidget *liste,calendrier ch);
int verif(char typedeplantver[]);
void enregistrer_absence(calendrier o);
void anneeaffiche(GtkWidget *liste);
#endif
