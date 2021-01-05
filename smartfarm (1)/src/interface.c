/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_Calendrier (void)
{
  GtkWidget *Calendrier;
  GtkWidget *Gestion_d_ouvrier_;
  GtkWidget *label19;
  GtkWidget *notebook1;
  GtkWidget *fixed5;
  GtkWidget *entrysaison;
  GtkWidget *entryarrosage;
  GtkWidget *entrytypedeplant1;
  GtkWidget *entryirrigation;
  GtkWidget *entryproduction1;
  GtkWidget *buttonajouti;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image11;
  GtkWidget *label26;
  GtkWidget *label24;
  GtkWidget *label23;
  GtkWidget *label21;
  GtkWidget *label22;
  GtkWidget *label20;
  GtkWidget *image10;
  GtkWidget *label25;
  GtkWidget *label14;
  GtkWidget *fixed10;
  GtkWidget *entrytypedeplant5;
  GtkWidget *entrysaison1;
  GtkWidget *entryarrosage1;
  GtkWidget *entryirrigation1;
  GtkWidget *entryproduction;
  GtkWidget *checkbuttonmodifieri;
  GtkWidget *entrytypedeplant2;
  GtkWidget *label40;
  GtkWidget *label41;
  GtkWidget *label56;
  GtkWidget *label42;
  GtkWidget *label43;
  GtkWidget *buttonmodifieri;
  GtkWidget *alignment15;
  GtkWidget *hbox15;
  GtkWidget *image17;
  GtkWidget *label45;
  GtkWidget *infoi;
  GtkWidget *labelCheckSaisonModif;
  GtkWidget *labelCheckArrosageModif;
  GtkWidget *labelCheckirrigationModif;
  GtkWidget *labelCheckProductionModif;
  GtkWidget *labelChecktypedeplantModif2;
  GtkWidget *labelChecktypedeplantModif;
  GtkWidget *buttoninfoi;
  GtkWidget *alignment14;
  GtkWidget *hbox14;
  GtkWidget *image16;
  GtkWidget *label44;
  GtkWidget *label39;
  GtkWidget *label15;
  GtkWidget *fixed7;
  GtkWidget *treeview1;
  GtkWidget *image12;
  GtkWidget *entrytypedeplantsupp;
  GtkWidget *buttonsupprimeri;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image13;
  GtkWidget *label33;
  GtkWidget *label55;
  GtkWidget *buttonaffichsupp;
  GtkWidget *alignment17;
  GtkWidget *hbox17;
  GtkWidget *image25;
  GtkWidget *label54;
  GtkWidget *label32;
  GtkWidget *label16;
  GtkWidget *fixed8;
  GtkWidget *infoi2;
  GtkWidget *treeview2;
  GtkWidget *entrytypedeplant;
  GtkWidget *buttonAffichecherch;
  GtkWidget *alignment18;
  GtkWidget *hbox18;
  GtkWidget *image26;
  GtkWidget *label57;
  GtkWidget *buttonchercheri;
  GtkWidget *alignment13;
  GtkWidget *hbox13;
  GtkWidget *image15;
  GtkWidget *label37;
  GtkWidget *label31;
  GtkWidget *image20;
  GtkWidget *label53;
  GtkWidget *label17;
  GtkWidget *fixed9;
  GtkWidget *image18;
  GtkWidget *label47;
  GtkWidget *label51;
  GtkWidget *label48;
  GtkWidget *label58;
  GtkWidget *label49;
  GtkWidget *productiona;
  GtkWidget *buttonconfirmeri;
  GtkWidget *alignment19;
  GtkWidget *hbox19;
  GtkWidget *image27;
  GtkWidget *label61;
  GtkWidget *anneeaffiche;
  GtkWidget *comboboxentryjour3;
  GtkWidget *comboboxentrymois3;
  GtkWidget *comboboxentryannee3;
  GtkWidget *treeview3;
  GtkWidget *label60;
  GtkWidget *label18;

  Calendrier = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Calendrier), _("Calendrier"));

  Gestion_d_ouvrier_ = gtk_fixed_new ();
  gtk_widget_show (Gestion_d_ouvrier_);
  gtk_container_add (GTK_CONTAINER (Calendrier), Gestion_d_ouvrier_);

  label19 = gtk_label_new (_("BIENVENU(E) DANS L'OUTIL DE CALENDRIER"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (Gestion_d_ouvrier_), label19, 16, 32);
  gtk_widget_set_size_request (label19, 512, 56);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_fixed_put (GTK_FIXED (Gestion_d_ouvrier_), notebook1, 8, 88);
  gtk_widget_set_size_request (notebook1, 640, 544);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed5);

  entrysaison = gtk_entry_new ();
  gtk_widget_show (entrysaison);
  gtk_fixed_put (GTK_FIXED (fixed5), entrysaison, 208, 136);
  gtk_widget_set_size_request (entrysaison, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrysaison), 8226);

  entryarrosage = gtk_entry_new ();
  gtk_widget_show (entryarrosage);
  gtk_fixed_put (GTK_FIXED (fixed5), entryarrosage, 208, 232);
  gtk_widget_set_size_request (entryarrosage, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryarrosage), 8226);

  entrytypedeplant1 = gtk_entry_new ();
  gtk_widget_show (entrytypedeplant1);
  gtk_fixed_put (GTK_FIXED (fixed5), entrytypedeplant1, 208, 184);
  gtk_widget_set_size_request (entrytypedeplant1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrytypedeplant1), 8226);

  entryirrigation = gtk_entry_new ();
  gtk_widget_show (entryirrigation);
  gtk_fixed_put (GTK_FIXED (fixed5), entryirrigation, 208, 280);
  gtk_widget_set_size_request (entryirrigation, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryirrigation), 8226);

  entryproduction1 = gtk_entry_new ();
  gtk_widget_show (entryproduction1);
  gtk_fixed_put (GTK_FIXED (fixed5), entryproduction1, 208, 336);
  gtk_widget_set_size_request (entryproduction1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryproduction1), 8226);

  buttonajouti = gtk_button_new ();
  gtk_widget_show (buttonajouti);
  gtk_fixed_put (GTK_FIXED (fixed5), buttonajouti, 224, 392);
  gtk_widget_set_size_request (buttonajouti, 112, 37);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (buttonajouti), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image11 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox10), image11, FALSE, FALSE, 0);

  label26 = gtk_label_new_with_mnemonic (_("Ajouter "));
  gtk_widget_show (label26);
  gtk_box_pack_start (GTK_BOX (hbox10), label26, FALSE, FALSE, 0);

  label24 = gtk_label_new (_("Production :"));
  gtk_widget_show (label24);
  gtk_fixed_put (GTK_FIXED (fixed5), label24, 56, 304);
  gtk_widget_set_size_request (label24, 168, 80);

  label23 = gtk_label_new (_("Irrigation :"));
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed5), label23, 104, 272);
  gtk_widget_set_size_request (label23, 88, 48);

  label21 = gtk_label_new (_("Arrosage :"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed5), label21, 96, 224);
  gtk_widget_set_size_request (label21, 97, 41);

  label22 = gtk_label_new (_("Type de plant :"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed5), label22, 96, 160);
  gtk_widget_set_size_request (label22, 96, 72);

  label20 = gtk_label_new (_("Saison :"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed5), label20, 104, 128);
  gtk_widget_set_size_request (label20, 89, 41);

  image10 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_fixed_put (GTK_FIXED (fixed5), image10, 216, 48);
  gtk_widget_set_size_request (image10, 21, 21);

  label25 = gtk_label_new (_("Ajouter"));
  gtk_widget_show (label25);
  gtk_fixed_put (GTK_FIXED (fixed5), label25, 200, 40);
  gtk_widget_set_size_request (label25, 152, 40);

  label14 = gtk_label_new (_("Ajouter "));
  gtk_widget_show (label14);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label14);

  fixed10 = gtk_fixed_new ();
  gtk_widget_show (fixed10);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed10);

  entrytypedeplant5 = gtk_entry_new ();
  gtk_widget_show (entrytypedeplant5);
  gtk_fixed_put (GTK_FIXED (fixed10), entrytypedeplant5, 144, 40);
  gtk_widget_set_size_request (entrytypedeplant5, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrytypedeplant5), 8226);

  entrysaison1 = gtk_entry_new ();
  gtk_widget_show (entrysaison1);
  gtk_fixed_put (GTK_FIXED (fixed10), entrysaison1, 192, 96);
  gtk_widget_set_size_request (entrysaison1, 160, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrysaison1), 8226);

  entryarrosage1 = gtk_entry_new ();
  gtk_widget_show (entryarrosage1);
  gtk_fixed_put (GTK_FIXED (fixed10), entryarrosage1, 192, 152);
  gtk_widget_set_size_request (entryarrosage1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryarrosage1), 8226);

  entryirrigation1 = gtk_entry_new ();
  gtk_widget_show (entryirrigation1);
  gtk_fixed_put (GTK_FIXED (fixed10), entryirrigation1, 192, 248);
  gtk_widget_set_size_request (entryirrigation1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryirrigation1), 8226);

  entryproduction = gtk_entry_new ();
  gtk_widget_show (entryproduction);
  gtk_fixed_put (GTK_FIXED (fixed10), entryproduction, 192, 288);
  gtk_widget_set_size_request (entryproduction, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryproduction), 8226);

  checkbuttonmodifieri = gtk_check_button_new_with_mnemonic (_("Etes-vous sur de vouloir effectuee ces modifications"));
  gtk_widget_show (checkbuttonmodifieri);
  gtk_fixed_put (GTK_FIXED (fixed10), checkbuttonmodifieri, 96, 328);
  gtk_widget_set_size_request (checkbuttonmodifieri, 424, 32);

  entrytypedeplant2 = gtk_entry_new ();
  gtk_widget_show (entrytypedeplant2);
  gtk_fixed_put (GTK_FIXED (fixed10), entrytypedeplant2, 192, 200);
  gtk_widget_set_size_request (entrytypedeplant2, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrytypedeplant2), 8226);

  label40 = gtk_label_new (_("Saison :"));
  gtk_widget_show (label40);
  gtk_fixed_put (GTK_FIXED (fixed10), label40, 96, 88);
  gtk_widget_set_size_request (label40, 120, 56);

  label41 = gtk_label_new (_("Arrosage :"));
  gtk_widget_show (label41);
  gtk_fixed_put (GTK_FIXED (fixed10), label41, 104, 152);
  gtk_widget_set_size_request (label41, 81, 24);

  label56 = gtk_label_new (_("Type de plant :\t\t\t"));
  gtk_widget_show (label56);
  gtk_fixed_put (GTK_FIXED (fixed10), label56, 96, 200);
  gtk_widget_set_size_request (label56, 105, 25);

  label42 = gtk_label_new (_("Irrigation :"));
  gtk_widget_show (label42);
  gtk_fixed_put (GTK_FIXED (fixed10), label42, 88, 232);
  gtk_widget_set_size_request (label42, 104, 57);

  label43 = gtk_label_new (_("Production :"));
  gtk_widget_show (label43);
  gtk_fixed_put (GTK_FIXED (fixed10), label43, 16, 272);
  gtk_widget_set_size_request (label43, 176, 72);

  buttonmodifieri = gtk_button_new ();
  gtk_widget_show (buttonmodifieri);
  gtk_fixed_put (GTK_FIXED (fixed10), buttonmodifieri, 208, 368);
  gtk_widget_set_size_request (buttonmodifieri, 104, 37);

  alignment15 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment15);
  gtk_container_add (GTK_CONTAINER (buttonmodifieri), alignment15);

  hbox15 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox15);
  gtk_container_add (GTK_CONTAINER (alignment15), hbox15);

  image17 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image17);
  gtk_box_pack_start (GTK_BOX (hbox15), image17, FALSE, FALSE, 0);

  label45 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label45);
  gtk_box_pack_start (GTK_BOX (hbox15), label45, FALSE, FALSE, 0);

  infoi = gtk_label_new ("");
  gtk_widget_show (infoi);
  gtk_fixed_put (GTK_FIXED (fixed10), infoi, 112, 80);
  gtk_widget_set_size_request (infoi, 312, 25);

  labelCheckSaisonModif = gtk_label_new ("");
  gtk_widget_show (labelCheckSaisonModif);
  gtk_fixed_put (GTK_FIXED (fixed10), labelCheckSaisonModif, 376, 96);
  gtk_widget_set_size_request (labelCheckSaisonModif, 97, 33);

  labelCheckArrosageModif = gtk_label_new ("");
  gtk_widget_show (labelCheckArrosageModif);
  gtk_fixed_put (GTK_FIXED (fixed10), labelCheckArrosageModif, 376, 152);
  gtk_widget_set_size_request (labelCheckArrosageModif, 89, 25);

  labelCheckirrigationModif = gtk_label_new ("");
  gtk_widget_show (labelCheckirrigationModif);
  gtk_fixed_put (GTK_FIXED (fixed10), labelCheckirrigationModif, 360, 248);
  gtk_widget_set_size_request (labelCheckirrigationModif, 168, 24);

  labelCheckProductionModif = gtk_label_new ("");
  gtk_widget_show (labelCheckProductionModif);
  gtk_fixed_put (GTK_FIXED (fixed10), labelCheckProductionModif, 368, 288);
  gtk_widget_set_size_request (labelCheckProductionModif, 128, 33);

  labelChecktypedeplantModif2 = gtk_label_new ("");
  gtk_widget_show (labelChecktypedeplantModif2);
  gtk_fixed_put (GTK_FIXED (fixed10), labelChecktypedeplantModif2, 112, 0);
  gtk_widget_set_size_request (labelChecktypedeplantModif2, 160, 33);

  labelChecktypedeplantModif = gtk_label_new ("");
  gtk_widget_show (labelChecktypedeplantModif);
  gtk_fixed_put (GTK_FIXED (fixed10), labelChecktypedeplantModif, 368, 200);
  gtk_widget_set_size_request (labelChecktypedeplantModif, 144, 33);

  buttoninfoi = gtk_button_new ();
  gtk_widget_show (buttoninfoi);
  gtk_fixed_put (GTK_FIXED (fixed10), buttoninfoi, 320, 32);
  gtk_widget_set_size_request (buttoninfoi, 200, 37);

  alignment14 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment14);
  gtk_container_add (GTK_CONTAINER (buttoninfoi), alignment14);

  hbox14 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox14);
  gtk_container_add (GTK_CONTAINER (alignment14), hbox14);

  image16 = gtk_image_new_from_stock ("gtk-info", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image16);
  gtk_box_pack_start (GTK_BOX (hbox14), image16, FALSE, FALSE, 0);

  label44 = gtk_label_new_with_mnemonic (_("Afficher les informations"));
  gtk_widget_show (label44);
  gtk_box_pack_start (GTK_BOX (hbox14), label44, FALSE, FALSE, 0);

  label39 = gtk_label_new (_("Type de plante :"));
  gtk_widget_show (label39);
  gtk_fixed_put (GTK_FIXED (fixed10), label39, 0, 32);
  gtk_widget_set_size_request (label39, 136, 40);

  label15 = gtk_label_new (_("Modifier "));
  gtk_widget_show (label15);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), label15);

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed7);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed7), treeview1, 56, 192);
  gtk_widget_set_size_request (treeview1, 440, 184);

  image12 = gtk_image_new_from_stock ("gtk-info", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_fixed_put (GTK_FIXED (fixed7), image12, 192, 24);
  gtk_widget_set_size_request (image12, 21, 21);

  entrytypedeplantsupp = gtk_entry_new ();
  gtk_widget_show (entrytypedeplantsupp);
  gtk_fixed_put (GTK_FIXED (fixed7), entrytypedeplantsupp, 160, 72);
  gtk_widget_set_size_request (entrytypedeplantsupp, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrytypedeplantsupp), 8226);

  buttonsupprimeri = gtk_button_new ();
  gtk_widget_show (buttonsupprimeri);
  gtk_fixed_put (GTK_FIXED (fixed7), buttonsupprimeri, 336, 64);
  gtk_widget_set_size_request (buttonsupprimeri, 112, 37);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (buttonsupprimeri), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image13 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image13);
  gtk_box_pack_start (GTK_BOX (hbox11), image13, FALSE, FALSE, 0);

  label33 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label33);
  gtk_box_pack_start (GTK_BOX (hbox11), label33, FALSE, FALSE, 0);

  label55 = gtk_label_new (_("Type de plant :"));
  gtk_widget_show (label55);
  gtk_fixed_put (GTK_FIXED (fixed7), label55, 0, 64);
  gtk_widget_set_size_request (label55, 160, 40);

  buttonaffichsupp = gtk_button_new ();
  gtk_widget_show (buttonaffichsupp);
  gtk_fixed_put (GTK_FIXED (fixed7), buttonaffichsupp, 200, 120);
  gtk_widget_set_size_request (buttonaffichsupp, 144, 56);

  alignment17 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment17);
  gtk_container_add (GTK_CONTAINER (buttonaffichsupp), alignment17);

  hbox17 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox17);
  gtk_container_add (GTK_CONTAINER (alignment17), hbox17);

  image25 = gtk_image_new_from_stock ("gtk-justify-fill", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image25);
  gtk_box_pack_start (GTK_BOX (hbox17), image25, FALSE, FALSE, 0);

  label54 = gtk_label_new_with_mnemonic (_("Afficher tout :"));
  gtk_widget_show (label54);
  gtk_box_pack_start (GTK_BOX (hbox17), label54, FALSE, FALSE, 0);

  label32 = gtk_label_new (_("     Les Calendrier"));
  gtk_widget_show (label32);
  gtk_fixed_put (GTK_FIXED (fixed7), label32, 192, 16);
  gtk_widget_set_size_request (label32, 128, 40);

  label16 = gtk_label_new (_("Afficher/Supprimer"));
  gtk_widget_show (label16);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), label16);

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed8);

  infoi2 = gtk_label_new ("");
  gtk_widget_show (infoi2);
  gtk_fixed_put (GTK_FIXED (fixed8), infoi2, 104, 224);
  gtk_widget_set_size_request (infoi2, 240, 65);

  treeview2 = gtk_tree_view_new ();
  gtk_widget_show (treeview2);
  gtk_fixed_put (GTK_FIXED (fixed8), treeview2, 80, 200);
  gtk_widget_set_size_request (treeview2, 464, 192);

  entrytypedeplant = gtk_entry_new ();
  gtk_widget_show (entrytypedeplant);
  gtk_fixed_put (GTK_FIXED (fixed8), entrytypedeplant, 192, 120);
  gtk_widget_set_size_request (entrytypedeplant, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrytypedeplant), 8226);

  buttonAffichecherch = gtk_button_new ();
  gtk_widget_show (buttonAffichecherch);
  gtk_fixed_put (GTK_FIXED (fixed8), buttonAffichecherch, 376, 24);
  gtk_widget_set_size_request (buttonAffichecherch, 144, 56);

  alignment18 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment18);
  gtk_container_add (GTK_CONTAINER (buttonAffichecherch), alignment18);

  hbox18 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox18);
  gtk_container_add (GTK_CONTAINER (alignment18), hbox18);

  image26 = gtk_image_new_from_stock ("gtk-justify-fill", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image26);
  gtk_box_pack_start (GTK_BOX (hbox18), image26, FALSE, FALSE, 0);

  label57 = gtk_label_new_with_mnemonic (_("Afficher tout :"));
  gtk_widget_show (label57);
  gtk_box_pack_start (GTK_BOX (hbox18), label57, FALSE, FALSE, 0);

  buttonchercheri = gtk_button_new ();
  gtk_widget_show (buttonchercheri);
  gtk_fixed_put (GTK_FIXED (fixed8), buttonchercheri, 376, 112);
  gtk_widget_set_size_request (buttonchercheri, 112, 45);

  alignment13 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment13);
  gtk_container_add (GTK_CONTAINER (buttonchercheri), alignment13);

  hbox13 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox13);
  gtk_container_add (GTK_CONTAINER (alignment13), hbox13);

  image15 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image15);
  gtk_box_pack_start (GTK_BOX (hbox13), image15, FALSE, FALSE, 0);

  label37 = gtk_label_new_with_mnemonic (_("Chercher"));
  gtk_widget_show (label37);
  gtk_box_pack_start (GTK_BOX (hbox13), label37, FALSE, FALSE, 0);

  label31 = gtk_label_new (_("Type de plant :"));
  gtk_widget_show (label31);
  gtk_fixed_put (GTK_FIXED (fixed8), label31, 64, 104);
  gtk_widget_set_size_request (label31, 129, 57);

  image20 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image20);
  gtk_fixed_put (GTK_FIXED (fixed8), image20, 216, 48);
  gtk_widget_set_size_request (image20, 21, 21);

  label53 = gtk_label_new (_("Chercher "));
  gtk_widget_show (label53);
  gtk_fixed_put (GTK_FIXED (fixed8), label53, 216, 40);
  gtk_widget_set_size_request (label53, 128, 40);

  label17 = gtk_label_new (_("Chercher "));
  gtk_widget_show (label17);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 3), label17);

  fixed9 = gtk_fixed_new ();
  gtk_widget_show (fixed9);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed9);
  gtk_widget_set_size_request (fixed9, 521, -1);

  image18 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image18);
  gtk_fixed_put (GTK_FIXED (fixed9), image18, 152, 24);
  gtk_widget_set_size_request (image18, 21, 21);

  label47 = gtk_label_new (_("Jour"));
  gtk_widget_show (label47);
  gtk_fixed_put (GTK_FIXED (fixed9), label47, 128, 96);
  gtk_widget_set_size_request (label47, 49, 17);

  label51 = gtk_label_new (_("L'ann\303\251e la plus s\303\251che"));
  gtk_widget_show (label51);
  gtk_fixed_put (GTK_FIXED (fixed9), label51, 80, 16);
  gtk_widget_set_size_request (label51, 328, 41);

  label48 = gtk_label_new (_("Mois "));
  gtk_widget_show (label48);
  gtk_fixed_put (GTK_FIXED (fixed9), label48, 248, 96);
  gtk_widget_set_size_request (label48, 49, 17);

  label58 = gtk_label_new (_("Ann\303\251e"));
  gtk_widget_show (label58);
  gtk_fixed_put (GTK_FIXED (fixed9), label58, 384, 96);
  gtk_widget_set_size_request (label58, 49, 17);

  label49 = gtk_label_new (_("Date :"));
  gtk_widget_show (label49);
  gtk_fixed_put (GTK_FIXED (fixed9), label49, 16, 120);
  gtk_widget_set_size_request (label49, 104, 48);

  productiona = gtk_entry_new ();
  gtk_widget_show (productiona);
  gtk_fixed_put (GTK_FIXED (fixed9), productiona, 160, 208);
  gtk_widget_set_size_request (productiona, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (productiona), 8226);

  buttonconfirmeri = gtk_button_new ();
  gtk_widget_show (buttonconfirmeri);
  gtk_fixed_put (GTK_FIXED (fixed9), buttonconfirmeri, 368, 200);
  gtk_widget_set_size_request (buttonconfirmeri, 128, 45);

  alignment19 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment19);
  gtk_container_add (GTK_CONTAINER (buttonconfirmeri), alignment19);

  hbox19 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox19);
  gtk_container_add (GTK_CONTAINER (alignment19), hbox19);

  image27 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image27);
  gtk_box_pack_start (GTK_BOX (hbox19), image27, FALSE, FALSE, 0);

  label61 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label61);
  gtk_box_pack_start (GTK_BOX (hbox19), label61, FALSE, FALSE, 0);

  anneeaffiche = gtk_button_new_with_mnemonic (_("Afficher les informations"));
  gtk_widget_show (anneeaffiche);
  gtk_fixed_put (GTK_FIXED (fixed9), anneeaffiche, 16, 360);
  gtk_widget_set_size_request (anneeaffiche, 208, 56);

  comboboxentryjour3 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentryjour3);
  gtk_fixed_put (GTK_FIXED (fixed9), comboboxentryjour3, 120, 120);
  gtk_widget_set_size_request (comboboxentryjour3, 85, 37);

  comboboxentrymois3 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentrymois3);
  gtk_fixed_put (GTK_FIXED (fixed9), comboboxentrymois3, 224, 120);
  gtk_widget_set_size_request (comboboxentrymois3, 109, 37);

  comboboxentryannee3 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentryannee3);
  gtk_fixed_put (GTK_FIXED (fixed9), comboboxentryannee3, 360, 120);
  gtk_widget_set_size_request (comboboxentryannee3, 109, 40);

  treeview3 = gtk_tree_view_new ();
  gtk_widget_show (treeview3);
  gtk_fixed_put (GTK_FIXED (fixed9), treeview3, 280, 280);
  gtk_widget_set_size_request (treeview3, 300, 200);

  label60 = gtk_label_new (_("Pr\303\251cipitation"));
  gtk_widget_show (label60);
  gtk_fixed_put (GTK_FIXED (fixed9), label60, 16, 208);
  gtk_widget_set_size_request (label60, 112, 32);

  label18 = gtk_label_new (_("L'Ann\303\251e la plus s\303\251che"));
  gtk_widget_show (label18);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 4), label18);

  g_signal_connect ((gpointer) buttonajouti, "clicked",
                    G_CALLBACK (on_buttonajouti_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonmodifieri, "clicked",
                    G_CALLBACK (on_buttonmodifieri_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttoninfoi, "clicked",
                    G_CALLBACK (on_buttoninfoi_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) buttonsupprimeri, "clicked",
                    G_CALLBACK (on_buttonsupprimeri_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonaffichsupp, "clicked",
                    G_CALLBACK (on_buttonaffichsupp_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeview2, "row_activated",
                    G_CALLBACK (on_treeview2_row_activated),
                    NULL);
  g_signal_connect ((gpointer) buttonAffichecherch, "clicked",
                    G_CALLBACK (on_buttonAffichecherch_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonchercheri, "clicked",
                    G_CALLBACK (on_buttonchercheri_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonconfirmeri, "clicked",
                    G_CALLBACK (on_buttonconfirmeri_clicked),
                    NULL);
  g_signal_connect ((gpointer) anneeaffiche, "clicked",
                    G_CALLBACK (on_anneeaffiche_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Calendrier, Calendrier, "Calendrier");
  GLADE_HOOKUP_OBJECT (Calendrier, Gestion_d_ouvrier_, "Gestion_d_ouvrier_");
  GLADE_HOOKUP_OBJECT (Calendrier, label19, "label19");
  GLADE_HOOKUP_OBJECT (Calendrier, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (Calendrier, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (Calendrier, entrysaison, "entrysaison");
  GLADE_HOOKUP_OBJECT (Calendrier, entryarrosage, "entryarrosage");
  GLADE_HOOKUP_OBJECT (Calendrier, entrytypedeplant1, "entrytypedeplant1");
  GLADE_HOOKUP_OBJECT (Calendrier, entryirrigation, "entryirrigation");
  GLADE_HOOKUP_OBJECT (Calendrier, entryproduction1, "entryproduction1");
  GLADE_HOOKUP_OBJECT (Calendrier, buttonajouti, "buttonajouti");
  GLADE_HOOKUP_OBJECT (Calendrier, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (Calendrier, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (Calendrier, image11, "image11");
  GLADE_HOOKUP_OBJECT (Calendrier, label26, "label26");
  GLADE_HOOKUP_OBJECT (Calendrier, label24, "label24");
  GLADE_HOOKUP_OBJECT (Calendrier, label23, "label23");
  GLADE_HOOKUP_OBJECT (Calendrier, label21, "label21");
  GLADE_HOOKUP_OBJECT (Calendrier, label22, "label22");
  GLADE_HOOKUP_OBJECT (Calendrier, label20, "label20");
  GLADE_HOOKUP_OBJECT (Calendrier, image10, "image10");
  GLADE_HOOKUP_OBJECT (Calendrier, label25, "label25");
  GLADE_HOOKUP_OBJECT (Calendrier, label14, "label14");
  GLADE_HOOKUP_OBJECT (Calendrier, fixed10, "fixed10");
  GLADE_HOOKUP_OBJECT (Calendrier, entrytypedeplant5, "entrytypedeplant5");
  GLADE_HOOKUP_OBJECT (Calendrier, entrysaison1, "entrysaison1");
  GLADE_HOOKUP_OBJECT (Calendrier, entryarrosage1, "entryarrosage1");
  GLADE_HOOKUP_OBJECT (Calendrier, entryirrigation1, "entryirrigation1");
  GLADE_HOOKUP_OBJECT (Calendrier, entryproduction, "entryproduction");
  GLADE_HOOKUP_OBJECT (Calendrier, checkbuttonmodifieri, "checkbuttonmodifieri");
  GLADE_HOOKUP_OBJECT (Calendrier, entrytypedeplant2, "entrytypedeplant2");
  GLADE_HOOKUP_OBJECT (Calendrier, label40, "label40");
  GLADE_HOOKUP_OBJECT (Calendrier, label41, "label41");
  GLADE_HOOKUP_OBJECT (Calendrier, label56, "label56");
  GLADE_HOOKUP_OBJECT (Calendrier, label42, "label42");
  GLADE_HOOKUP_OBJECT (Calendrier, label43, "label43");
  GLADE_HOOKUP_OBJECT (Calendrier, buttonmodifieri, "buttonmodifieri");
  GLADE_HOOKUP_OBJECT (Calendrier, alignment15, "alignment15");
  GLADE_HOOKUP_OBJECT (Calendrier, hbox15, "hbox15");
  GLADE_HOOKUP_OBJECT (Calendrier, image17, "image17");
  GLADE_HOOKUP_OBJECT (Calendrier, label45, "label45");
  GLADE_HOOKUP_OBJECT (Calendrier, infoi, "infoi");
  GLADE_HOOKUP_OBJECT (Calendrier, labelCheckSaisonModif, "labelCheckSaisonModif");
  GLADE_HOOKUP_OBJECT (Calendrier, labelCheckArrosageModif, "labelCheckArrosageModif");
  GLADE_HOOKUP_OBJECT (Calendrier, labelCheckirrigationModif, "labelCheckirrigationModif");
  GLADE_HOOKUP_OBJECT (Calendrier, labelCheckProductionModif, "labelCheckProductionModif");
  GLADE_HOOKUP_OBJECT (Calendrier, labelChecktypedeplantModif2, "labelChecktypedeplantModif2");
  GLADE_HOOKUP_OBJECT (Calendrier, labelChecktypedeplantModif, "labelChecktypedeplantModif");
  GLADE_HOOKUP_OBJECT (Calendrier, buttoninfoi, "buttoninfoi");
  GLADE_HOOKUP_OBJECT (Calendrier, alignment14, "alignment14");
  GLADE_HOOKUP_OBJECT (Calendrier, hbox14, "hbox14");
  GLADE_HOOKUP_OBJECT (Calendrier, image16, "image16");
  GLADE_HOOKUP_OBJECT (Calendrier, label44, "label44");
  GLADE_HOOKUP_OBJECT (Calendrier, label39, "label39");
  GLADE_HOOKUP_OBJECT (Calendrier, label15, "label15");
  GLADE_HOOKUP_OBJECT (Calendrier, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (Calendrier, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (Calendrier, image12, "image12");
  GLADE_HOOKUP_OBJECT (Calendrier, entrytypedeplantsupp, "entrytypedeplantsupp");
  GLADE_HOOKUP_OBJECT (Calendrier, buttonsupprimeri, "buttonsupprimeri");
  GLADE_HOOKUP_OBJECT (Calendrier, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (Calendrier, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (Calendrier, image13, "image13");
  GLADE_HOOKUP_OBJECT (Calendrier, label33, "label33");
  GLADE_HOOKUP_OBJECT (Calendrier, label55, "label55");
  GLADE_HOOKUP_OBJECT (Calendrier, buttonaffichsupp, "buttonaffichsupp");
  GLADE_HOOKUP_OBJECT (Calendrier, alignment17, "alignment17");
  GLADE_HOOKUP_OBJECT (Calendrier, hbox17, "hbox17");
  GLADE_HOOKUP_OBJECT (Calendrier, image25, "image25");
  GLADE_HOOKUP_OBJECT (Calendrier, label54, "label54");
  GLADE_HOOKUP_OBJECT (Calendrier, label32, "label32");
  GLADE_HOOKUP_OBJECT (Calendrier, label16, "label16");
  GLADE_HOOKUP_OBJECT (Calendrier, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (Calendrier, infoi2, "infoi2");
  GLADE_HOOKUP_OBJECT (Calendrier, treeview2, "treeview2");
  GLADE_HOOKUP_OBJECT (Calendrier, entrytypedeplant, "entrytypedeplant");
  GLADE_HOOKUP_OBJECT (Calendrier, buttonAffichecherch, "buttonAffichecherch");
  GLADE_HOOKUP_OBJECT (Calendrier, alignment18, "alignment18");
  GLADE_HOOKUP_OBJECT (Calendrier, hbox18, "hbox18");
  GLADE_HOOKUP_OBJECT (Calendrier, image26, "image26");
  GLADE_HOOKUP_OBJECT (Calendrier, label57, "label57");
  GLADE_HOOKUP_OBJECT (Calendrier, buttonchercheri, "buttonchercheri");
  GLADE_HOOKUP_OBJECT (Calendrier, alignment13, "alignment13");
  GLADE_HOOKUP_OBJECT (Calendrier, hbox13, "hbox13");
  GLADE_HOOKUP_OBJECT (Calendrier, image15, "image15");
  GLADE_HOOKUP_OBJECT (Calendrier, label37, "label37");
  GLADE_HOOKUP_OBJECT (Calendrier, label31, "label31");
  GLADE_HOOKUP_OBJECT (Calendrier, image20, "image20");
  GLADE_HOOKUP_OBJECT (Calendrier, label53, "label53");
  GLADE_HOOKUP_OBJECT (Calendrier, label17, "label17");
  GLADE_HOOKUP_OBJECT (Calendrier, fixed9, "fixed9");
  GLADE_HOOKUP_OBJECT (Calendrier, image18, "image18");
  GLADE_HOOKUP_OBJECT (Calendrier, label47, "label47");
  GLADE_HOOKUP_OBJECT (Calendrier, label51, "label51");
  GLADE_HOOKUP_OBJECT (Calendrier, label48, "label48");
  GLADE_HOOKUP_OBJECT (Calendrier, label58, "label58");
  GLADE_HOOKUP_OBJECT (Calendrier, label49, "label49");
  GLADE_HOOKUP_OBJECT (Calendrier, productiona, "productiona");
  GLADE_HOOKUP_OBJECT (Calendrier, buttonconfirmeri, "buttonconfirmeri");
  GLADE_HOOKUP_OBJECT (Calendrier, alignment19, "alignment19");
  GLADE_HOOKUP_OBJECT (Calendrier, hbox19, "hbox19");
  GLADE_HOOKUP_OBJECT (Calendrier, image27, "image27");
  /*GLADE_HOOKUP_OBJECT (Calendrier, label61, "label61");*/
  GLADE_HOOKUP_OBJECT (Calendrier, anneeaffiche, "anneeaffiche");
  GLADE_HOOKUP_OBJECT (Calendrier, comboboxentryjour3, "comboboxentryjour3");
  GLADE_HOOKUP_OBJECT (Calendrier, comboboxentrymois3, "comboboxentrymois3");
  GLADE_HOOKUP_OBJECT (Calendrier, comboboxentryannee3, "comboboxentryannee3");
  GLADE_HOOKUP_OBJECT (Calendrier, treeview3, "treeview3");
  GLADE_HOOKUP_OBJECT (Calendrier, label60, "label60");
  GLADE_HOOKUP_OBJECT (Calendrier, label18, "label18");

  return Calendrier;
}
