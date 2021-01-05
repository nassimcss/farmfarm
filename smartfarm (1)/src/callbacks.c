#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "calendrier.h"
char typedeplant45[20],typedeplantsupp[20],typedeplantch[20];
calendrier c;

calendrier s;





void
on_buttonajouti_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
 GtkWidget *saison1,*arrosage1,*typedeplant1,*irrigation1,*production1;
    char saison[20],arrosage[20],typedeplant[20],irrigation[20],production[20];
   
    
   

    saison1 = lookup_widget(button, "entrysaison") ;
    strcpy(c.saison,gtk_entry_get_text(GTK_ENTRY(saison1)));

    arrosage1 = lookup_widget(button, "entryarrosage") ;
    strcpy(c.arrosage,gtk_entry_get_text(GTK_ENTRY(arrosage1)));

    typedeplant1 = lookup_widget(button, "entrytypedeplant1") ;
    strcpy(c.typedeplant,gtk_entry_get_text(GTK_ENTRY(typedeplant1)));
   

    irrigation1 = lookup_widget(button, "entryirrigation") ;
    strcpy(c.irrigation,gtk_entry_get_text(GTK_ENTRY(irrigation1)));
   

    production1 = lookup_widget(button, "entryproduction1") ;
    strcpy(c.production,gtk_entry_get_text(GTK_ENTRY(production1)));
 


 ajouter(c);

}


void
on_buttoninfoi_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *saison1,*saison2,*arrosage1,*arrosage2,*irrigation1,*irrigation2,*checktypedeplant1,*typedeplant1,*typedeplant2,*production1,*production2,*checkctypedeplant1,*checkirrigation1,*typedeplantcheck1;
  GtkWidget *window3 ;
  int x=0;
  
  typedeplantcheck1 = lookup_widget(button, "labelChecktypedeplantModif2") ;
  gtk_label_set_text(GTK_LABEL(typedeplantcheck1),"");
  
  typedeplant2 = lookup_widget(button, "entrytypedeplant5") ;
  strcpy(typedeplant45,gtk_entry_get_text(GTK_ENTRY(typedeplant2)));
  
x=verif(typedeplant45);
 if(x==2)
   {
      
    c=chercher(typedeplant45);
    
    saison1 = lookup_widget(button, "entrysaison1") ;
    gtk_entry_set_text(GTK_ENTRY(saison1),c.saison);

    arrosage1 = lookup_widget(button, "entryarrosage1") ;
    gtk_entry_set_text(GTK_ENTRY(arrosage1),c.arrosage);


    typedeplant1 = lookup_widget(button, "entrytypedeplant2") ;
    gtk_entry_set_text(GTK_ENTRY(typedeplant1),c.typedeplant);

   
    irrigation1 = lookup_widget(button, "entryirrigation1") ;
    gtk_entry_set_text(GTK_ENTRY(irrigation1),c.irrigation);

    production1 = lookup_widget(button, "entryproduction") ;
    gtk_entry_set_text(GTK_ENTRY(production1),c.production);


   

    checktypedeplant1 = lookup_widget(button, "labelChecktypedeplantModif") ;
    checkirrigation1 = lookup_widget(button, "labelCheckirrigationModif") ;
    saison2 = lookup_widget(button, "labelCheckSaisonModif") ;
    arrosage2 = lookup_widget(button, "labelCheckArrosageModif") ;

    production2 = lookup_widget(button, "labelCheckProductionModif") ;
    
    gtk_label_set_text(GTK_LABEL(saison2)," ");
    gtk_label_set_text(GTK_LABEL(production2)," ");
    
   
    gtk_label_set_text(GTK_LABEL(arrosage2)," ");
    gtk_label_set_text(GTK_LABEL(checktypedeplant1)," ");
    gtk_label_set_text(GTK_LABEL(checkirrigation1)," ");
    
   }
  else
   {
     typedeplantcheck1 = lookup_widget(button, "labelChecktypedeplantModif2") ;
     gtk_label_set_text(GTK_LABEL(typedeplantcheck1),"typedeplant INEXISTANT");
   }
 

}


