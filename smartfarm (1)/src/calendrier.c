#include "calendrier.h"
#include <stdio.h>
#include <gtk/gtk.h>
#include <string.h>
enum
 {
  ESAISON,
  EARROSAGE,
  ETYPEDEPLANT,
  EIRRIGATION,
  EPRODUCTION,
  COLUMNS,
  };

void ajouter(calendrier c)
{
   
    FILE *fc=NULL;
    fc=fopen("infcalendriers.txt","a+");
   
    fprintf(fc,"%s %s %s %s %s\n",c.saison,c.arrosage,c.typedeplant,c.irrigation,c.production);
fclose(fc);

}
void modifier(char typedeplant45[],calendrier s)
{
  FILE *f;
    FILE *ftemp;
    ftemp=NULL;
    calendrier c;
   
    f=fopen("infcalendriers.txt","r+");
    ftemp=fopen("infcalendriers.txt.temp","a+");
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s\n",c.saison,c.arrosage,c.typedeplant,c.irrigation,c.production)!=EOF)
        {
            if(strcmp(typedeplant45,c.typedeplant)==0)
            {
      strcpy(c.typedeplant,s.typedeplant);
      strcpy(c.arrosage,s.arrosage);
      strcpy(c.saison,s.saison);
                       strcpy(c.irrigation,s.irrigation);
                       strcpy(c.production,s.production);
                  
            }
            fprintf(ftemp,"%s %s %s %s %s\n",c.saison,c.arrosage,c.typedeplant,c.irrigation,c.production);
        }

    }
    fclose(ftemp);
    fclose(f);
    remove("infcalendriers.txt");
    rename("infcalendriers.txt.temp","infcalendriers.txt");
}

void supprimer(char typedeplantsupp[])
{
    FILE *f;
    FILE *ftemp;
    ftemp=NULL;
    f=NULL;
    calendrier c;
    char typedeplant0[20];
    strcpy(typedeplant0,"sSs");
   
    f=fopen("infcalendriers.txt","r+");
    ftemp=fopen("infcalendriers.txt.temp","a+");
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s\n",c.saison,c.arrosage,c.typedeplant,c.irrigation,c.production)!=EOF)
        {
            if(strcmp(typedeplantsupp,c.typedeplant)==0)
            {
                strcpy(c.typedeplant,typedeplant0);
     
            }
            if(strcmp(typedeplant0,c.typedeplant)!=0)
               {
                 fprintf(ftemp,"%s %s %s %s %s\n",c.saison,c.arrosage,c.typedeplant,c.irrigation,c.production);
               }
         }
    }
    fclose(ftemp);
    fclose(f);
    remove("infcalendriers.txt");
    rename("infcalendriers.txt.temp","infcalendriers.txt");
}


calendrier chercher(char typedeplantch[])
{
  FILE *f;
   
    calendrier c;
   
   
    f=fopen("infcalendriers.txt","a+");
   
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s\n",c.saison,c.arrosage,c.typedeplant,c.irrigation,c.production)!=EOF)
        {
            if(strcmp(typedeplantch,c.typedeplant)==0)
            {
     return c;
            }
         
        }

    }
   
    fclose(f);
   
}

void afficher(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char saison[20];
char arrosage[20];
char typedeplant[20];
char irrigation[20];
char production[20];
store=NULL;


FILE *f;

store=gtk_tree_view_get_model(liste);


if(store==NULL)
{
renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Saison",renderer, "text",ESAISON,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Arrosage",renderer, "text",EARROSAGE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("typedeplant",renderer, "text",ETYPEDEPLANT,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("irrigation",renderer, "text",EIRRIGATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("production",renderer,"text",EPRODUCTION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
}
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f = fopen("infcalendriers.txt","r");
if(f==NULL)
{
  return;
}
else
{
 f=fopen("infcalendriers.txt","a+");
while(fscanf(f,"%s %s %s %s %s\n",saison,arrosage,typedeplant,irrigation,production)!=EOF)
  {
    gtk_list_store_append (store,&iter);
gtk_list_store_set(store,&iter,ESAISON,saison,EARROSAGE,arrosage,ETYPEDEPLANT,typedeplant,EIRRIGATION,irrigation,EPRODUCTION,production, -1);
}
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}

}



void afficherch(GtkWidget *liste,calendrier ch)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char saison[20];
char arrosage[20];
char typedeplant[20];
char irrigation[20];
char production[20];
store=NULL;


FILE *f;

store=gtk_tree_view_get_model(liste);


if(store==NULL)
{
renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Saison",renderer, "text",ESAISON,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Arrosage",renderer, "text",EARROSAGE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("typedeplant",renderer, "text",ETYPEDEPLANT,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("irrigation",renderer, "text",EIRRIGATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("production",renderer, "text",EPRODUCTION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

}
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f = fopen("infcalendriers.txt","r");
if(f==NULL)
{
  return;
}
else
{
 f=fopen("infcalendriers.txt","a+");
while(fscanf(f,"%s %s %s %s %s\n",saison,arrosage,typedeplant,irrigation,production)!=EOF)
  { if (strcmp(ch.typedeplant,typedeplant)==0)
     {
    gtk_list_store_append (store,&iter);
gtk_list_store_set(store,&iter,ESAISON,saison,EARROSAGE,arrosage,ETYPEDEPLANT,typedeplant,EIRRIGATION,irrigation,EPRODUCTION,production, -1);
     }
  }
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}

}
int verif(char typedeplantver[])
{
  int x=0;

  FILE *f;
   
    calendrier c;
   
   
    f=fopen("infcalendriers.txt","r+");
   
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s\n",c.saison,c.arrosage,c.typedeplant,c.irrigation,c.production)!=EOF)
        {
            if(strcmp(typedeplantver,c.typedeplant)==0)
              {
                      x=2;
     return x;
              }
                   

        }

    }
   
    fclose(f);
 return x;

}

void enregistrer_absence(calendrier o)
{
FILE *f;
f=fopen("absence.txt","a+");
if (f!=NULL)
{
fprintf(f,"%s %s %s %s %s\n",o.d.jour,o.d.mois,o.d.anne,o.pd,o.pr);
}
fclose(f);
}


void anneeaffiche(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char saison[20];
char arrosage[20];
char typedeplant[20];
char irrigation[20];
char production[20];


store=NULL;


FILE *f;

store=gtk_tree_view_get_model(liste);


if(store==NULL)
{
renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Jour",renderer, "text",ESAISON,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Mois",renderer, "text",EARROSAGE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Anne",renderer, "text",ETYPEDEPLANT,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Production",renderer, "text",EIRRIGATION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

/*renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Precipitation",renderer, "text",EPRODUCTION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);*/

}
store=gtk_list_store_new(4,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f = fopen("absence.txt","r");
if(f==NULL)
{
  return;
}
else
{
 f=fopen("absence.txt","a+");
while(fscanf(f,"%s %s %s %s\n",saison,arrosage,typedeplant,irrigation)!=EOF)
  {
     
    gtk_list_store_append (store,&iter);
gtk_list_store_set(store,&iter,ESAISON,saison,EARROSAGE,arrosage,ETYPEDEPLANT,typedeplant,EIRRIGATION,irrigation,-1);
     
  }
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}

}