void
on_buttonsupprimeri_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *typedeplant2;

  typedeplant2 = lookup_widget(button, "entrytypedeplantsupp") ;
  strcpy(typedeplantsupp,gtk_entry_get_text(GTK_ENTRY(typedeplant2)));
 
  supprimer(typedeplantsupp);

}


void
on_buttonchercheri_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
  GtkWidget *typedeplant2;
  calendrier ch;
 
  typedeplant2 = lookup_widget(button, "entrytypedeplant") ;
  strcpy(typedeplantch,gtk_entry_get_text(GTK_ENTRY(typedeplant2)));
  ch=chercher(typedeplantch);

 
 treeview1 = lookup_widget(button, "treeview2") ;
 
  afficherch(treeview1,ch);

}


void
on_buttonconfirmeri_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *pd1,*pr1,*jour1,*mois1,*annee1;

calendrier o;


jour1=lookup_widget(button,"comboboxentryjour3");
mois1=lookup_widget(button,"comboboxentrymois3");
annee1=lookup_widget(button,"comboboxentryannee3");
pr1=lookup_widget(button,"productiona");
/*pr1=lookup_widget(button,"precipitation");*/

gchar *anne=gtk_combo_box_get_active_text(annee1);
gchar *mois=gtk_combo_box_get_active_text(mois1);
gchar *jour=gtk_combo_box_get_active_text(jour1);
strcpy(o.d.jour,jour);
strcpy(o.d.mois,mois);
strcpy(o.d.anne,anne);
strcpy(o.pd,gtk_entry_get_text(GTK_ENTRY(pr1)));
/*strcpy(o.pr,gtk_entry_get_text(GTK_ENTRY(pr1)));*/

enregistrer_absence(o);
}


void
on_buttonaffichsupp_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
  treeview1 = lookup_widget(button, "treeview1") ;
 
  afficher(treeview1);

}


void
on_buttonmodifieri_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *saison1,*arrosage1,*typedeplant1,*irrigation1,*production1;
    char saison[20],arrosage[20],typedeplant[20],irrigation[20],production[20];
   
 
   
    saison1 = lookup_widget(button, "entrysaison1") ;
    strcpy(s.saison,gtk_entry_get_text(GTK_ENTRY(saison1)));

    arrosage1 = lookup_widget(button, "entryarrosage1") ;
    strcpy(s.arrosage,gtk_entry_get_text(GTK_ENTRY(arrosage1)));

    typedeplant1 = lookup_widget(button, "entrytypedeplant") ;
    strcpy(s.typedeplant,gtk_entry_get_text(GTK_ENTRY(typedeplant1)));
    

    irrigation1 = lookup_widget(button, "entryirrigation1") ;
    strcpy(s.irrigation,gtk_entry_get_text(GTK_ENTRY(irrigation1)));
    

    production1 = lookup_widget(button, "entryproduction") ;
    strcpy(s.production,gtk_entry_get_text(GTK_ENTRY(production1)));

    

  
    modifier(typedeplant45,s);

}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
  gchar* saison;
  gchar* arrosage;
  gchar* typedeplant;
  gchar* irrigation;
  gchar* production;

 



   GtkTreeModel *model = gtk_tree_view_get_model(treeview);
   if(gtk_tree_model_get_iter(model, &iter, path))
     {
         gtk_tree_model_get (GTK_LIST_STORE(model),&iter,0,&saison,1,&arrosage,2,&typedeplant,3,&irrigation,4,production,-1);
  
     
                       
                       supprimer(typedeplant);
                       afficher(treeview);


}

}
void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_buttonAffichecherch_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview2;
  treeview2 = lookup_widget(button, "treeview2") ;
 
  afficher(treeview2);
}


/*void
on_buttonnassimaffiche_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview3;
treeview3 = lookup_widget(button,"treeview3");
nassimaffiche(treeview3);
}*/


void
on_anneeaffiche_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview3;
treeview3 = lookup_widget(button,"treeview3");
anneeaffiche(treeview3);
}


void
on_treeview3_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}

