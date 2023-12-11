#include<Windows.h>
#include "Requete.h"

#pragma once

namespace kokoyo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;


	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->Icon = gcnew System::Drawing::Icon("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\logo.ico");
			ptc_cerise->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\cerisier.png");
			btn_menu->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\Menu.png");
			btn_creer->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\creer.png");
			btn_modif->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\modif.png");
			btn_suppr->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\suppr.png");
			btn_affich->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\affich.png");
			pct_perso->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\tom_nook.png");
			pct_perso2->Image = pct_perso->Image;
			pct_cli->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\villageois.png");
			pct3_cli->Image = pct_cli->Image;
			pct_article->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\article_defaut.png");
			pct3_article->Image = pct_article->Image;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Titre;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ btn_gest_pers;
	private: System::Windows::Forms::Button^ btn_gest_client;
	private: System::Windows::Forms::Button^ btn_gest_commande;
	private: System::Windows::Forms::Button^ btn_gest_stock;
	private: System::Windows::Forms::Button^ btn_gest_stat;
	private: System::Windows::Forms::Button^ btn_menu;
	private: System::Windows::Forms::Panel^ pn_menu;
	private: System::Windows::Forms::Panel^ pn_haut;
	private: System::Windows::Forms::Button^ btn_accueil;
	private: System::Windows::Forms::Button^ btn_modif;
	private: System::Windows::Forms::Button^ btn_suppr;
	private: System::Windows::Forms::Button^ btn_affich;
	private: System::Windows::Forms::Button^ btn_creer;
	private: System::Windows::Forms::PictureBox^ ptc_cerise;
	private: System::Windows::Forms::TabControl^ tab_gest_pers;
	private: System::Windows::Forms::TabPage^ tab_pers_creer;
	private: System::Windows::Forms::Panel^ pn_btn_creer_perso;
    private: System::Windows::Forms::Button^ btn_creer_actualiser_perso;
    private: System::Windows::Forms::Button^ btn_creer_valider_perso;


	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::DataGridView^ bdd_creer_perso;
	private: System::Windows::Forms::Panel^ pn_info_creer_perso;
	private: System::Windows::Forms::PictureBox^ pct_perso;
	private: System::Windows::Forms::TextBox^ tb_creer_sup_perso;
	private: System::Windows::Forms::Label^ lb_creer_nom_perso;
	private: System::Windows::Forms::Label^ lb_creer_sup_perso;
	private: System::Windows::Forms::TextBox^ tb__creer_nom_perso;
	private: System::Windows::Forms::TextBox^ tb_creer_adresse_perso;
	private: System::Windows::Forms::TextBox^ tb__creer_prenom_perso;
	private: System::Windows::Forms::Label^ lb_creer_adresse_perso;
	private: System::Windows::Forms::Label^ lb_creer_prenom_perso;
	private: System::Windows::Forms::Label^ lb_creer_embauche_perso;
	private: System::Windows::Forms::TextBox^ tb__creer_embauche_perso;
	private: System::Windows::Forms::TabPage^ tab_pers_suppr;
	private: System::Windows::Forms::Button^ btn_suppr_annuler_perso;
	private: System::Windows::Forms::Button^ btn_suppr_valider_perso;
	private: System::Windows::Forms::DataGridView^ bdd_suppr_perso;
	private: System::Windows::Forms::TextBox^ tb_suppr_id_perso;
	private: System::Windows::Forms::Label^ lb_suppr_id_perso;
	private: System::Windows::Forms::TabPage^ tab_pers_affich;
	private: System::Windows::Forms::TableLayoutPanel^ layout_affich_perso;
	private: System::Windows::Forms::Button^ btn_affich_valider_perso;
	private: System::Windows::Forms::Button^ btn_affich_autre_perso;








	private: System::Windows::Forms::TextBox^ tb_affich_id_perso;
	private: System::Windows::Forms::Label^ lb_affich_id_perso;
	private: System::Windows::Forms::TabPage^ tab_pers_modif;
	private: System::Windows::Forms::TableLayoutPanel^ layout_modif_perso;
	private: System::Windows::Forms::Button^ btn_modif_valider_perso;
	private: System::Windows::Forms::Button^ btn_modif_annuler_perso;
	private: System::Windows::Forms::Panel^ pn_cacher_info_modif_perso;
	private: System::Windows::Forms::TableLayoutPanel^ layout2_modif_perso;
	private: System::Windows::Forms::Button^ btn_modif_actu_fiche_perso;
	private: System::Windows::Forms::Button^ btn_valider_modif_perso;
	private: System::Windows::Forms::Button^ btn_modif_changer_perso;
	private: System::Windows::Forms::TextBox^ tb_modif_sup_perso;
	private: System::Windows::Forms::Label^ lb_modif_nom_perso;
	private: System::Windows::Forms::Label^ lb_modif_sup_perso;
	private: System::Windows::Forms::TextBox^ tb_modif_nom_perso;
	private: System::Windows::Forms::TextBox^ tb_modif_adresse_perso;
	private: System::Windows::Forms::TextBox^ tb_modif_prenom_perso;
	private: System::Windows::Forms::Label^ lb_modif_adresse_perso;
	private: System::Windows::Forms::Label^ lb_modif_prenom_perso;
	private: System::Windows::Forms::Label^ lb_modif_embauche_perso;
	private: System::Windows::Forms::TextBox^ tb_modif_embauche_perso;
	private: System::Windows::Forms::TextBox^ tb_modif_id_perso;
	private: System::Windows::Forms::Label^ lb_modif_id_perso;
	private: System::Windows::Forms::Panel^ pn_modif_fiche_perso;
	private: System::Windows::Forms::Label^ lb_modif_adresse_fiche_perso;
	private: System::Windows::Forms::Label^ lb_modif_sup_fiche_perso;
	private: System::Windows::Forms::Label^ lb_modif_embauche_fiche_perso;
	private: System::Windows::Forms::Label^ lb_modif_prenom_fiche_perso;
	private: System::Windows::Forms::Label^ lb_modif_nom_fiche_perso;
	private: System::Windows::Forms::PictureBox^ pct_perso2;
	private: System::Windows::Forms::Panel^ pn_centre;
	private: System::Windows::Forms::TabControl^ tab_gestion_client;
	private: System::Windows::Forms::TabPage^ tab_creer_cli;

	private: System::Windows::Forms::Panel^ pn_creer_btn_cli;
	private: System::Windows::Forms::Button^ btn_creer_actu_cli;


	private: System::Windows::Forms::Button^ btn_creer_cli;

	private: System::Windows::Forms::Splitter^ splitter2;
	private: System::Windows::Forms::DataGridView^ bdd_creer_cli;

	private: System::Windows::Forms::Panel^ pn_creer_cli;

	private: System::Windows::Forms::PictureBox^ pct_cli;


	private: System::Windows::Forms::TextBox^ tb_creer_facturation_cli;

    private: System::Windows::Forms::Label^ lb_creer_nom_cli;
    private: System::Windows::Forms::Label^ lb_creer_facturation_cli;
    private: System::Windows::Forms::TextBox^ tb_creer_nom_cli;
    private: System::Windows::Forms::TextBox^ tb_creer_livraison_cli;




    private: System::Windows::Forms::TextBox^ tb_creer_prenom_cli;

    private: System::Windows::Forms::Label^ lb_creer_livraison_cli;

    private: System::Windows::Forms::Label^ lb_creer_prenom_cli;
    private: System::Windows::Forms::Label^ lb_creer_naissance_cli;
    private: System::Windows::Forms::TextBox^ tb_creer_naissance_cli;
    private: System::Windows::Forms::TabPage^ tab_suppr_cli;




    private: System::Windows::Forms::Button^ btn_suppr_annuler_cli;

    private: System::Windows::Forms::Button^ btn_suppr_valider_cli;
    private: System::Windows::Forms::DataGridView^ bdd_suppr_cli;



    private: System::Windows::Forms::TextBox^ tb_suppr_id_cli;

    private: System::Windows::Forms::Label^ lb_suppr__id_cli;
    private: System::Windows::Forms::TabPage^ tab_affich_cli;


    private: System::Windows::Forms::TableLayoutPanel^ layout_affich_cli;

    private: System::Windows::Forms::Button^ btn_affich_valider_cli;
    private: System::Windows::Forms::Button^ btn_affich_autre_cli;

















    private: System::Windows::Forms::TextBox^ tb_affich_id_cli;

    private: System::Windows::Forms::Label^ lb_affich_id_cli;
    private: System::Windows::Forms::TabPage^ tab_modif_cli;


    private: System::Windows::Forms::TableLayoutPanel^ layout_modif_cli;
    private: System::Windows::Forms::Button^ btn_modif_valider_cli;
    private: System::Windows::Forms::Button^ btn_modif_annuler_cli;
    private: System::Windows::Forms::Panel^ pn_modif_cacher_info_cli;
    private: System::Windows::Forms::TableLayoutPanel^ layout2_modif_cli;
    private: System::Windows::Forms::Button^ btn_modif_actu_cli;






    private: System::Windows::Forms::Button^ btn_modif_cli;
    private: System::Windows::Forms::Button^ btn_modif_autre_cli;


    private: System::Windows::Forms::TextBox^ tb_modif_livraison_cli;

    private: System::Windows::Forms::Label^ lb_modif_nom_cli;
    private: System::Windows::Forms::Label^ lb_modif_livraison_cli;
    private: System::Windows::Forms::TextBox^ tb_modif_nom_cli;



    private: System::Windows::Forms::TextBox^ tb_modif_facturation_cli;
    private: System::Windows::Forms::TextBox^ tb_modif_prenom_cli;


    private: System::Windows::Forms::Label^ lb_modif_facturation_cli;

    private: System::Windows::Forms::Label^ lb_modif_prenomcli;
    private: System::Windows::Forms::Label^ lb_modif_naissance_cli;
    private: System::Windows::Forms::TextBox^ tb_modif_naissance_cli;



    private: System::Windows::Forms::TextBox^ tb_modif_id_cli;

    private: System::Windows::Forms::Label^ lb_modif_id_cli;
    private: System::Windows::Forms::Panel^ pn_modif_fiche_cli;


    private: System::Windows::Forms::Label^ lb_modif_livraison_fiche_cli;

    private: System::Windows::Forms::Label^ lb_modif_facturation_fiche_client;
    private: System::Windows::Forms::Label^ lb_modif_naissance_fiche_cli;
    private: System::Windows::Forms::Label^ lb_modif_prenom_fiche_cli;



    private: System::Windows::Forms::Label^ lb_modif_nom_fiche_cli;
    private: System::Windows::Forms::PictureBox^ pct3_cli;
    private: System::Windows::Forms::TabControl^ tab_gestion_stock;
    private: System::Windows::Forms::TabPage^ tab_creer_article;
    private: System::Windows::Forms::Panel^ pn_creer_btn_article;
    private: System::Windows::Forms::Button^ btn_creer_actu_article;



    private: System::Windows::Forms::Button^ btn_creer_article;

    private: System::Windows::Forms::Splitter^ splitter3;
    private: System::Windows::Forms::DataGridView^ bdd_creer_article;

    private: System::Windows::Forms::Panel^ pn_creer_article;
    private: System::Windows::Forms::PictureBox^ pct_article;



    private: System::Windows::Forms::Label^ lb_creer_nom_artcile;
    private: System::Windows::Forms::TextBox^ tb_creer_nom_article;
    private: System::Windows::Forms::TextBox^ tb_creer_prix_article;






    private: System::Windows::Forms::Label^ lb_creer_prix_article;
    private: System::Windows::Forms::Label^ lb_creer_couleur_article;
    private: System::Windows::Forms::TextBox^ tb_creer_couleur_article;
    private: System::Windows::Forms::TabPage^ tab_suppr_article;





    private: System::Windows::Forms::Button^ btn_suppr_annuler_article;

    private: System::Windows::Forms::Button^ btn_suppr_valider_article;
    private: System::Windows::Forms::DataGridView^ bdd_suppr_article;


    private: System::Windows::Forms::TextBox^ tb_suppr_id_article;

    private: System::Windows::Forms::Label^ lb_suppr_id_article;
    private: System::Windows::Forms::TabPage^ tab_affich_article;


    private: System::Windows::Forms::TableLayoutPanel^ layout_affich_article;
    private: System::Windows::Forms::Button^ btn_affich_valider_article;
    private: System::Windows::Forms::Button^ btn_affich_autre_article;















    private: System::Windows::Forms::TextBox^ tb_affich_id_article;

    private: System::Windows::Forms::Label^ lb_affich_id_article;
    private: System::Windows::Forms::TabPage^ tab_modif_article;
    private: System::Windows::Forms::Panel^ pn_modif_cacher_info_article;



    private: System::Windows::Forms::TableLayoutPanel^ layout_affich_btn_article;
    private: System::Windows::Forms::Button^ btn_modif_valider_article;
    private: System::Windows::Forms::Button^ btn_affich_annuler_article;
    private: System::Windows::Forms::TableLayoutPanel^ layout2_modif_btn_article;
    private: System::Windows::Forms::Button^ btn_modif_actu_article;
    private: System::Windows::Forms::Button^ btn_modif_article;






    private: System::Windows::Forms::Button^ btn_modif_autre_article;

    private: System::Windows::Forms::Label^ lb_modif_nom_article;
    private: System::Windows::Forms::TextBox^ tb_modif_nom_article;
    private: System::Windows::Forms::TextBox^ tb_modif_prix_article;






    private: System::Windows::Forms::Label^ lb_modif_prix_article;
    private: System::Windows::Forms::Label^ lb_modif_couleur_article;
    private: System::Windows::Forms::TextBox^ tb_modif_couleur_article;



    private: System::Windows::Forms::TextBox^ tb_modif_id_article;

    private: System::Windows::Forms::Label^ lb_modif_id_article;
    private: System::Windows::Forms::Panel^ pn_modif_fiche_article;










    private: System::Windows::Forms::Label^ lb_modif_prix_fiche_article;
    private: System::Windows::Forms::Label^ lb_modif_couleur_fiche_article;

    private: System::Windows::Forms::Label^ lb_modif_nom_fiche_article;
    private: System::Windows::Forms::PictureBox^ pct3_article;
    private: System::Windows::Forms::TabControl^ tab_gestion_commande;
    private: System::Windows::Forms::TabPage^ tab_creer_commande;
    private: System::Windows::Forms::DataGridView^ bdd_creer_commande;






    private: System::Windows::Forms::Panel^ pn_creer_commande;
    private: System::Windows::Forms::TextBox^ tb_creer_moyen_paiement_commande;



    private: System::Windows::Forms::Label^ lb_creer_ref_commande;
    private: System::Windows::Forms::Label^ lb_creer_moyen_paiement_commande;
    private: System::Windows::Forms::TextBox^ tb_creer_ref_commande;




    private: System::Windows::Forms::TextBox^ tb_creer_emision_commande;
    private: System::Windows::Forms::TextBox^ tb_creer_nb_paiement_commande;


    private: System::Windows::Forms::Label^ lb_creer_emission_commande;

    private: System::Windows::Forms::Label^ lb_creer_nb_paiement_commande;
    private: System::Windows::Forms::Label^ lb_creer_livraison_commande;
    private: System::Windows::Forms::TextBox^ tb_creer_livraison_commande;



    private: System::Windows::Forms::TabPage^ tab_suppr_commande;
    private: System::Windows::Forms::Button^ btn_suppr_annuler_commande;


    private: System::Windows::Forms::Button^ btn_suppr_valider_commande;
    private: System::Windows::Forms::DataGridView^ bdd_suppr_commande;


    private: System::Windows::Forms::TextBox^ tb_suppr_id_commande;

    private: System::Windows::Forms::Label^ lb_suppr_id_commande;
    private: System::Windows::Forms::TabPage^ tab_affich_commade;


    private: System::Windows::Forms::TableLayoutPanel^ layout_affich_commande;
    private: System::Windows::Forms::Button^ btn_affich_valider_commande;
    private: System::Windows::Forms::Button^ btn_affich_autre_commande;















    private: System::Windows::Forms::TextBox^ tb_affich_id_commande;

    private: System::Windows::Forms::Label^ lb_affich_id_commande;
    private: System::Windows::Forms::TabPage^ tab_modif_commande;


    private: System::Windows::Forms::TableLayoutPanel^ layout_btn_commande;

    private: System::Windows::Forms::Button^ btn_modif_valider_commande;
    private: System::Windows::Forms::Button^ btn_modif_annuler_commande;


    private: System::Windows::Forms::Panel^ pn_modif_cacher_info_commande;

    private: System::Windows::Forms::TableLayoutPanel^ layout2_btn_modif_commande;
    private: System::Windows::Forms::Button^ btn_modif_actu_commande;


    private: System::Windows::Forms::Button^ btn_modif_commande;
    private: System::Windows::Forms::Button^ btn_modif_autre_commande;



    private: System::Windows::Forms::Label^ lb_modif_ref_commande;


    private: System::Windows::Forms::TextBox^ tb_modif_ref_commande;
    private: System::Windows::Forms::TextBox^ tb_modif_moyen_paiement_commande;


    private: System::Windows::Forms::TextBox^ tb_modif_emission_commande;

    private: System::Windows::Forms::Label^ lb_modif_moyen_paiement_commande;
    private: System::Windows::Forms::Label^ lb_modif_emission_commande;


    private: System::Windows::Forms::Label^ lb_modif_livraison_commande;
    private: System::Windows::Forms::TextBox^ tb_modif_livraison_commande;


    private: System::Windows::Forms::TextBox^ tb_modif_id_commande;

    private: System::Windows::Forms::Label^ lb_modif_id_commande;
    private: System::Windows::Forms::TableLayoutPanel^ layout_btn_creer_commande;









    private: System::Windows::Forms::Button^ btn_ajouter_article_commande;
    private: System::Windows::Forms::Button^ btn_creer_valider_base_commande;
    private: System::Windows::Forms::Button^ btn_ajouter_date_paiement;
    private: System::Windows::Forms::Label^ lb_creer_article_commande;
    private: System::Windows::Forms::TextBox^ tb_creer_article_commande;
    private: System::Windows::Forms::Panel^ pn_creer_article_commande;



    private: System::Windows::Forms::TextBox^ tb_creer_quantite_commande;

    private: System::Windows::Forms::Label^ lb_creer_quantite_commande;
    private: System::Windows::Forms::Panel^ pn_creer_paiement_commande;
    private: System::Windows::Forms::Button^ btn_creer_valider_paiement_commande;


    private: System::Windows::Forms::TextBox^ tb_creer_paiement_commande;
    private: System::Windows::Forms::Label^ lb_creer_paiement_commande;




    private: System::Windows::Forms::Button^ btn_creer_valider_article_commande;
    private: System::Windows::Forms::Panel^ pn_modif_fiche_commande;
    private: System::Windows::Forms::Label^ lb_modif_livraison_fiche_commande;
    private: System::Windows::Forms::Label^ lb_modif_moyen_paiement_fiche_commande;
    private: System::Windows::Forms::Label^ lb_modif_emission_fiche_commande;
    private: System::Windows::Forms::Label^ lb_modif_ref_fiche_commande;



	private: System::ComponentModel::IContainer^ components;

    
    private: System::Data::DataSet^ oDs;
private: System::Windows::Forms::DataGridView^ bdd_affich_cli;
private: System::Windows::Forms::DataGridView^ bdd_affich_perso;
private: System::Windows::Forms::DataGridView^ bdd_affich_article;
private: System::Windows::Forms::DataGridView^ bdd_affich_commande;
private: System::Windows::Forms::Label^ lb_creer_stock_article;
private: System::Windows::Forms::TextBox^ tb_creer_stock_article;


private: System::Windows::Forms::Label^ lb_creer_seuil_article;
private: System::Windows::Forms::TextBox^ tb_creer_seuil_article;
private: System::Windows::Forms::Label^ lb_modif_seuil_article;
private: System::Windows::Forms::TextBox^ tb_modif_seuil_article;
private: System::Windows::Forms::Label^ lb_modif_stock_article;
private: System::Windows::Forms::TextBox^ tb_modif_stock_article;






    private: NS_Comp_Svc::Requete^ oRqt;

	protected:
	protected:
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
            this->Titre = (gcnew System::Windows::Forms::Label());
            this->btn_gest_pers = (gcnew System::Windows::Forms::Button());
            this->btn_gest_client = (gcnew System::Windows::Forms::Button());
            this->btn_gest_commande = (gcnew System::Windows::Forms::Button());
            this->btn_gest_stock = (gcnew System::Windows::Forms::Button());
            this->btn_gest_stat = (gcnew System::Windows::Forms::Button());
            this->btn_menu = (gcnew System::Windows::Forms::Button());
            this->pn_menu = (gcnew System::Windows::Forms::Panel());
            this->btn_accueil = (gcnew System::Windows::Forms::Button());
            this->pn_haut = (gcnew System::Windows::Forms::Panel());
            this->btn_modif = (gcnew System::Windows::Forms::Button());
            this->btn_suppr = (gcnew System::Windows::Forms::Button());
            this->btn_affich = (gcnew System::Windows::Forms::Button());
            this->btn_creer = (gcnew System::Windows::Forms::Button());
            this->ptc_cerise = (gcnew System::Windows::Forms::PictureBox());
            this->tab_gest_pers = (gcnew System::Windows::Forms::TabControl());
            this->tab_pers_creer = (gcnew System::Windows::Forms::TabPage());
            this->pn_btn_creer_perso = (gcnew System::Windows::Forms::Panel());
            this->btn_creer_actualiser_perso = (gcnew System::Windows::Forms::Button());
            this->btn_creer_valider_perso = (gcnew System::Windows::Forms::Button());
            this->splitter1 = (gcnew System::Windows::Forms::Splitter());
            this->bdd_creer_perso = (gcnew System::Windows::Forms::DataGridView());
            this->pn_info_creer_perso = (gcnew System::Windows::Forms::Panel());
            this->pct_perso = (gcnew System::Windows::Forms::PictureBox());
            this->tb_creer_sup_perso = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_nom_perso = (gcnew System::Windows::Forms::Label());
            this->lb_creer_sup_perso = (gcnew System::Windows::Forms::Label());
            this->tb__creer_nom_perso = (gcnew System::Windows::Forms::TextBox());
            this->tb_creer_adresse_perso = (gcnew System::Windows::Forms::TextBox());
            this->tb__creer_prenom_perso = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_adresse_perso = (gcnew System::Windows::Forms::Label());
            this->lb_creer_prenom_perso = (gcnew System::Windows::Forms::Label());
            this->lb_creer_embauche_perso = (gcnew System::Windows::Forms::Label());
            this->tb__creer_embauche_perso = (gcnew System::Windows::Forms::TextBox());
            this->tab_pers_suppr = (gcnew System::Windows::Forms::TabPage());
            this->btn_suppr_annuler_perso = (gcnew System::Windows::Forms::Button());
            this->btn_suppr_valider_perso = (gcnew System::Windows::Forms::Button());
            this->bdd_suppr_perso = (gcnew System::Windows::Forms::DataGridView());
            this->tb_suppr_id_perso = (gcnew System::Windows::Forms::TextBox());
            this->lb_suppr_id_perso = (gcnew System::Windows::Forms::Label());
            this->tab_pers_affich = (gcnew System::Windows::Forms::TabPage());
            this->bdd_affich_perso = (gcnew System::Windows::Forms::DataGridView());
            this->layout_affich_perso = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_affich_valider_perso = (gcnew System::Windows::Forms::Button());
            this->btn_affich_autre_perso = (gcnew System::Windows::Forms::Button());
            this->tb_affich_id_perso = (gcnew System::Windows::Forms::TextBox());
            this->lb_affich_id_perso = (gcnew System::Windows::Forms::Label());
            this->tab_pers_modif = (gcnew System::Windows::Forms::TabPage());
            this->pn_cacher_info_modif_perso = (gcnew System::Windows::Forms::Panel());
            this->layout_modif_perso = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_modif_valider_perso = (gcnew System::Windows::Forms::Button());
            this->btn_modif_annuler_perso = (gcnew System::Windows::Forms::Button());
            this->layout2_modif_perso = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_modif_actu_fiche_perso = (gcnew System::Windows::Forms::Button());
            this->btn_valider_modif_perso = (gcnew System::Windows::Forms::Button());
            this->btn_modif_changer_perso = (gcnew System::Windows::Forms::Button());
            this->tb_modif_sup_perso = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_nom_perso = (gcnew System::Windows::Forms::Label());
            this->lb_modif_sup_perso = (gcnew System::Windows::Forms::Label());
            this->tb_modif_nom_perso = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_adresse_perso = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_prenom_perso = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_adresse_perso = (gcnew System::Windows::Forms::Label());
            this->lb_modif_prenom_perso = (gcnew System::Windows::Forms::Label());
            this->lb_modif_embauche_perso = (gcnew System::Windows::Forms::Label());
            this->tb_modif_embauche_perso = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_id_perso = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_id_perso = (gcnew System::Windows::Forms::Label());
            this->pn_modif_fiche_perso = (gcnew System::Windows::Forms::Panel());
            this->lb_modif_adresse_fiche_perso = (gcnew System::Windows::Forms::Label());
            this->lb_modif_sup_fiche_perso = (gcnew System::Windows::Forms::Label());
            this->lb_modif_embauche_fiche_perso = (gcnew System::Windows::Forms::Label());
            this->lb_modif_prenom_fiche_perso = (gcnew System::Windows::Forms::Label());
            this->lb_modif_nom_fiche_perso = (gcnew System::Windows::Forms::Label());
            this->pct_perso2 = (gcnew System::Windows::Forms::PictureBox());
            this->pn_centre = (gcnew System::Windows::Forms::Panel());
            this->tab_gestion_client = (gcnew System::Windows::Forms::TabControl());
            this->tab_creer_cli = (gcnew System::Windows::Forms::TabPage());
            this->pn_creer_btn_cli = (gcnew System::Windows::Forms::Panel());
            this->btn_creer_actu_cli = (gcnew System::Windows::Forms::Button());
            this->btn_creer_cli = (gcnew System::Windows::Forms::Button());
            this->splitter2 = (gcnew System::Windows::Forms::Splitter());
            this->bdd_creer_cli = (gcnew System::Windows::Forms::DataGridView());
            this->pn_creer_cli = (gcnew System::Windows::Forms::Panel());
            this->pct_cli = (gcnew System::Windows::Forms::PictureBox());
            this->tb_creer_facturation_cli = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_nom_cli = (gcnew System::Windows::Forms::Label());
            this->lb_creer_facturation_cli = (gcnew System::Windows::Forms::Label());
            this->tb_creer_nom_cli = (gcnew System::Windows::Forms::TextBox());
            this->tb_creer_livraison_cli = (gcnew System::Windows::Forms::TextBox());
            this->tb_creer_prenom_cli = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_livraison_cli = (gcnew System::Windows::Forms::Label());
            this->lb_creer_prenom_cli = (gcnew System::Windows::Forms::Label());
            this->lb_creer_naissance_cli = (gcnew System::Windows::Forms::Label());
            this->tb_creer_naissance_cli = (gcnew System::Windows::Forms::TextBox());
            this->tab_suppr_cli = (gcnew System::Windows::Forms::TabPage());
            this->btn_suppr_annuler_cli = (gcnew System::Windows::Forms::Button());
            this->btn_suppr_valider_cli = (gcnew System::Windows::Forms::Button());
            this->bdd_suppr_cli = (gcnew System::Windows::Forms::DataGridView());
            this->tb_suppr_id_cli = (gcnew System::Windows::Forms::TextBox());
            this->lb_suppr__id_cli = (gcnew System::Windows::Forms::Label());
            this->tab_affich_cli = (gcnew System::Windows::Forms::TabPage());
            this->bdd_affich_cli = (gcnew System::Windows::Forms::DataGridView());
            this->layout_affich_cli = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_affich_valider_cli = (gcnew System::Windows::Forms::Button());
            this->btn_affich_autre_cli = (gcnew System::Windows::Forms::Button());
            this->tb_affich_id_cli = (gcnew System::Windows::Forms::TextBox());
            this->lb_affich_id_cli = (gcnew System::Windows::Forms::Label());
            this->tab_modif_cli = (gcnew System::Windows::Forms::TabPage());
            this->pn_modif_cacher_info_cli = (gcnew System::Windows::Forms::Panel());
            this->layout_modif_cli = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_modif_valider_cli = (gcnew System::Windows::Forms::Button());
            this->btn_modif_annuler_cli = (gcnew System::Windows::Forms::Button());
            this->layout2_modif_cli = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_modif_actu_cli = (gcnew System::Windows::Forms::Button());
            this->btn_modif_cli = (gcnew System::Windows::Forms::Button());
            this->btn_modif_autre_cli = (gcnew System::Windows::Forms::Button());
            this->lb_modif_nom_cli = (gcnew System::Windows::Forms::Label());
            this->lb_modif_livraison_cli = (gcnew System::Windows::Forms::Label());
            this->tb_modif_nom_cli = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_facturation_cli = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_prenom_cli = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_facturation_cli = (gcnew System::Windows::Forms::Label());
            this->lb_modif_prenomcli = (gcnew System::Windows::Forms::Label());
            this->lb_modif_naissance_cli = (gcnew System::Windows::Forms::Label());
            this->tb_modif_naissance_cli = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_id_cli = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_id_cli = (gcnew System::Windows::Forms::Label());
            this->pn_modif_fiche_cli = (gcnew System::Windows::Forms::Panel());
            this->lb_modif_livraison_fiche_cli = (gcnew System::Windows::Forms::Label());
            this->lb_modif_facturation_fiche_client = (gcnew System::Windows::Forms::Label());
            this->lb_modif_naissance_fiche_cli = (gcnew System::Windows::Forms::Label());
            this->lb_modif_prenom_fiche_cli = (gcnew System::Windows::Forms::Label());
            this->lb_modif_nom_fiche_cli = (gcnew System::Windows::Forms::Label());
            this->pct3_cli = (gcnew System::Windows::Forms::PictureBox());
            this->tb_modif_livraison_cli = (gcnew System::Windows::Forms::TextBox());
            this->tab_gestion_stock = (gcnew System::Windows::Forms::TabControl());
            this->tab_modif_article = (gcnew System::Windows::Forms::TabPage());
            this->pn_modif_cacher_info_article = (gcnew System::Windows::Forms::Panel());
            this->layout_affich_btn_article = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_modif_valider_article = (gcnew System::Windows::Forms::Button());
            this->btn_affich_annuler_article = (gcnew System::Windows::Forms::Button());
            this->lb_modif_seuil_article = (gcnew System::Windows::Forms::Label());
            this->tb_modif_seuil_article = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_stock_article = (gcnew System::Windows::Forms::Label());
            this->tb_modif_stock_article = (gcnew System::Windows::Forms::TextBox());
            this->pn_modif_fiche_article = (gcnew System::Windows::Forms::Panel());
            this->lb_modif_prix_fiche_article = (gcnew System::Windows::Forms::Label());
            this->lb_modif_couleur_fiche_article = (gcnew System::Windows::Forms::Label());
            this->lb_modif_nom_fiche_article = (gcnew System::Windows::Forms::Label());
            this->pct3_article = (gcnew System::Windows::Forms::PictureBox());
            this->layout2_modif_btn_article = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_modif_actu_article = (gcnew System::Windows::Forms::Button());
            this->btn_modif_article = (gcnew System::Windows::Forms::Button());
            this->btn_modif_autre_article = (gcnew System::Windows::Forms::Button());
            this->lb_modif_nom_article = (gcnew System::Windows::Forms::Label());
            this->tb_modif_nom_article = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_prix_article = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_prix_article = (gcnew System::Windows::Forms::Label());
            this->lb_modif_couleur_article = (gcnew System::Windows::Forms::Label());
            this->tb_modif_couleur_article = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_id_article = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_id_article = (gcnew System::Windows::Forms::Label());
            this->tab_creer_article = (gcnew System::Windows::Forms::TabPage());
            this->pn_creer_btn_article = (gcnew System::Windows::Forms::Panel());
            this->btn_creer_actu_article = (gcnew System::Windows::Forms::Button());
            this->btn_creer_article = (gcnew System::Windows::Forms::Button());
            this->splitter3 = (gcnew System::Windows::Forms::Splitter());
            this->bdd_creer_article = (gcnew System::Windows::Forms::DataGridView());
            this->pn_creer_article = (gcnew System::Windows::Forms::Panel());
            this->lb_creer_stock_article = (gcnew System::Windows::Forms::Label());
            this->tb_creer_stock_article = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_seuil_article = (gcnew System::Windows::Forms::Label());
            this->tb_creer_seuil_article = (gcnew System::Windows::Forms::TextBox());
            this->pct_article = (gcnew System::Windows::Forms::PictureBox());
            this->lb_creer_nom_artcile = (gcnew System::Windows::Forms::Label());
            this->tb_creer_nom_article = (gcnew System::Windows::Forms::TextBox());
            this->tb_creer_prix_article = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_prix_article = (gcnew System::Windows::Forms::Label());
            this->lb_creer_couleur_article = (gcnew System::Windows::Forms::Label());
            this->tb_creer_couleur_article = (gcnew System::Windows::Forms::TextBox());
            this->tab_suppr_article = (gcnew System::Windows::Forms::TabPage());
            this->btn_suppr_annuler_article = (gcnew System::Windows::Forms::Button());
            this->btn_suppr_valider_article = (gcnew System::Windows::Forms::Button());
            this->bdd_suppr_article = (gcnew System::Windows::Forms::DataGridView());
            this->tb_suppr_id_article = (gcnew System::Windows::Forms::TextBox());
            this->lb_suppr_id_article = (gcnew System::Windows::Forms::Label());
            this->tab_affich_article = (gcnew System::Windows::Forms::TabPage());
            this->bdd_affich_article = (gcnew System::Windows::Forms::DataGridView());
            this->layout_affich_article = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_affich_valider_article = (gcnew System::Windows::Forms::Button());
            this->btn_affich_autre_article = (gcnew System::Windows::Forms::Button());
            this->tb_affich_id_article = (gcnew System::Windows::Forms::TextBox());
            this->lb_affich_id_article = (gcnew System::Windows::Forms::Label());
            this->tab_gestion_commande = (gcnew System::Windows::Forms::TabControl());
            this->tab_creer_commande = (gcnew System::Windows::Forms::TabPage());
            this->layout_btn_creer_commande = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_ajouter_article_commande = (gcnew System::Windows::Forms::Button());
            this->btn_creer_valider_base_commande = (gcnew System::Windows::Forms::Button());
            this->btn_ajouter_date_paiement = (gcnew System::Windows::Forms::Button());
            this->bdd_creer_commande = (gcnew System::Windows::Forms::DataGridView());
            this->pn_creer_commande = (gcnew System::Windows::Forms::Panel());
            this->tb_creer_moyen_paiement_commande = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_ref_commande = (gcnew System::Windows::Forms::Label());
            this->lb_creer_moyen_paiement_commande = (gcnew System::Windows::Forms::Label());
            this->tb_creer_ref_commande = (gcnew System::Windows::Forms::TextBox());
            this->tb_creer_emision_commande = (gcnew System::Windows::Forms::TextBox());
            this->tb_creer_nb_paiement_commande = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_emission_commande = (gcnew System::Windows::Forms::Label());
            this->lb_creer_nb_paiement_commande = (gcnew System::Windows::Forms::Label());
            this->lb_creer_livraison_commande = (gcnew System::Windows::Forms::Label());
            this->tb_creer_livraison_commande = (gcnew System::Windows::Forms::TextBox());
            this->pn_creer_article_commande = (gcnew System::Windows::Forms::Panel());
            this->btn_creer_valider_article_commande = (gcnew System::Windows::Forms::Button());
            this->tb_creer_quantite_commande = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_quantite_commande = (gcnew System::Windows::Forms::Label());
            this->tb_creer_article_commande = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_article_commande = (gcnew System::Windows::Forms::Label());
            this->pn_creer_paiement_commande = (gcnew System::Windows::Forms::Panel());
            this->btn_creer_valider_paiement_commande = (gcnew System::Windows::Forms::Button());
            this->tb_creer_paiement_commande = (gcnew System::Windows::Forms::TextBox());
            this->lb_creer_paiement_commande = (gcnew System::Windows::Forms::Label());
            this->tab_suppr_commande = (gcnew System::Windows::Forms::TabPage());
            this->btn_suppr_annuler_commande = (gcnew System::Windows::Forms::Button());
            this->btn_suppr_valider_commande = (gcnew System::Windows::Forms::Button());
            this->bdd_suppr_commande = (gcnew System::Windows::Forms::DataGridView());
            this->tb_suppr_id_commande = (gcnew System::Windows::Forms::TextBox());
            this->lb_suppr_id_commande = (gcnew System::Windows::Forms::Label());
            this->tab_affich_commade = (gcnew System::Windows::Forms::TabPage());
            this->bdd_affich_commande = (gcnew System::Windows::Forms::DataGridView());
            this->layout_affich_commande = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_affich_valider_commande = (gcnew System::Windows::Forms::Button());
            this->btn_affich_autre_commande = (gcnew System::Windows::Forms::Button());
            this->tb_affich_id_commande = (gcnew System::Windows::Forms::TextBox());
            this->lb_affich_id_commande = (gcnew System::Windows::Forms::Label());
            this->tab_modif_commande = (gcnew System::Windows::Forms::TabPage());
            this->pn_modif_cacher_info_commande = (gcnew System::Windows::Forms::Panel());
            this->layout_btn_commande = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_modif_valider_commande = (gcnew System::Windows::Forms::Button());
            this->btn_modif_annuler_commande = (gcnew System::Windows::Forms::Button());
            this->pn_modif_fiche_commande = (gcnew System::Windows::Forms::Panel());
            this->lb_modif_livraison_fiche_commande = (gcnew System::Windows::Forms::Label());
            this->lb_modif_moyen_paiement_fiche_commande = (gcnew System::Windows::Forms::Label());
            this->lb_modif_emission_fiche_commande = (gcnew System::Windows::Forms::Label());
            this->lb_modif_ref_fiche_commande = (gcnew System::Windows::Forms::Label());
            this->layout2_btn_modif_commande = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_modif_actu_commande = (gcnew System::Windows::Forms::Button());
            this->btn_modif_commande = (gcnew System::Windows::Forms::Button());
            this->btn_modif_autre_commande = (gcnew System::Windows::Forms::Button());
            this->lb_modif_ref_commande = (gcnew System::Windows::Forms::Label());
            this->tb_modif_ref_commande = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_moyen_paiement_commande = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_emission_commande = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_moyen_paiement_commande = (gcnew System::Windows::Forms::Label());
            this->lb_modif_emission_commande = (gcnew System::Windows::Forms::Label());
            this->lb_modif_livraison_commande = (gcnew System::Windows::Forms::Label());
            this->tb_modif_livraison_commande = (gcnew System::Windows::Forms::TextBox());
            this->tb_modif_id_commande = (gcnew System::Windows::Forms::TextBox());
            this->lb_modif_id_commande = (gcnew System::Windows::Forms::Label());
            this->pn_menu->SuspendLayout();
            this->pn_haut->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptc_cerise))->BeginInit();
            this->tab_gest_pers->SuspendLayout();
            this->tab_pers_creer->SuspendLayout();
            this->pn_btn_creer_perso->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_creer_perso))->BeginInit();
            this->pn_info_creer_perso->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct_perso))->BeginInit();
            this->tab_pers_suppr->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_suppr_perso))->BeginInit();
            this->tab_pers_affich->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_affich_perso))->BeginInit();
            this->layout_affich_perso->SuspendLayout();
            this->tab_pers_modif->SuspendLayout();
            this->pn_cacher_info_modif_perso->SuspendLayout();
            this->layout_modif_perso->SuspendLayout();
            this->layout2_modif_perso->SuspendLayout();
            this->pn_modif_fiche_perso->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct_perso2))->BeginInit();
            this->pn_centre->SuspendLayout();
            this->tab_gestion_client->SuspendLayout();
            this->tab_creer_cli->SuspendLayout();
            this->pn_creer_btn_cli->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_creer_cli))->BeginInit();
            this->pn_creer_cli->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct_cli))->BeginInit();
            this->tab_suppr_cli->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_suppr_cli))->BeginInit();
            this->tab_affich_cli->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_affich_cli))->BeginInit();
            this->layout_affich_cli->SuspendLayout();
            this->tab_modif_cli->SuspendLayout();
            this->pn_modif_cacher_info_cli->SuspendLayout();
            this->layout_modif_cli->SuspendLayout();
            this->layout2_modif_cli->SuspendLayout();
            this->pn_modif_fiche_cli->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct3_cli))->BeginInit();
            this->tab_gestion_stock->SuspendLayout();
            this->tab_modif_article->SuspendLayout();
            this->pn_modif_cacher_info_article->SuspendLayout();
            this->layout_affich_btn_article->SuspendLayout();
            this->pn_modif_fiche_article->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct3_article))->BeginInit();
            this->layout2_modif_btn_article->SuspendLayout();
            this->tab_creer_article->SuspendLayout();
            this->pn_creer_btn_article->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_creer_article))->BeginInit();
            this->pn_creer_article->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct_article))->BeginInit();
            this->tab_suppr_article->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_suppr_article))->BeginInit();
            this->tab_affich_article->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_affich_article))->BeginInit();
            this->layout_affich_article->SuspendLayout();
            this->tab_gestion_commande->SuspendLayout();
            this->tab_creer_commande->SuspendLayout();
            this->layout_btn_creer_commande->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_creer_commande))->BeginInit();
            this->pn_creer_commande->SuspendLayout();
            this->pn_creer_article_commande->SuspendLayout();
            this->pn_creer_paiement_commande->SuspendLayout();
            this->tab_suppr_commande->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_suppr_commande))->BeginInit();
            this->tab_affich_commade->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_affich_commande))->BeginInit();
            this->layout_affich_commande->SuspendLayout();
            this->tab_modif_commande->SuspendLayout();
            this->pn_modif_cacher_info_commande->SuspendLayout();
            this->layout_btn_commande->SuspendLayout();
            this->pn_modif_fiche_commande->SuspendLayout();
            this->layout2_btn_modif_commande->SuspendLayout();
            this->SuspendLayout();
            // 
            // Titre
            // 
            this->Titre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Titre->BackColor = System::Drawing::Color::Transparent;
            this->Titre->Font = (gcnew System::Drawing::Font(L"KATANA", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Titre->ForeColor = System::Drawing::Color::SeaShell;
            this->Titre->Location = System::Drawing::Point(3, 3);
            this->Titre->Name = L"Titre";
            this->Titre->Size = System::Drawing::Size(1353, 74);
            this->Titre->TabIndex = 0;
            this->Titre->Text = L"Kokoyo";
            this->Titre->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // btn_gest_pers
            // 
            this->btn_gest_pers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->btn_gest_pers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_gest_pers->FlatAppearance->BorderSize = 0;
            this->btn_gest_pers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_gest_pers->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_gest_pers->ForeColor = System::Drawing::Color::White;
            this->btn_gest_pers->Location = System::Drawing::Point(3, 67);
            this->btn_gest_pers->Name = L"btn_gest_pers";
            this->btn_gest_pers->Size = System::Drawing::Size(0, 58);
            this->btn_gest_pers->TabIndex = 29;
            this->btn_gest_pers->Text = L"Gestion du personnel";
            this->btn_gest_pers->UseVisualStyleBackColor = false;
            this->btn_gest_pers->Click += gcnew System::EventHandler(this, &MainForm::btn_gest_pers_Click);
            // 
            // btn_gest_client
            // 
            this->btn_gest_client->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->btn_gest_client->FlatAppearance->BorderSize = 0;
            this->btn_gest_client->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_gest_client->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_gest_client->ForeColor = System::Drawing::Color::White;
            this->btn_gest_client->Location = System::Drawing::Point(3, 131);
            this->btn_gest_client->Name = L"btn_gest_client";
            this->btn_gest_client->Size = System::Drawing::Size(0, 58);
            this->btn_gest_client->TabIndex = 2;
            this->btn_gest_client->Text = L"Gestion des clients";
            this->btn_gest_client->UseVisualStyleBackColor = true;
            this->btn_gest_client->Click += gcnew System::EventHandler(this, &MainForm::btn_gest_client_Click);
            // 
            // btn_gest_commande
            // 
            this->btn_gest_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->btn_gest_commande->FlatAppearance->BorderSize = 0;
            this->btn_gest_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_gest_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_gest_commande->ForeColor = System::Drawing::Color::White;
            this->btn_gest_commande->Location = System::Drawing::Point(3, 195);
            this->btn_gest_commande->Name = L"btn_gest_commande";
            this->btn_gest_commande->Size = System::Drawing::Size(0, 58);
            this->btn_gest_commande->TabIndex = 3;
            this->btn_gest_commande->Text = L"Gestion des commandes";
            this->btn_gest_commande->UseVisualStyleBackColor = true;
            this->btn_gest_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_gest_commande_Click);
            // 
            // btn_gest_stock
            // 
            this->btn_gest_stock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->btn_gest_stock->FlatAppearance->BorderSize = 0;
            this->btn_gest_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_gest_stock->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_gest_stock->ForeColor = System::Drawing::Color::White;
            this->btn_gest_stock->Location = System::Drawing::Point(3, 259);
            this->btn_gest_stock->Name = L"btn_gest_stock";
            this->btn_gest_stock->Size = System::Drawing::Size(0, 58);
            this->btn_gest_stock->TabIndex = 4;
            this->btn_gest_stock->Text = L"Gestion du stock";
            this->btn_gest_stock->UseVisualStyleBackColor = true;
            this->btn_gest_stock->Click += gcnew System::EventHandler(this, &MainForm::btn_gest_stock_Click);
            // 
            // btn_gest_stat
            // 
            this->btn_gest_stat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->btn_gest_stat->FlatAppearance->BorderSize = 0;
            this->btn_gest_stat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_gest_stat->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_gest_stat->ForeColor = System::Drawing::Color::White;
            this->btn_gest_stat->Location = System::Drawing::Point(3, 323);
            this->btn_gest_stat->Name = L"btn_gest_stat";
            this->btn_gest_stat->Size = System::Drawing::Size(0, 58);
            this->btn_gest_stat->TabIndex = 5;
            this->btn_gest_stat->Text = L"Gestion des statistiques";
            this->btn_gest_stat->UseVisualStyleBackColor = true;
            // 
            // btn_menu
            // 
            this->btn_menu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->btn_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)));
            this->btn_menu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_menu->FlatAppearance->BorderSize = 0;
            this->btn_menu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_menu->Location = System::Drawing::Point(3, 3);
            this->btn_menu->Name = L"btn_menu";
            this->btn_menu->Size = System::Drawing::Size(99, 82);
            this->btn_menu->TabIndex = 29;
            this->btn_menu->UseVisualStyleBackColor = false;
            this->btn_menu->Click += gcnew System::EventHandler(this, &MainForm::btn_menu_Click);
            // 
            // pn_menu
            // 
            this->pn_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)));
            this->pn_menu->Controls->Add(this->btn_accueil);
            this->pn_menu->Controls->Add(this->btn_gest_pers);
            this->pn_menu->Controls->Add(this->btn_gest_client);
            this->pn_menu->Controls->Add(this->btn_gest_commande);
            this->pn_menu->Controls->Add(this->btn_gest_stock);
            this->pn_menu->Controls->Add(this->btn_gest_stat);
            this->pn_menu->Dock = System::Windows::Forms::DockStyle::Left;
            this->pn_menu->Location = System::Drawing::Point(0, 88);
            this->pn_menu->Name = L"pn_menu";
            this->pn_menu->Size = System::Drawing::Size(0, 515);
            this->pn_menu->TabIndex = 30;
            // 
            // btn_accueil
            // 
            this->btn_accueil->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->btn_accueil->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_accueil->FlatAppearance->BorderSize = 0;
            this->btn_accueil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_accueil->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_accueil->ForeColor = System::Drawing::Color::White;
            this->btn_accueil->Location = System::Drawing::Point(0, 3);
            this->btn_accueil->Name = L"btn_accueil";
            this->btn_accueil->Size = System::Drawing::Size(0, 58);
            this->btn_accueil->TabIndex = 30;
            this->btn_accueil->Text = L"Accueil";
            this->btn_accueil->UseVisualStyleBackColor = false;
            this->btn_accueil->Click += gcnew System::EventHandler(this, &MainForm::btn_accueil_Click);
            // 
            // pn_haut
            // 
            this->pn_haut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)));
            this->pn_haut->Controls->Add(this->btn_menu);
            this->pn_haut->Controls->Add(this->Titre);
            this->pn_haut->Dock = System::Windows::Forms::DockStyle::Top;
            this->pn_haut->Location = System::Drawing::Point(0, 0);
            this->pn_haut->Name = L"pn_haut";
            this->pn_haut->Size = System::Drawing::Size(1359, 88);
            this->pn_haut->TabIndex = 31;
            // 
            // btn_modif
            // 
            this->btn_modif->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_modif->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->btn_modif->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_modif->FlatAppearance->BorderSize = 0;
            this->btn_modif->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif->ForeColor = System::Drawing::Color::White;
            this->btn_modif->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
            this->btn_modif->Location = System::Drawing::Point(217, 286);
            this->btn_modif->Name = L"btn_modif";
            this->btn_modif->Size = System::Drawing::Size(408, 208);
            this->btn_modif->TabIndex = 11;
            this->btn_modif->UseVisualStyleBackColor = false;
            this->btn_modif->Visible = false;
            this->btn_modif->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_Click);
            // 
            // btn_suppr
            // 
            this->btn_suppr->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_suppr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
                static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_suppr->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_suppr->FlatAppearance->BorderSize = 0;
            this->btn_suppr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_suppr->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_suppr->ForeColor = System::Drawing::Color::White;
            this->btn_suppr->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
            this->btn_suppr->Location = System::Drawing::Point(735, 20);
            this->btn_suppr->Name = L"btn_suppr";
            this->btn_suppr->Size = System::Drawing::Size(408, 208);
            this->btn_suppr->TabIndex = 10;
            this->btn_suppr->UseVisualStyleBackColor = false;
            this->btn_suppr->Visible = false;
            this->btn_suppr->Click += gcnew System::EventHandler(this, &MainForm::btn_suppr_Click);
            // 
            // btn_affich
            // 
            this->btn_affich->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
                static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->btn_affich->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_affich->FlatAppearance->BorderSize = 0;
            this->btn_affich->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_affich->ForeColor = System::Drawing::Color::White;
            this->btn_affich->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
            this->btn_affich->Location = System::Drawing::Point(735, 285);
            this->btn_affich->Name = L"btn_affich";
            this->btn_affich->Size = System::Drawing::Size(408, 208);
            this->btn_affich->TabIndex = 9;
            this->btn_affich->UseVisualStyleBackColor = false;
            this->btn_affich->Visible = false;
            this->btn_affich->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_Click);
            // 
            // btn_creer
            // 
            this->btn_creer->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_creer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
                static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_creer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_creer->FlatAppearance->BorderSize = 0;
            this->btn_creer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_creer->ForeColor = System::Drawing::Color::White;
            this->btn_creer->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
            this->btn_creer->Location = System::Drawing::Point(217, 20);
            this->btn_creer->Name = L"btn_creer";
            this->btn_creer->Size = System::Drawing::Size(408, 208);
            this->btn_creer->TabIndex = 27;
            this->btn_creer->UseVisualStyleBackColor = false;
            this->btn_creer->Visible = false;
            this->btn_creer->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_Click);
            // 
            // ptc_cerise
            // 
            this->ptc_cerise->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ptc_cerise->Location = System::Drawing::Point(0, 0);
            this->ptc_cerise->Name = L"ptc_cerise";
            this->ptc_cerise->Size = System::Drawing::Size(1359, 515);
            this->ptc_cerise->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->ptc_cerise->TabIndex = 28;
            this->ptc_cerise->TabStop = false;
            // 
            // tab_gest_pers
            // 
            this->tab_gest_pers->Controls->Add(this->tab_pers_creer);
            this->tab_gest_pers->Controls->Add(this->tab_pers_suppr);
            this->tab_gest_pers->Controls->Add(this->tab_pers_affich);
            this->tab_gest_pers->Controls->Add(this->tab_pers_modif);
            this->tab_gest_pers->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tab_gest_pers->Location = System::Drawing::Point(0, 88);
            this->tab_gest_pers->Name = L"tab_gest_pers";
            this->tab_gest_pers->SelectedIndex = 0;
            this->tab_gest_pers->Size = System::Drawing::Size(1359, 515);
            this->tab_gest_pers->TabIndex = 29;
            this->tab_gest_pers->Visible = false;
            // 
            // tab_pers_creer
            // 
            this->tab_pers_creer->BackColor = System::Drawing::Color::Bisque;
            this->tab_pers_creer->Controls->Add(this->pn_btn_creer_perso);
            this->tab_pers_creer->Controls->Add(this->bdd_creer_perso);
            this->tab_pers_creer->Controls->Add(this->pn_info_creer_perso);
            this->tab_pers_creer->Location = System::Drawing::Point(4, 25);
            this->tab_pers_creer->Name = L"tab_pers_creer";
            this->tab_pers_creer->Padding = System::Windows::Forms::Padding(3);
            this->tab_pers_creer->Size = System::Drawing::Size(1351, 486);
            this->tab_pers_creer->TabIndex = 0;
            this->tab_pers_creer->Text = L"Creer un membre du personnel";
            // 
            // pn_btn_creer_perso
            // 
            this->pn_btn_creer_perso->Controls->Add(this->btn_creer_actualiser_perso);
            this->pn_btn_creer_perso->Controls->Add(this->btn_creer_valider_perso);
            this->pn_btn_creer_perso->Controls->Add(this->splitter1);
            this->pn_btn_creer_perso->Location = System::Drawing::Point(12, 389);
            this->pn_btn_creer_perso->Name = L"pn_btn_creer_perso";
            this->pn_btn_creer_perso->Size = System::Drawing::Size(678, 89);
            this->pn_btn_creer_perso->TabIndex = 14;
            // 
            // btn_creer_actualiser_perso
            // 
            this->btn_creer_actualiser_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_creer_actualiser_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->btn_creer_actualiser_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer_actualiser_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_creer_actualiser_perso->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_creer_actualiser_perso->Location = System::Drawing::Point(351, 3);
            this->btn_creer_actualiser_perso->Name = L"btn_creer_actualiser_perso";
            this->btn_creer_actualiser_perso->Size = System::Drawing::Size(324, 83);
            this->btn_creer_actualiser_perso->TabIndex = 2;
            this->btn_creer_actualiser_perso->Text = L"Actualiser l\'affichage de la base de donnees";
            this->btn_creer_actualiser_perso->UseVisualStyleBackColor = false;
            this->btn_creer_actualiser_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_actualiser_perso_Click);
            // 
            // btn_creer_valider_perso
            // 
            this->btn_creer_valider_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_creer_valider_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->btn_creer_valider_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer_valider_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_creer_valider_perso->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_creer_valider_perso->Location = System::Drawing::Point(3, 3);
            this->btn_creer_valider_perso->Name = L"btn_creer_valider_perso";
            this->btn_creer_valider_perso->Size = System::Drawing::Size(333, 83);
            this->btn_creer_valider_perso->TabIndex = 1;
            this->btn_creer_valider_perso->Text = L"Creer le membre du personnel";
            this->btn_creer_valider_perso->UseVisualStyleBackColor = false;
            this->btn_creer_valider_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_valider_perso_Click);
            // 
            // splitter1
            // 
            this->splitter1->Location = System::Drawing::Point(0, 0);
            this->splitter1->Name = L"splitter1";
            this->splitter1->Size = System::Drawing::Size(345, 89);
            this->splitter1->TabIndex = 0;
            this->splitter1->TabStop = false;
            // 
            // bdd_creer_perso
            // 
            this->bdd_creer_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_creer_perso->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_creer_perso->Location = System::Drawing::Point(693, 0);
            this->bdd_creer_perso->Name = L"bdd_creer_perso";
            this->bdd_creer_perso->RowHeadersWidth = 51;
            this->bdd_creer_perso->RowTemplate->Height = 24;
            this->bdd_creer_perso->Size = System::Drawing::Size(634, 478);
            this->bdd_creer_perso->TabIndex = 6;
            // 
            // pn_info_creer_perso
            // 
            this->pn_info_creer_perso->Controls->Add(this->pct_perso);
            this->pn_info_creer_perso->Controls->Add(this->tb_creer_sup_perso);
            this->pn_info_creer_perso->Controls->Add(this->lb_creer_nom_perso);
            this->pn_info_creer_perso->Controls->Add(this->lb_creer_sup_perso);
            this->pn_info_creer_perso->Controls->Add(this->tb__creer_nom_perso);
            this->pn_info_creer_perso->Controls->Add(this->tb_creer_adresse_perso);
            this->pn_info_creer_perso->Controls->Add(this->tb__creer_prenom_perso);
            this->pn_info_creer_perso->Controls->Add(this->lb_creer_adresse_perso);
            this->pn_info_creer_perso->Controls->Add(this->lb_creer_prenom_perso);
            this->pn_info_creer_perso->Controls->Add(this->lb_creer_embauche_perso);
            this->pn_info_creer_perso->Controls->Add(this->tb__creer_embauche_perso);
            this->pn_info_creer_perso->Location = System::Drawing::Point(8, 6);
            this->pn_info_creer_perso->Name = L"pn_info_creer_perso";
            this->pn_info_creer_perso->Size = System::Drawing::Size(682, 380);
            this->pn_info_creer_perso->TabIndex = 15;
            // 
            // pct_perso
            // 
            this->pct_perso->Location = System::Drawing::Point(334, 4);
            this->pct_perso->Name = L"pct_perso";
            this->pct_perso->Size = System::Drawing::Size(345, 370);
            this->pct_perso->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pct_perso->TabIndex = 7;
            this->pct_perso->TabStop = false;
            // 
            // tb_creer_sup_perso
            // 
            this->tb_creer_sup_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_sup_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_sup_perso->Location = System::Drawing::Point(7, 304);
            this->tb_creer_sup_perso->Name = L"tb_creer_sup_perso";
            this->tb_creer_sup_perso->Size = System::Drawing::Size(321, 36);
            this->tb_creer_sup_perso->TabIndex = 11;
            // 
            // lb_creer_nom_perso
            // 
            this->lb_creer_nom_perso->AutoSize = true;
            this->lb_creer_nom_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_nom_perso->Location = System::Drawing::Point(11, 39);
            this->lb_creer_nom_perso->Name = L"lb_creer_nom_perso";
            this->lb_creer_nom_perso->Size = System::Drawing::Size(79, 22);
            this->lb_creer_nom_perso->TabIndex = 1;
            this->lb_creer_nom_perso->Text = L"Nom :";
            // 
            // lb_creer_sup_perso
            // 
            this->lb_creer_sup_perso->AutoSize = true;
            this->lb_creer_sup_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_sup_perso->Location = System::Drawing::Point(9, 279);
            this->lb_creer_sup_perso->Name = L"lb_creer_sup_perso";
            this->lb_creer_sup_perso->Size = System::Drawing::Size(203, 22);
            this->lb_creer_sup_perso->TabIndex = 10;
            this->lb_creer_sup_perso->Text = L"ID superieur :";
            // 
            // tb__creer_nom_perso
            // 
            this->tb__creer_nom_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb__creer_nom_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb__creer_nom_perso->Location = System::Drawing::Point(94, 33);
            this->tb__creer_nom_perso->Name = L"tb__creer_nom_perso";
            this->tb__creer_nom_perso->Size = System::Drawing::Size(231, 36);
            this->tb__creer_nom_perso->TabIndex = 0;
            // 
            // tb_creer_adresse_perso
            // 
            this->tb_creer_adresse_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_adresse_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_adresse_perso->Location = System::Drawing::Point(7, 235);
            this->tb_creer_adresse_perso->Name = L"tb_creer_adresse_perso";
            this->tb_creer_adresse_perso->Size = System::Drawing::Size(321, 36);
            this->tb_creer_adresse_perso->TabIndex = 9;
            // 
            // tb__creer_prenom_perso
            // 
            this->tb__creer_prenom_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb__creer_prenom_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb__creer_prenom_perso->Location = System::Drawing::Point(144, 86);
            this->tb__creer_prenom_perso->Name = L"tb__creer_prenom_perso";
            this->tb__creer_prenom_perso->Size = System::Drawing::Size(181, 36);
            this->tb__creer_prenom_perso->TabIndex = 3;
            // 
            // lb_creer_adresse_perso
            // 
            this->lb_creer_adresse_perso->AutoSize = true;
            this->lb_creer_adresse_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_adresse_perso->Location = System::Drawing::Point(5, 210);
            this->lb_creer_adresse_perso->Name = L"lb_creer_adresse_perso";
            this->lb_creer_adresse_perso->Size = System::Drawing::Size(145, 22);
            this->lb_creer_adresse_perso->TabIndex = 8;
            this->lb_creer_adresse_perso->Text = L"Adresse :";
            // 
            // lb_creer_prenom_perso
            // 
            this->lb_creer_prenom_perso->AutoSize = true;
            this->lb_creer_prenom_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_prenom_perso->Location = System::Drawing::Point(9, 92);
            this->lb_creer_prenom_perso->Name = L"lb_creer_prenom_perso";
            this->lb_creer_prenom_perso->Size = System::Drawing::Size(133, 22);
            this->lb_creer_prenom_perso->TabIndex = 2;
            this->lb_creer_prenom_perso->Text = L"PRENOM :";
            // 
            // lb_creer_embauche_perso
            // 
            this->lb_creer_embauche_perso->AutoSize = true;
            this->lb_creer_embauche_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_embauche_perso->Location = System::Drawing::Point(9, 141);
            this->lb_creer_embauche_perso->Name = L"lb_creer_embauche_perso";
            this->lb_creer_embauche_perso->Size = System::Drawing::Size(273, 22);
            this->lb_creer_embauche_perso->TabIndex = 4;
            this->lb_creer_embauche_perso->Text = L"Date d\'embauche :";
            // 
            // tb__creer_embauche_perso
            // 
            this->tb__creer_embauche_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb__creer_embauche_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb__creer_embauche_perso->Location = System::Drawing::Point(4, 166);
            this->tb__creer_embauche_perso->Name = L"tb__creer_embauche_perso";
            this->tb__creer_embauche_perso->Size = System::Drawing::Size(321, 36);
            this->tb__creer_embauche_perso->TabIndex = 5;
            // 
            // tab_pers_suppr
            // 
            this->tab_pers_suppr->BackColor = System::Drawing::Color::Bisque;
            this->tab_pers_suppr->Controls->Add(this->btn_suppr_annuler_perso);
            this->tab_pers_suppr->Controls->Add(this->btn_suppr_valider_perso);
            this->tab_pers_suppr->Controls->Add(this->bdd_suppr_perso);
            this->tab_pers_suppr->Controls->Add(this->tb_suppr_id_perso);
            this->tab_pers_suppr->Controls->Add(this->lb_suppr_id_perso);
            this->tab_pers_suppr->Location = System::Drawing::Point(4, 25);
            this->tab_pers_suppr->Name = L"tab_pers_suppr";
            this->tab_pers_suppr->Padding = System::Windows::Forms::Padding(3);
            this->tab_pers_suppr->Size = System::Drawing::Size(1351, 486);
            this->tab_pers_suppr->TabIndex = 2;
            this->tab_pers_suppr->Text = L"Supprimer un membre du personnel";
            // 
            // btn_suppr_annuler_perso
            // 
            this->btn_suppr_annuler_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_suppr_annuler_perso->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_suppr_annuler_perso->FlatAppearance->BorderSize = 0;
            this->btn_suppr_annuler_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_suppr_annuler_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_suppr_annuler_perso->ForeColor = System::Drawing::Color::White;
            this->btn_suppr_annuler_perso->Location = System::Drawing::Point(291, 216);
            this->btn_suppr_annuler_perso->Name = L"btn_suppr_annuler_perso";
            this->btn_suppr_annuler_perso->Size = System::Drawing::Size(143, 143);
            this->btn_suppr_annuler_perso->TabIndex = 16;
            this->btn_suppr_annuler_perso->Text = L"Annuler";
            this->btn_suppr_annuler_perso->UseVisualStyleBackColor = false;
            this->btn_suppr_annuler_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_suppr_annuler_perso_Click);
            // 
            // btn_suppr_valider_perso
            // 
            this->btn_suppr_valider_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_suppr_valider_perso->FlatAppearance->BorderSize = 0;
            this->btn_suppr_valider_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_suppr_valider_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_suppr_valider_perso->ForeColor = System::Drawing::Color::White;
            this->btn_suppr_valider_perso->Location = System::Drawing::Point(70, 216);
            this->btn_suppr_valider_perso->Name = L"btn_suppr_valider_perso";
            this->btn_suppr_valider_perso->Size = System::Drawing::Size(143, 143);
            this->btn_suppr_valider_perso->TabIndex = 15;
            this->btn_suppr_valider_perso->Text = L"Valider";
            this->btn_suppr_valider_perso->UseVisualStyleBackColor = false;
            this->btn_suppr_valider_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_suppr_valider_perso_Click);
            // 
            // bdd_suppr_perso
            // 
            this->bdd_suppr_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_suppr_perso->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_suppr_perso->Location = System::Drawing::Point(517, 6);
            this->bdd_suppr_perso->Name = L"bdd_suppr_perso";
            this->bdd_suppr_perso->RowHeadersWidth = 51;
            this->bdd_suppr_perso->RowTemplate->Height = 24;
            this->bdd_suppr_perso->Size = System::Drawing::Size(832, 472);
            this->bdd_suppr_perso->TabIndex = 14;
            // 
            // tb_suppr_id_perso
            // 
            this->tb_suppr_id_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_suppr_id_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_suppr_id_perso->Location = System::Drawing::Point(18, 151);
            this->tb_suppr_id_perso->Name = L"tb_suppr_id_perso";
            this->tb_suppr_id_perso->Size = System::Drawing::Size(475, 36);
            this->tb_suppr_id_perso->TabIndex = 13;
            // 
            // lb_suppr_id_perso
            // 
            this->lb_suppr_id_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_suppr_id_perso->Location = System::Drawing::Point(14, 91);
            this->lb_suppr_id_perso->Name = L"lb_suppr_id_perso";
            this->lb_suppr_id_perso->Size = System::Drawing::Size(479, 52);
            this->lb_suppr_id_perso->TabIndex = 12;
            this->lb_suppr_id_perso->Text = L"Entrez l\'ID du membre a supprimer :";
            this->lb_suppr_id_perso->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tab_pers_affich
            // 
            this->tab_pers_affich->BackColor = System::Drawing::Color::Bisque;
            this->tab_pers_affich->Controls->Add(this->bdd_affich_perso);
            this->tab_pers_affich->Controls->Add(this->layout_affich_perso);
            this->tab_pers_affich->Controls->Add(this->tb_affich_id_perso);
            this->tab_pers_affich->Controls->Add(this->lb_affich_id_perso);
            this->tab_pers_affich->Location = System::Drawing::Point(4, 25);
            this->tab_pers_affich->Name = L"tab_pers_affich";
            this->tab_pers_affich->Padding = System::Windows::Forms::Padding(3);
            this->tab_pers_affich->Size = System::Drawing::Size(1351, 486);
            this->tab_pers_affich->TabIndex = 3;
            this->tab_pers_affich->Text = L"Afficher un membre du personnel";
            // 
            // bdd_affich_perso
            // 
            this->bdd_affich_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_affich_perso->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_affich_perso->Location = System::Drawing::Point(698, 14);
            this->bdd_affich_perso->Name = L"bdd_affich_perso";
            this->bdd_affich_perso->RowHeadersWidth = 51;
            this->bdd_affich_perso->RowTemplate->Height = 24;
            this->bdd_affich_perso->Size = System::Drawing::Size(645, 464);
            this->bdd_affich_perso->TabIndex = 55;
            // 
            // layout_affich_perso
            // 
            this->layout_affich_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout_affich_perso->ColumnCount = 2;
            this->layout_affich_perso->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_perso->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_perso->Controls->Add(this->btn_affich_valider_perso, 0, 0);
            this->layout_affich_perso->Controls->Add(this->btn_affich_autre_perso, 1, 0);
            this->layout_affich_perso->Location = System::Drawing::Point(3, 201);
            this->layout_affich_perso->MinimumSize = System::Drawing::Size(298, 0);
            this->layout_affich_perso->Name = L"layout_affich_perso";
            this->layout_affich_perso->RowCount = 1;
            this->layout_affich_perso->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_perso->Size = System::Drawing::Size(682, 149);
            this->layout_affich_perso->TabIndex = 54;
            // 
            // btn_affich_valider_perso
            // 
            this->btn_affich_valider_perso->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich_valider_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_affich_valider_perso->FlatAppearance->BorderSize = 0;
            this->btn_affich_valider_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich_valider_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_affich_valider_perso->ForeColor = System::Drawing::Color::White;
            this->btn_affich_valider_perso->Location = System::Drawing::Point(99, 3);
            this->btn_affich_valider_perso->Name = L"btn_affich_valider_perso";
            this->btn_affich_valider_perso->Size = System::Drawing::Size(143, 143);
            this->btn_affich_valider_perso->TabIndex = 52;
            this->btn_affich_valider_perso->Text = L"Valider";
            this->btn_affich_valider_perso->UseVisualStyleBackColor = false;
            this->btn_affich_valider_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_valider_perso_Click);
            // 
            // btn_affich_autre_perso
            // 
            this->btn_affich_autre_perso->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich_autre_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_affich_autre_perso->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_affich_autre_perso->FlatAppearance->BorderSize = 0;
            this->btn_affich_autre_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich_autre_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_affich_autre_perso->ForeColor = System::Drawing::Color::White;
            this->btn_affich_autre_perso->Location = System::Drawing::Point(440, 3);
            this->btn_affich_autre_perso->Name = L"btn_affich_autre_perso";
            this->btn_affich_autre_perso->Size = System::Drawing::Size(143, 143);
            this->btn_affich_autre_perso->TabIndex = 53;
            this->btn_affich_autre_perso->Text = L"Afficher un autre membre";
            this->btn_affich_autre_perso->UseVisualStyleBackColor = false;
            this->btn_affich_autre_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_nouveau_perso_Click);
            // 
            // tb_affich_id_perso
            // 
            this->tb_affich_id_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tb_affich_id_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_affich_id_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_affich_id_perso->Location = System::Drawing::Point(11, 135);
            this->tb_affich_id_perso->Name = L"tb_affich_id_perso";
            this->tb_affich_id_perso->Size = System::Drawing::Size(670, 36);
            this->tb_affich_id_perso->TabIndex = 15;
            // 
            // lb_affich_id_perso
            // 
            this->lb_affich_id_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lb_affich_id_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_affich_id_perso->Location = System::Drawing::Point(11, 76);
            this->lb_affich_id_perso->Name = L"lb_affich_id_perso";
            this->lb_affich_id_perso->Size = System::Drawing::Size(670, 73);
            this->lb_affich_id_perso->TabIndex = 14;
            this->lb_affich_id_perso->Text = L"Entrez l\'ID du membre a afficher :";
            this->lb_affich_id_perso->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tab_pers_modif
            // 
            this->tab_pers_modif->BackColor = System::Drawing::Color::Bisque;
            this->tab_pers_modif->Controls->Add(this->pn_cacher_info_modif_perso);
            this->tab_pers_modif->Controls->Add(this->layout2_modif_perso);
            this->tab_pers_modif->Controls->Add(this->tb_modif_sup_perso);
            this->tab_pers_modif->Controls->Add(this->lb_modif_nom_perso);
            this->tab_pers_modif->Controls->Add(this->lb_modif_sup_perso);
            this->tab_pers_modif->Controls->Add(this->tb_modif_nom_perso);
            this->tab_pers_modif->Controls->Add(this->tb_modif_adresse_perso);
            this->tab_pers_modif->Controls->Add(this->tb_modif_prenom_perso);
            this->tab_pers_modif->Controls->Add(this->lb_modif_adresse_perso);
            this->tab_pers_modif->Controls->Add(this->lb_modif_prenom_perso);
            this->tab_pers_modif->Controls->Add(this->lb_modif_embauche_perso);
            this->tab_pers_modif->Controls->Add(this->tb_modif_embauche_perso);
            this->tab_pers_modif->Controls->Add(this->tb_modif_id_perso);
            this->tab_pers_modif->Controls->Add(this->lb_modif_id_perso);
            this->tab_pers_modif->Controls->Add(this->pn_modif_fiche_perso);
            this->tab_pers_modif->Location = System::Drawing::Point(4, 25);
            this->tab_pers_modif->Name = L"tab_pers_modif";
            this->tab_pers_modif->Padding = System::Windows::Forms::Padding(3);
            this->tab_pers_modif->Size = System::Drawing::Size(1351, 486);
            this->tab_pers_modif->TabIndex = 1;
            this->tab_pers_modif->Text = L"Modifier un membre du personnel";
            // 
            // pn_cacher_info_modif_perso
            // 
            this->pn_cacher_info_modif_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->pn_cacher_info_modif_perso->Controls->Add(this->layout_modif_perso);
            this->pn_cacher_info_modif_perso->Location = System::Drawing::Point(6, 81);
            this->pn_cacher_info_modif_perso->Name = L"pn_cacher_info_modif_perso";
            this->pn_cacher_info_modif_perso->Size = System::Drawing::Size(670, 441);
            this->pn_cacher_info_modif_perso->TabIndex = 26;
            // 
            // layout_modif_perso
            // 
            this->layout_modif_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout_modif_perso->ColumnCount = 2;
            this->layout_modif_perso->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_modif_perso->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_modif_perso->Controls->Add(this->btn_modif_valider_perso, 0, 0);
            this->layout_modif_perso->Controls->Add(this->btn_modif_annuler_perso, 1, 0);
            this->layout_modif_perso->Location = System::Drawing::Point(0, 66);
            this->layout_modif_perso->MinimumSize = System::Drawing::Size(298, 0);
            this->layout_modif_perso->Name = L"layout_modif_perso";
            this->layout_modif_perso->RowCount = 1;
            this->layout_modif_perso->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->layout_modif_perso->Size = System::Drawing::Size(668, 149);
            this->layout_modif_perso->TabIndex = 55;
            // 
            // btn_modif_valider_perso
            // 
            this->btn_modif_valider_perso->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_modif_valider_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_modif_valider_perso->FlatAppearance->BorderSize = 0;
            this->btn_modif_valider_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_valider_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_valider_perso->ForeColor = System::Drawing::Color::White;
            this->btn_modif_valider_perso->Location = System::Drawing::Point(95, 3);
            this->btn_modif_valider_perso->Name = L"btn_modif_valider_perso";
            this->btn_modif_valider_perso->Size = System::Drawing::Size(143, 143);
            this->btn_modif_valider_perso->TabIndex = 52;
            this->btn_modif_valider_perso->Text = L"Valider";
            this->btn_modif_valider_perso->UseVisualStyleBackColor = false;
            this->btn_modif_valider_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_valider_perso_Click);
            // 
            // btn_modif_annuler_perso
            // 
            this->btn_modif_annuler_perso->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_modif_annuler_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_modif_annuler_perso->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_modif_annuler_perso->FlatAppearance->BorderSize = 0;
            this->btn_modif_annuler_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_annuler_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_annuler_perso->ForeColor = System::Drawing::Color::White;
            this->btn_modif_annuler_perso->Location = System::Drawing::Point(429, 3);
            this->btn_modif_annuler_perso->Name = L"btn_modif_annuler_perso";
            this->btn_modif_annuler_perso->Size = System::Drawing::Size(143, 143);
            this->btn_modif_annuler_perso->TabIndex = 53;
            this->btn_modif_annuler_perso->Text = L"Annuler";
            this->btn_modif_annuler_perso->UseVisualStyleBackColor = false;
            this->btn_modif_annuler_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_annuler_perso_Click);
            // 
            // layout2_modif_perso
            // 
            this->layout2_modif_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout2_modif_perso->AutoSize = true;
            this->layout2_modif_perso->ColumnCount = 3;
            this->layout2_modif_perso->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_modif_perso->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_modif_perso->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                200)));
            this->layout2_modif_perso->Controls->Add(this->btn_modif_actu_fiche_perso, 0, 0);
            this->layout2_modif_perso->Controls->Add(this->btn_valider_modif_perso, 0, 0);
            this->layout2_modif_perso->Controls->Add(this->btn_modif_changer_perso, 1, 0);
            this->layout2_modif_perso->Location = System::Drawing::Point(16, 383);
            this->layout2_modif_perso->Name = L"layout2_modif_perso";
            this->layout2_modif_perso->RowCount = 1;
            this->layout2_modif_perso->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_modif_perso->Size = System::Drawing::Size(648, 100);
            this->layout2_modif_perso->TabIndex = 0;
            // 
            // btn_modif_actu_fiche_perso
            // 
            this->btn_modif_actu_fiche_perso->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_actu_fiche_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->btn_modif_actu_fiche_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_actu_fiche_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_modif_actu_fiche_perso->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_actu_fiche_perso->Location = System::Drawing::Point(227, 3);
            this->btn_modif_actu_fiche_perso->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_actu_fiche_perso->Name = L"btn_modif_actu_fiche_perso";
            this->btn_modif_actu_fiche_perso->Size = System::Drawing::Size(218, 83);
            this->btn_modif_actu_fiche_perso->TabIndex = 57;
            this->btn_modif_actu_fiche_perso->TabStop = false;
            this->btn_modif_actu_fiche_perso->Text = L"Actualiser l\'affichage de la fiche personnel";
            this->btn_modif_actu_fiche_perso->UseVisualStyleBackColor = false;
            this->btn_modif_actu_fiche_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_actu_fiche_perso_Click);
            // 
            // btn_valider_modif_perso
            // 
            this->btn_valider_modif_perso->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_valider_modif_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->btn_valider_modif_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_valider_modif_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_valider_modif_perso->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_valider_modif_perso->Location = System::Drawing::Point(3, 3);
            this->btn_valider_modif_perso->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_valider_modif_perso->Name = L"btn_valider_modif_perso";
            this->btn_valider_modif_perso->Size = System::Drawing::Size(218, 83);
            this->btn_valider_modif_perso->TabIndex = 56;
            this->btn_valider_modif_perso->Text = L"Modifier le membre du personnel";
            this->btn_valider_modif_perso->UseVisualStyleBackColor = false;
            this->btn_valider_modif_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_valider_modif_perso_Click);
            // 
            // btn_modif_changer_perso
            // 
            this->btn_modif_changer_perso->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_changer_perso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_modif_changer_perso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_changer_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_modif_changer_perso->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_changer_perso->Location = System::Drawing::Point(451, 3);
            this->btn_modif_changer_perso->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_changer_perso->Name = L"btn_modif_changer_perso";
            this->btn_modif_changer_perso->Size = System::Drawing::Size(194, 83);
            this->btn_modif_changer_perso->TabIndex = 55;
            this->btn_modif_changer_perso->TabStop = false;
            this->btn_modif_changer_perso->Text = L"Modifier un autre membre du personnel";
            this->btn_modif_changer_perso->UseVisualStyleBackColor = false;
            this->btn_modif_changer_perso->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_changer_perso_Click);
            // 
            // tb_modif_sup_perso
            // 
            this->tb_modif_sup_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_sup_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_sup_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_sup_perso->Location = System::Drawing::Point(227, 328);
            this->tb_modif_sup_perso->Name = L"tb_modif_sup_perso";
            this->tb_modif_sup_perso->Size = System::Drawing::Size(423, 36);
            this->tb_modif_sup_perso->TabIndex = 48;
            // 
            // lb_modif_nom_perso
            // 
            this->lb_modif_nom_perso->AutoSize = true;
            this->lb_modif_nom_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_nom_perso->Location = System::Drawing::Point(20, 95);
            this->lb_modif_nom_perso->Name = L"lb_modif_nom_perso";
            this->lb_modif_nom_perso->Size = System::Drawing::Size(79, 22);
            this->lb_modif_nom_perso->TabIndex = 40;
            this->lb_modif_nom_perso->Text = L"Nom :";
            // 
            // lb_modif_sup_perso
            // 
            this->lb_modif_sup_perso->AutoSize = true;
            this->lb_modif_sup_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_sup_perso->Location = System::Drawing::Point(18, 335);
            this->lb_modif_sup_perso->Name = L"lb_modif_sup_perso";
            this->lb_modif_sup_perso->Size = System::Drawing::Size(203, 22);
            this->lb_modif_sup_perso->TabIndex = 47;
            this->lb_modif_sup_perso->Text = L"ID superieur :";
            // 
            // tb_modif_nom_perso
            // 
            this->tb_modif_nom_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_nom_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_nom_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_nom_perso->Location = System::Drawing::Point(103, 86);
            this->tb_modif_nom_perso->Name = L"tb_modif_nom_perso";
            this->tb_modif_nom_perso->Size = System::Drawing::Size(547, 36);
            this->tb_modif_nom_perso->TabIndex = 39;
            // 
            // tb_modif_adresse_perso
            // 
            this->tb_modif_adresse_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_adresse_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_adresse_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_adresse_perso->Location = System::Drawing::Point(16, 287);
            this->tb_modif_adresse_perso->Name = L"tb_modif_adresse_perso";
            this->tb_modif_adresse_perso->Size = System::Drawing::Size(634, 36);
            this->tb_modif_adresse_perso->TabIndex = 46;
            // 
            // tb_modif_prenom_perso
            // 
            this->tb_modif_prenom_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_prenom_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_prenom_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_prenom_perso->Location = System::Drawing::Point(153, 138);
            this->tb_modif_prenom_perso->Name = L"tb_modif_prenom_perso";
            this->tb_modif_prenom_perso->Size = System::Drawing::Size(497, 36);
            this->tb_modif_prenom_perso->TabIndex = 42;
            // 
            // lb_modif_adresse_perso
            // 
            this->lb_modif_adresse_perso->AutoSize = true;
            this->lb_modif_adresse_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_adresse_perso->Location = System::Drawing::Point(14, 266);
            this->lb_modif_adresse_perso->Name = L"lb_modif_adresse_perso";
            this->lb_modif_adresse_perso->Size = System::Drawing::Size(145, 22);
            this->lb_modif_adresse_perso->TabIndex = 45;
            this->lb_modif_adresse_perso->Text = L"Adresse :";
            // 
            // lb_modif_prenom_perso
            // 
            this->lb_modif_prenom_perso->AutoSize = true;
            this->lb_modif_prenom_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_prenom_perso->Location = System::Drawing::Point(18, 148);
            this->lb_modif_prenom_perso->Name = L"lb_modif_prenom_perso";
            this->lb_modif_prenom_perso->Size = System::Drawing::Size(133, 22);
            this->lb_modif_prenom_perso->TabIndex = 41;
            this->lb_modif_prenom_perso->Text = L"PRENOM :";
            // 
            // lb_modif_embauche_perso
            // 
            this->lb_modif_embauche_perso->AutoSize = true;
            this->lb_modif_embauche_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_modif_embauche_perso->Location = System::Drawing::Point(18, 197);
            this->lb_modif_embauche_perso->Name = L"lb_modif_embauche_perso";
            this->lb_modif_embauche_perso->Size = System::Drawing::Size(273, 22);
            this->lb_modif_embauche_perso->TabIndex = 43;
            this->lb_modif_embauche_perso->Text = L"Date d\'embauche :";
            // 
            // tb_modif_embauche_perso
            // 
            this->tb_modif_embauche_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_embauche_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_embauche_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_embauche_perso->Location = System::Drawing::Point(13, 219);
            this->tb_modif_embauche_perso->Name = L"tb_modif_embauche_perso";
            this->tb_modif_embauche_perso->Size = System::Drawing::Size(637, 36);
            this->tb_modif_embauche_perso->TabIndex = 44;
            // 
            // tb_modif_id_perso
            // 
            this->tb_modif_id_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_id_perso->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_id_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_id_perso->Location = System::Drawing::Point(18, 45);
            this->tb_modif_id_perso->Name = L"tb_modif_id_perso";
            this->tb_modif_id_perso->Size = System::Drawing::Size(632, 33);
            this->tb_modif_id_perso->TabIndex = 38;
            // 
            // lb_modif_id_perso
            // 
            this->lb_modif_id_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->lb_modif_id_perso->AutoSize = true;
            this->lb_modif_id_perso->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_id_perso->Location = System::Drawing::Point(14, 17);
            this->lb_modif_id_perso->Name = L"lb_modif_id_perso";
            this->lb_modif_id_perso->Size = System::Drawing::Size(418, 18);
            this->lb_modif_id_perso->TabIndex = 37;
            this->lb_modif_id_perso->Text = L"Entrez l\'ID du membre a modifier :";
            // 
            // pn_modif_fiche_perso
            // 
            this->pn_modif_fiche_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pn_modif_fiche_perso->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pn_modif_fiche_perso->Controls->Add(this->lb_modif_adresse_fiche_perso);
            this->pn_modif_fiche_perso->Controls->Add(this->lb_modif_sup_fiche_perso);
            this->pn_modif_fiche_perso->Controls->Add(this->lb_modif_embauche_fiche_perso);
            this->pn_modif_fiche_perso->Controls->Add(this->lb_modif_prenom_fiche_perso);
            this->pn_modif_fiche_perso->Controls->Add(this->lb_modif_nom_fiche_perso);
            this->pn_modif_fiche_perso->Controls->Add(this->pct_perso2);
            this->pn_modif_fiche_perso->Location = System::Drawing::Point(687, 0);
            this->pn_modif_fiche_perso->Name = L"pn_modif_fiche_perso";
            this->pn_modif_fiche_perso->Size = System::Drawing::Size(662, 483);
            this->pn_modif_fiche_perso->TabIndex = 50;
            // 
            // lb_modif_adresse_fiche_perso
            // 
            this->lb_modif_adresse_fiche_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_adresse_fiche_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_adresse_fiche_perso->Location = System::Drawing::Point(508, 6);
            this->lb_modif_adresse_fiche_perso->Name = L"lb_modif_adresse_fiche_perso";
            this->lb_modif_adresse_fiche_perso->Size = System::Drawing::Size(151, 267);
            this->lb_modif_adresse_fiche_perso->TabIndex = 30;
            this->lb_modif_adresse_fiche_perso->TextAlign = System::Drawing::ContentAlignment::TopRight;
            // 
            // lb_modif_sup_fiche_perso
            // 
            this->lb_modif_sup_fiche_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_sup_fiche_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_sup_fiche_perso->Location = System::Drawing::Point(508, 295);
            this->lb_modif_sup_fiche_perso->Name = L"lb_modif_sup_fiche_perso";
            this->lb_modif_sup_fiche_perso->Size = System::Drawing::Size(151, 178);
            this->lb_modif_sup_fiche_perso->TabIndex = 29;
            this->lb_modif_sup_fiche_perso->TextAlign = System::Drawing::ContentAlignment::BottomRight;
            // 
            // lb_modif_embauche_fiche_perso
            // 
            this->lb_modif_embauche_fiche_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_embauche_fiche_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_embauche_fiche_perso->Location = System::Drawing::Point(3, 248);
            this->lb_modif_embauche_fiche_perso->Name = L"lb_modif_embauche_fiche_perso";
            this->lb_modif_embauche_fiche_perso->Size = System::Drawing::Size(148, 223);
            this->lb_modif_embauche_fiche_perso->TabIndex = 28;
            this->lb_modif_embauche_fiche_perso->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // lb_modif_prenom_fiche_perso
            // 
            this->lb_modif_prenom_fiche_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_prenom_fiche_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_prenom_fiche_perso->Location = System::Drawing::Point(3, 42);
            this->lb_modif_prenom_fiche_perso->Name = L"lb_modif_prenom_fiche_perso";
            this->lb_modif_prenom_fiche_perso->Size = System::Drawing::Size(154, 82);
            this->lb_modif_prenom_fiche_perso->TabIndex = 27;
            // 
            // lb_modif_nom_fiche_perso
            // 
            this->lb_modif_nom_fiche_perso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_nom_fiche_perso->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_nom_fiche_perso->Location = System::Drawing::Point(3, 10);
            this->lb_modif_nom_fiche_perso->Name = L"lb_modif_nom_fiche_perso";
            this->lb_modif_nom_fiche_perso->Size = System::Drawing::Size(154, 90);
            this->lb_modif_nom_fiche_perso->TabIndex = 26;
            // 
            // pct_perso2
            // 
            this->pct_perso2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->pct_perso2->Location = System::Drawing::Point(157, 6);
            this->pct_perso2->Name = L"pct_perso2";
            this->pct_perso2->Size = System::Drawing::Size(345, 470);
            this->pct_perso2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pct_perso2->TabIndex = 25;
            this->pct_perso2->TabStop = false;
            // 
            // pn_centre
            // 
            this->pn_centre->BackColor = System::Drawing::Color::Bisque;
            this->pn_centre->Controls->Add(this->ptc_cerise);
            this->pn_centre->Controls->Add(this->btn_creer);
            this->pn_centre->Controls->Add(this->btn_affich);
            this->pn_centre->Controls->Add(this->btn_suppr);
            this->pn_centre->Controls->Add(this->btn_modif);
            this->pn_centre->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_centre->Location = System::Drawing::Point(0, 88);
            this->pn_centre->Name = L"pn_centre";
            this->pn_centre->Size = System::Drawing::Size(1359, 515);
            this->pn_centre->TabIndex = 32;
            // 
            // tab_gestion_client
            // 
            this->tab_gestion_client->Controls->Add(this->tab_creer_cli);
            this->tab_gestion_client->Controls->Add(this->tab_suppr_cli);
            this->tab_gestion_client->Controls->Add(this->tab_affich_cli);
            this->tab_gestion_client->Controls->Add(this->tab_modif_cli);
            this->tab_gestion_client->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tab_gestion_client->Location = System::Drawing::Point(0, 88);
            this->tab_gestion_client->Name = L"tab_gestion_client";
            this->tab_gestion_client->SelectedIndex = 0;
            this->tab_gestion_client->Size = System::Drawing::Size(1359, 515);
            this->tab_gestion_client->TabIndex = 33;
            this->tab_gestion_client->Visible = false;
            // 
            // tab_creer_cli
            // 
            this->tab_creer_cli->BackColor = System::Drawing::Color::Bisque;
            this->tab_creer_cli->Controls->Add(this->pn_creer_btn_cli);
            this->tab_creer_cli->Controls->Add(this->bdd_creer_cli);
            this->tab_creer_cli->Controls->Add(this->pn_creer_cli);
            this->tab_creer_cli->Location = System::Drawing::Point(4, 25);
            this->tab_creer_cli->Name = L"tab_creer_cli";
            this->tab_creer_cli->Padding = System::Windows::Forms::Padding(3);
            this->tab_creer_cli->Size = System::Drawing::Size(1351, 486);
            this->tab_creer_cli->TabIndex = 0;
            this->tab_creer_cli->Text = L"Creer un client";
            // 
            // pn_creer_btn_cli
            // 
            this->pn_creer_btn_cli->Controls->Add(this->btn_creer_actu_cli);
            this->pn_creer_btn_cli->Controls->Add(this->btn_creer_cli);
            this->pn_creer_btn_cli->Controls->Add(this->splitter2);
            this->pn_creer_btn_cli->Location = System::Drawing::Point(12, 389);
            this->pn_creer_btn_cli->Name = L"pn_creer_btn_cli";
            this->pn_creer_btn_cli->Size = System::Drawing::Size(678, 89);
            this->pn_creer_btn_cli->TabIndex = 14;
            // 
            // btn_creer_actu_cli
            // 
            this->btn_creer_actu_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_creer_actu_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->btn_creer_actu_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer_actu_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_creer_actu_cli->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_creer_actu_cli->Location = System::Drawing::Point(351, 3);
            this->btn_creer_actu_cli->Name = L"btn_creer_actu_cli";
            this->btn_creer_actu_cli->Size = System::Drawing::Size(324, 83);
            this->btn_creer_actu_cli->TabIndex = 2;
            this->btn_creer_actu_cli->Text = L"Actualiser l\'affichage de la base de donnees";
            this->btn_creer_actu_cli->UseVisualStyleBackColor = false;
            this->btn_creer_actu_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_actu_cli_Click);
            // 
            // btn_creer_cli
            // 
            this->btn_creer_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_creer_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
                static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->btn_creer_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_creer_cli->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_creer_cli->Location = System::Drawing::Point(3, 3);
            this->btn_creer_cli->Name = L"btn_creer_cli";
            this->btn_creer_cli->Size = System::Drawing::Size(333, 83);
            this->btn_creer_cli->TabIndex = 1;
            this->btn_creer_cli->Text = L"Creer le client";
            this->btn_creer_cli->UseVisualStyleBackColor = false;
            this->btn_creer_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_cli_Click);
            // 
            // splitter2
            // 
            this->splitter2->Location = System::Drawing::Point(0, 0);
            this->splitter2->Name = L"splitter2";
            this->splitter2->Size = System::Drawing::Size(345, 89);
            this->splitter2->TabIndex = 0;
            this->splitter2->TabStop = false;
            // 
            // bdd_creer_cli
            // 
            this->bdd_creer_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_creer_cli->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_creer_cli->Location = System::Drawing::Point(698, 10);
            this->bdd_creer_cli->Name = L"bdd_creer_cli";
            this->bdd_creer_cli->RowHeadersWidth = 51;
            this->bdd_creer_cli->RowTemplate->Height = 24;
            this->bdd_creer_cli->Size = System::Drawing::Size(629, 474);
            this->bdd_creer_cli->TabIndex = 6;
            // 
            // pn_creer_cli
            // 
            this->pn_creer_cli->Controls->Add(this->pct_cli);
            this->pn_creer_cli->Controls->Add(this->tb_creer_facturation_cli);
            this->pn_creer_cli->Controls->Add(this->lb_creer_nom_cli);
            this->pn_creer_cli->Controls->Add(this->lb_creer_facturation_cli);
            this->pn_creer_cli->Controls->Add(this->tb_creer_nom_cli);
            this->pn_creer_cli->Controls->Add(this->tb_creer_livraison_cli);
            this->pn_creer_cli->Controls->Add(this->tb_creer_prenom_cli);
            this->pn_creer_cli->Controls->Add(this->lb_creer_livraison_cli);
            this->pn_creer_cli->Controls->Add(this->lb_creer_prenom_cli);
            this->pn_creer_cli->Controls->Add(this->lb_creer_naissance_cli);
            this->pn_creer_cli->Controls->Add(this->tb_creer_naissance_cli);
            this->pn_creer_cli->Location = System::Drawing::Point(8, 6);
            this->pn_creer_cli->Name = L"pn_creer_cli";
            this->pn_creer_cli->Size = System::Drawing::Size(682, 380);
            this->pn_creer_cli->TabIndex = 15;
            // 
            // pct_cli
            // 
            this->pct_cli->Location = System::Drawing::Point(334, 4);
            this->pct_cli->Name = L"pct_cli";
            this->pct_cli->Size = System::Drawing::Size(345, 370);
            this->pct_cli->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pct_cli->TabIndex = 7;
            this->pct_cli->TabStop = false;
            // 
            // tb_creer_facturation_cli
            // 
            this->tb_creer_facturation_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_facturation_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_facturation_cli->Location = System::Drawing::Point(7, 304);
            this->tb_creer_facturation_cli->Name = L"tb_creer_facturation_cli";
            this->tb_creer_facturation_cli->Size = System::Drawing::Size(321, 36);
            this->tb_creer_facturation_cli->TabIndex = 11;
            // 
            // lb_creer_nom_cli
            // 
            this->lb_creer_nom_cli->AutoSize = true;
            this->lb_creer_nom_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_nom_cli->Location = System::Drawing::Point(11, 39);
            this->lb_creer_nom_cli->Name = L"lb_creer_nom_cli";
            this->lb_creer_nom_cli->Size = System::Drawing::Size(79, 22);
            this->lb_creer_nom_cli->TabIndex = 1;
            this->lb_creer_nom_cli->Text = L"Nom :";
            // 
            // lb_creer_facturation_cli
            // 
            this->lb_creer_facturation_cli->AutoSize = true;
            this->lb_creer_facturation_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_facturation_cli->Location = System::Drawing::Point(9, 279);
            this->lb_creer_facturation_cli->Name = L"lb_creer_facturation_cli";
            this->lb_creer_facturation_cli->Size = System::Drawing::Size(327, 22);
            this->lb_creer_facturation_cli->TabIndex = 10;
            this->lb_creer_facturation_cli->Text = L"Date de facturation :";
            // 
            // tb_creer_nom_cli
            // 
            this->tb_creer_nom_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_nom_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_nom_cli->Location = System::Drawing::Point(94, 33);
            this->tb_creer_nom_cli->Name = L"tb_creer_nom_cli";
            this->tb_creer_nom_cli->Size = System::Drawing::Size(231, 36);
            this->tb_creer_nom_cli->TabIndex = 0;
            // 
            // tb_creer_livraison_cli
            // 
            this->tb_creer_livraison_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_livraison_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_livraison_cli->Location = System::Drawing::Point(7, 235);
            this->tb_creer_livraison_cli->Name = L"tb_creer_livraison_cli";
            this->tb_creer_livraison_cli->Size = System::Drawing::Size(321, 36);
            this->tb_creer_livraison_cli->TabIndex = 9;
            // 
            // tb_creer_prenom_cli
            // 
            this->tb_creer_prenom_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_prenom_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_prenom_cli->Location = System::Drawing::Point(144, 86);
            this->tb_creer_prenom_cli->Name = L"tb_creer_prenom_cli";
            this->tb_creer_prenom_cli->Size = System::Drawing::Size(181, 36);
            this->tb_creer_prenom_cli->TabIndex = 3;
            // 
            // lb_creer_livraison_cli
            // 
            this->lb_creer_livraison_cli->AutoSize = true;
            this->lb_creer_livraison_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_livraison_cli->Location = System::Drawing::Point(5, 210);
            this->lb_creer_livraison_cli->Name = L"lb_creer_livraison_cli";
            this->lb_creer_livraison_cli->Size = System::Drawing::Size(331, 22);
            this->lb_creer_livraison_cli->TabIndex = 8;
            this->lb_creer_livraison_cli->Text = L"Adresse de livraison :";
            // 
            // lb_creer_prenom_cli
            // 
            this->lb_creer_prenom_cli->AutoSize = true;
            this->lb_creer_prenom_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_prenom_cli->Location = System::Drawing::Point(9, 92);
            this->lb_creer_prenom_cli->Name = L"lb_creer_prenom_cli";
            this->lb_creer_prenom_cli->Size = System::Drawing::Size(133, 22);
            this->lb_creer_prenom_cli->TabIndex = 2;
            this->lb_creer_prenom_cli->Text = L"PRENOM :";
            // 
            // lb_creer_naissance_cli
            // 
            this->lb_creer_naissance_cli->AutoSize = true;
            this->lb_creer_naissance_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_naissance_cli->Location = System::Drawing::Point(9, 141);
            this->lb_creer_naissance_cli->Name = L"lb_creer_naissance_cli";
            this->lb_creer_naissance_cli->Size = System::Drawing::Size(294, 22);
            this->lb_creer_naissance_cli->TabIndex = 4;
            this->lb_creer_naissance_cli->Text = L"Date de naissance :";
            // 
            // tb_creer_naissance_cli
            // 
            this->tb_creer_naissance_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_naissance_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_naissance_cli->Location = System::Drawing::Point(4, 166);
            this->tb_creer_naissance_cli->Name = L"tb_creer_naissance_cli";
            this->tb_creer_naissance_cli->Size = System::Drawing::Size(321, 36);
            this->tb_creer_naissance_cli->TabIndex = 5;
            // 
            // tab_suppr_cli
            // 
            this->tab_suppr_cli->BackColor = System::Drawing::Color::Bisque;
            this->tab_suppr_cli->Controls->Add(this->btn_suppr_annuler_cli);
            this->tab_suppr_cli->Controls->Add(this->btn_suppr_valider_cli);
            this->tab_suppr_cli->Controls->Add(this->bdd_suppr_cli);
            this->tab_suppr_cli->Controls->Add(this->tb_suppr_id_cli);
            this->tab_suppr_cli->Controls->Add(this->lb_suppr__id_cli);
            this->tab_suppr_cli->Location = System::Drawing::Point(4, 25);
            this->tab_suppr_cli->Name = L"tab_suppr_cli";
            this->tab_suppr_cli->Padding = System::Windows::Forms::Padding(3);
            this->tab_suppr_cli->Size = System::Drawing::Size(1351, 486);
            this->tab_suppr_cli->TabIndex = 2;
            this->tab_suppr_cli->Text = L"Supprimer un client";
            // 
            // btn_suppr_annuler_cli
            // 
            this->btn_suppr_annuler_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_suppr_annuler_cli->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_suppr_annuler_cli->FlatAppearance->BorderSize = 0;
            this->btn_suppr_annuler_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_suppr_annuler_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_suppr_annuler_cli->ForeColor = System::Drawing::Color::White;
            this->btn_suppr_annuler_cli->Location = System::Drawing::Point(291, 216);
            this->btn_suppr_annuler_cli->Name = L"btn_suppr_annuler_cli";
            this->btn_suppr_annuler_cli->Size = System::Drawing::Size(143, 143);
            this->btn_suppr_annuler_cli->TabIndex = 16;
            this->btn_suppr_annuler_cli->Text = L"Annuler";
            this->btn_suppr_annuler_cli->UseVisualStyleBackColor = false;
            this->btn_suppr_annuler_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_suppr_annuler_cli_Click);
            // 
            // btn_suppr_valider_cli
            // 
            this->btn_suppr_valider_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_suppr_valider_cli->FlatAppearance->BorderSize = 0;
            this->btn_suppr_valider_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_suppr_valider_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_suppr_valider_cli->ForeColor = System::Drawing::Color::White;
            this->btn_suppr_valider_cli->Location = System::Drawing::Point(70, 216);
            this->btn_suppr_valider_cli->Name = L"btn_suppr_valider_cli";
            this->btn_suppr_valider_cli->Size = System::Drawing::Size(143, 143);
            this->btn_suppr_valider_cli->TabIndex = 15;
            this->btn_suppr_valider_cli->Text = L"Valider";
            this->btn_suppr_valider_cli->UseVisualStyleBackColor = false;
            this->btn_suppr_valider_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_suppr_valider_cli_Click);
            // 
            // bdd_suppr_cli
            // 
            this->bdd_suppr_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_suppr_cli->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_suppr_cli->Location = System::Drawing::Point(517, 6);
            this->bdd_suppr_cli->Name = L"bdd_suppr_cli";
            this->bdd_suppr_cli->RowHeadersWidth = 51;
            this->bdd_suppr_cli->RowTemplate->Height = 24;
            this->bdd_suppr_cli->Size = System::Drawing::Size(832, 472);
            this->bdd_suppr_cli->TabIndex = 14;
            // 
            // tb_suppr_id_cli
            // 
            this->tb_suppr_id_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_suppr_id_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_suppr_id_cli->Location = System::Drawing::Point(18, 151);
            this->tb_suppr_id_cli->Name = L"tb_suppr_id_cli";
            this->tb_suppr_id_cli->Size = System::Drawing::Size(475, 36);
            this->tb_suppr_id_cli->TabIndex = 13;
            // 
            // lb_suppr__id_cli
            // 
            this->lb_suppr__id_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_suppr__id_cli->Location = System::Drawing::Point(14, 91);
            this->lb_suppr__id_cli->Name = L"lb_suppr__id_cli";
            this->lb_suppr__id_cli->Size = System::Drawing::Size(479, 52);
            this->lb_suppr__id_cli->TabIndex = 12;
            this->lb_suppr__id_cli->Text = L"Entrez l\'ID du client a supprimer :";
            this->lb_suppr__id_cli->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tab_affich_cli
            // 
            this->tab_affich_cli->BackColor = System::Drawing::Color::Bisque;
            this->tab_affich_cli->Controls->Add(this->bdd_affich_cli);
            this->tab_affich_cli->Controls->Add(this->layout_affich_cli);
            this->tab_affich_cli->Controls->Add(this->tb_affich_id_cli);
            this->tab_affich_cli->Controls->Add(this->lb_affich_id_cli);
            this->tab_affich_cli->Location = System::Drawing::Point(4, 25);
            this->tab_affich_cli->Name = L"tab_affich_cli";
            this->tab_affich_cli->Padding = System::Windows::Forms::Padding(3);
            this->tab_affich_cli->Size = System::Drawing::Size(1351, 486);
            this->tab_affich_cli->TabIndex = 3;
            this->tab_affich_cli->Text = L"Afficher un client";
            // 
            // bdd_affich_cli
            // 
            this->bdd_affich_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_affich_cli->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_affich_cli->Location = System::Drawing::Point(698, 14);
            this->bdd_affich_cli->Name = L"bdd_affich_cli";
            this->bdd_affich_cli->RowHeadersWidth = 51;
            this->bdd_affich_cli->RowTemplate->Height = 24;
            this->bdd_affich_cli->Size = System::Drawing::Size(645, 461);
            this->bdd_affich_cli->TabIndex = 55;
            // 
            // layout_affich_cli
            // 
            this->layout_affich_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout_affich_cli->ColumnCount = 2;
            this->layout_affich_cli->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_cli->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_cli->Controls->Add(this->btn_affich_valider_cli, 0, 0);
            this->layout_affich_cli->Controls->Add(this->btn_affich_autre_cli, 1, 0);
            this->layout_affich_cli->Location = System::Drawing::Point(3, 201);
            this->layout_affich_cli->MinimumSize = System::Drawing::Size(298, 0);
            this->layout_affich_cli->Name = L"layout_affich_cli";
            this->layout_affich_cli->RowCount = 1;
            this->layout_affich_cli->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->layout_affich_cli->Size = System::Drawing::Size(682, 149);
            this->layout_affich_cli->TabIndex = 54;
            // 
            // btn_affich_valider_cli
            // 
            this->btn_affich_valider_cli->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich_valider_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_affich_valider_cli->FlatAppearance->BorderSize = 0;
            this->btn_affich_valider_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich_valider_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_affich_valider_cli->ForeColor = System::Drawing::Color::White;
            this->btn_affich_valider_cli->Location = System::Drawing::Point(99, 3);
            this->btn_affich_valider_cli->Name = L"btn_affich_valider_cli";
            this->btn_affich_valider_cli->Size = System::Drawing::Size(143, 143);
            this->btn_affich_valider_cli->TabIndex = 52;
            this->btn_affich_valider_cli->Text = L"Valider";
            this->btn_affich_valider_cli->UseVisualStyleBackColor = false;
            this->btn_affich_valider_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_valider_cli_Click);
            // 
            // btn_affich_autre_cli
            // 
            this->btn_affich_autre_cli->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich_autre_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_affich_autre_cli->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_affich_autre_cli->FlatAppearance->BorderSize = 0;
            this->btn_affich_autre_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich_autre_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_affich_autre_cli->ForeColor = System::Drawing::Color::White;
            this->btn_affich_autre_cli->Location = System::Drawing::Point(440, 3);
            this->btn_affich_autre_cli->Name = L"btn_affich_autre_cli";
            this->btn_affich_autre_cli->Size = System::Drawing::Size(143, 143);
            this->btn_affich_autre_cli->TabIndex = 53;
            this->btn_affich_autre_cli->Text = L"Afficher un autre client";
            this->btn_affich_autre_cli->UseVisualStyleBackColor = false;
            this->btn_affich_autre_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_autre_cli_Click);
            // 
            // tb_affich_id_cli
            // 
            this->tb_affich_id_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tb_affich_id_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_affich_id_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_affich_id_cli->Location = System::Drawing::Point(11, 135);
            this->tb_affich_id_cli->Name = L"tb_affich_id_cli";
            this->tb_affich_id_cli->Size = System::Drawing::Size(670, 36);
            this->tb_affich_id_cli->TabIndex = 15;
            // 
            // lb_affich_id_cli
            // 
            this->lb_affich_id_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lb_affich_id_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_affich_id_cli->Location = System::Drawing::Point(11, 76);
            this->lb_affich_id_cli->Name = L"lb_affich_id_cli";
            this->lb_affich_id_cli->Size = System::Drawing::Size(670, 73);
            this->lb_affich_id_cli->TabIndex = 14;
            this->lb_affich_id_cli->Text = L"Entrez l\'ID du client a afficher :";
            this->lb_affich_id_cli->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tab_modif_cli
            // 
            this->tab_modif_cli->BackColor = System::Drawing::Color::Bisque;
            this->tab_modif_cli->Controls->Add(this->pn_modif_cacher_info_cli);
            this->tab_modif_cli->Controls->Add(this->layout2_modif_cli);
            this->tab_modif_cli->Controls->Add(this->lb_modif_nom_cli);
            this->tab_modif_cli->Controls->Add(this->lb_modif_livraison_cli);
            this->tab_modif_cli->Controls->Add(this->tb_modif_nom_cli);
            this->tab_modif_cli->Controls->Add(this->tb_modif_facturation_cli);
            this->tab_modif_cli->Controls->Add(this->tb_modif_prenom_cli);
            this->tab_modif_cli->Controls->Add(this->lb_modif_facturation_cli);
            this->tab_modif_cli->Controls->Add(this->lb_modif_prenomcli);
            this->tab_modif_cli->Controls->Add(this->lb_modif_naissance_cli);
            this->tab_modif_cli->Controls->Add(this->tb_modif_naissance_cli);
            this->tab_modif_cli->Controls->Add(this->tb_modif_id_cli);
            this->tab_modif_cli->Controls->Add(this->lb_modif_id_cli);
            this->tab_modif_cli->Controls->Add(this->pn_modif_fiche_cli);
            this->tab_modif_cli->Controls->Add(this->tb_modif_livraison_cli);
            this->tab_modif_cli->Location = System::Drawing::Point(4, 25);
            this->tab_modif_cli->Name = L"tab_modif_cli";
            this->tab_modif_cli->Padding = System::Windows::Forms::Padding(3);
            this->tab_modif_cli->Size = System::Drawing::Size(1351, 486);
            this->tab_modif_cli->TabIndex = 1;
            this->tab_modif_cli->Text = L"Modifier un client";
            // 
            // pn_modif_cacher_info_cli
            // 
            this->pn_modif_cacher_info_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->pn_modif_cacher_info_cli->Controls->Add(this->layout_modif_cli);
            this->pn_modif_cacher_info_cli->Location = System::Drawing::Point(8, 89);
            this->pn_modif_cacher_info_cli->Name = L"pn_modif_cacher_info_cli";
            this->pn_modif_cacher_info_cli->Size = System::Drawing::Size(670, 395);
            this->pn_modif_cacher_info_cli->TabIndex = 26;
            // 
            // layout_modif_cli
            // 
            this->layout_modif_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout_modif_cli->ColumnCount = 2;
            this->layout_modif_cli->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_modif_cli->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_modif_cli->Controls->Add(this->btn_modif_valider_cli, 0, 0);
            this->layout_modif_cli->Controls->Add(this->btn_modif_annuler_cli, 1, 0);
            this->layout_modif_cli->Location = System::Drawing::Point(3, 65);
            this->layout_modif_cli->MinimumSize = System::Drawing::Size(298, 0);
            this->layout_modif_cli->Name = L"layout_modif_cli";
            this->layout_modif_cli->RowCount = 1;
            this->layout_modif_cli->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->layout_modif_cli->Size = System::Drawing::Size(664, 149);
            this->layout_modif_cli->TabIndex = 55;
            // 
            // btn_modif_valider_cli
            // 
            this->btn_modif_valider_cli->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_modif_valider_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_modif_valider_cli->FlatAppearance->BorderSize = 0;
            this->btn_modif_valider_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_valider_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_valider_cli->ForeColor = System::Drawing::Color::White;
            this->btn_modif_valider_cli->Location = System::Drawing::Point(94, 3);
            this->btn_modif_valider_cli->Name = L"btn_modif_valider_cli";
            this->btn_modif_valider_cli->Size = System::Drawing::Size(143, 143);
            this->btn_modif_valider_cli->TabIndex = 52;
            this->btn_modif_valider_cli->Text = L"Valider";
            this->btn_modif_valider_cli->UseVisualStyleBackColor = false;
            this->btn_modif_valider_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_valider_cli_Click);
            // 
            // btn_modif_annuler_cli
            // 
            this->btn_modif_annuler_cli->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_modif_annuler_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_modif_annuler_cli->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_modif_annuler_cli->FlatAppearance->BorderSize = 0;
            this->btn_modif_annuler_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_annuler_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_annuler_cli->ForeColor = System::Drawing::Color::White;
            this->btn_modif_annuler_cli->Location = System::Drawing::Point(426, 3);
            this->btn_modif_annuler_cli->Name = L"btn_modif_annuler_cli";
            this->btn_modif_annuler_cli->Size = System::Drawing::Size(143, 143);
            this->btn_modif_annuler_cli->TabIndex = 53;
            this->btn_modif_annuler_cli->Text = L"Annuler";
            this->btn_modif_annuler_cli->UseVisualStyleBackColor = false;
            this->btn_modif_annuler_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_annuler_cli_Click);
            // 
            // layout2_modif_cli
            // 
            this->layout2_modif_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout2_modif_cli->AutoSize = true;
            this->layout2_modif_cli->ColumnCount = 3;
            this->layout2_modif_cli->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_modif_cli->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_modif_cli->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                200)));
            this->layout2_modif_cli->Controls->Add(this->btn_modif_actu_cli, 0, 0);
            this->layout2_modif_cli->Controls->Add(this->btn_modif_cli, 0, 0);
            this->layout2_modif_cli->Controls->Add(this->btn_modif_autre_cli, 1, 0);
            this->layout2_modif_cli->Location = System::Drawing::Point(16, 399);
            this->layout2_modif_cli->Name = L"layout2_modif_cli";
            this->layout2_modif_cli->RowCount = 1;
            this->layout2_modif_cli->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->layout2_modif_cli->Size = System::Drawing::Size(648, 100);
            this->layout2_modif_cli->TabIndex = 0;
            // 
            // btn_modif_actu_cli
            // 
            this->btn_modif_actu_cli->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_actu_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->btn_modif_actu_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_actu_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_actu_cli->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_actu_cli->Location = System::Drawing::Point(227, 3);
            this->btn_modif_actu_cli->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_actu_cli->Name = L"btn_modif_actu_cli";
            this->btn_modif_actu_cli->Size = System::Drawing::Size(218, 83);
            this->btn_modif_actu_cli->TabIndex = 57;
            this->btn_modif_actu_cli->TabStop = false;
            this->btn_modif_actu_cli->Text = L"Actualiser l\'affichage de la fiche personnel";
            this->btn_modif_actu_cli->UseVisualStyleBackColor = false;
            this->btn_modif_actu_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_actu_cli_Click);
            // 
            // btn_modif_cli
            // 
            this->btn_modif_cli->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(173)),
                static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->btn_modif_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_cli->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_cli->Location = System::Drawing::Point(3, 3);
            this->btn_modif_cli->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_cli->Name = L"btn_modif_cli";
            this->btn_modif_cli->Size = System::Drawing::Size(218, 83);
            this->btn_modif_cli->TabIndex = 56;
            this->btn_modif_cli->Text = L"Modifier le membre du personnel";
            this->btn_modif_cli->UseVisualStyleBackColor = false;
            this->btn_modif_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_cli_Click);
            // 
            // btn_modif_autre_cli
            // 
            this->btn_modif_autre_cli->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_autre_cli->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_modif_autre_cli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_autre_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_autre_cli->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_autre_cli->Location = System::Drawing::Point(451, 3);
            this->btn_modif_autre_cli->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_autre_cli->Name = L"btn_modif_autre_cli";
            this->btn_modif_autre_cli->Size = System::Drawing::Size(194, 83);
            this->btn_modif_autre_cli->TabIndex = 55;
            this->btn_modif_autre_cli->TabStop = false;
            this->btn_modif_autre_cli->Text = L"Modifier un autre membre du personnel";
            this->btn_modif_autre_cli->UseVisualStyleBackColor = false;
            this->btn_modif_autre_cli->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_autre_cli_Click);
            // 
            // lb_modif_nom_cli
            // 
            this->lb_modif_nom_cli->AutoSize = true;
            this->lb_modif_nom_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_nom_cli->Location = System::Drawing::Point(20, 95);
            this->lb_modif_nom_cli->Name = L"lb_modif_nom_cli";
            this->lb_modif_nom_cli->Size = System::Drawing::Size(79, 22);
            this->lb_modif_nom_cli->TabIndex = 40;
            this->lb_modif_nom_cli->Text = L"Nom :";
            // 
            // lb_modif_livraison_cli
            // 
            this->lb_modif_livraison_cli->AutoSize = true;
            this->lb_modif_livraison_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_livraison_cli->Location = System::Drawing::Point(18, 335);
            this->lb_modif_livraison_cli->Name = L"lb_modif_livraison_cli";
            this->lb_modif_livraison_cli->Size = System::Drawing::Size(331, 22);
            this->lb_modif_livraison_cli->TabIndex = 47;
            this->lb_modif_livraison_cli->Text = L"Adresse de livraison :";
            // 
            // tb_modif_nom_cli
            // 
            this->tb_modif_nom_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_nom_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_nom_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_nom_cli->Location = System::Drawing::Point(103, 92);
            this->tb_modif_nom_cli->Name = L"tb_modif_nom_cli";
            this->tb_modif_nom_cli->Size = System::Drawing::Size(547, 36);
            this->tb_modif_nom_cli->TabIndex = 39;
            // 
            // tb_modif_facturation_cli
            // 
            this->tb_modif_facturation_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_facturation_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_facturation_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_facturation_cli->Location = System::Drawing::Point(16, 293);
            this->tb_modif_facturation_cli->Name = L"tb_modif_facturation_cli";
            this->tb_modif_facturation_cli->Size = System::Drawing::Size(634, 36);
            this->tb_modif_facturation_cli->TabIndex = 46;
            // 
            // tb_modif_prenom_cli
            // 
            this->tb_modif_prenom_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_prenom_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_prenom_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_prenom_cli->Location = System::Drawing::Point(153, 144);
            this->tb_modif_prenom_cli->Name = L"tb_modif_prenom_cli";
            this->tb_modif_prenom_cli->Size = System::Drawing::Size(497, 36);
            this->tb_modif_prenom_cli->TabIndex = 42;
            // 
            // lb_modif_facturation_cli
            // 
            this->lb_modif_facturation_cli->AutoSize = true;
            this->lb_modif_facturation_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_modif_facturation_cli->Location = System::Drawing::Point(14, 266);
            this->lb_modif_facturation_cli->Name = L"lb_modif_facturation_cli";
            this->lb_modif_facturation_cli->Size = System::Drawing::Size(379, 22);
            this->lb_modif_facturation_cli->TabIndex = 45;
            this->lb_modif_facturation_cli->Text = L"Adresse de facturation :";
            // 
            // lb_modif_prenomcli
            // 
            this->lb_modif_prenomcli->AutoSize = true;
            this->lb_modif_prenomcli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_prenomcli->Location = System::Drawing::Point(18, 148);
            this->lb_modif_prenomcli->Name = L"lb_modif_prenomcli";
            this->lb_modif_prenomcli->Size = System::Drawing::Size(133, 22);
            this->lb_modif_prenomcli->TabIndex = 41;
            this->lb_modif_prenomcli->Text = L"PRENOM :";
            // 
            // lb_modif_naissance_cli
            // 
            this->lb_modif_naissance_cli->AutoSize = true;
            this->lb_modif_naissance_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_naissance_cli->Location = System::Drawing::Point(18, 197);
            this->lb_modif_naissance_cli->Name = L"lb_modif_naissance_cli";
            this->lb_modif_naissance_cli->Size = System::Drawing::Size(294, 22);
            this->lb_modif_naissance_cli->TabIndex = 43;
            this->lb_modif_naissance_cli->Text = L"Date de naissance :";
            // 
            // tb_modif_naissance_cli
            // 
            this->tb_modif_naissance_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_naissance_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_naissance_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_naissance_cli->Location = System::Drawing::Point(13, 225);
            this->tb_modif_naissance_cli->Name = L"tb_modif_naissance_cli";
            this->tb_modif_naissance_cli->Size = System::Drawing::Size(637, 36);
            this->tb_modif_naissance_cli->TabIndex = 44;
            // 
            // tb_modif_id_cli
            // 
            this->tb_modif_id_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_id_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_id_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_id_cli->Location = System::Drawing::Point(10, 47);
            this->tb_modif_id_cli->Name = L"tb_modif_id_cli";
            this->tb_modif_id_cli->Size = System::Drawing::Size(632, 33);
            this->tb_modif_id_cli->TabIndex = 38;
            // 
            // lb_modif_id_cli
            // 
            this->lb_modif_id_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->lb_modif_id_cli->AutoSize = true;
            this->lb_modif_id_cli->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_id_cli->Location = System::Drawing::Point(13, 15);
            this->lb_modif_id_cli->Name = L"lb_modif_id_cli";
            this->lb_modif_id_cli->Size = System::Drawing::Size(418, 18);
            this->lb_modif_id_cli->TabIndex = 37;
            this->lb_modif_id_cli->Text = L"Entrez l\'ID du membre a modifier :";
            // 
            // pn_modif_fiche_cli
            // 
            this->pn_modif_fiche_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pn_modif_fiche_cli->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pn_modif_fiche_cli->Controls->Add(this->lb_modif_livraison_fiche_cli);
            this->pn_modif_fiche_cli->Controls->Add(this->lb_modif_facturation_fiche_client);
            this->pn_modif_fiche_cli->Controls->Add(this->lb_modif_naissance_fiche_cli);
            this->pn_modif_fiche_cli->Controls->Add(this->lb_modif_prenom_fiche_cli);
            this->pn_modif_fiche_cli->Controls->Add(this->lb_modif_nom_fiche_cli);
            this->pn_modif_fiche_cli->Controls->Add(this->pct3_cli);
            this->pn_modif_fiche_cli->Location = System::Drawing::Point(687, 18);
            this->pn_modif_fiche_cli->Name = L"pn_modif_fiche_cli";
            this->pn_modif_fiche_cli->Size = System::Drawing::Size(662, 363);
            this->pn_modif_fiche_cli->TabIndex = 50;
            // 
            // lb_modif_livraison_fiche_cli
            // 
            this->lb_modif_livraison_fiche_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_livraison_fiche_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_livraison_fiche_cli->Location = System::Drawing::Point(508, 6);
            this->lb_modif_livraison_fiche_cli->Name = L"lb_modif_livraison_fiche_cli";
            this->lb_modif_livraison_fiche_cli->Size = System::Drawing::Size(151, 147);
            this->lb_modif_livraison_fiche_cli->TabIndex = 30;
            this->lb_modif_livraison_fiche_cli->TextAlign = System::Drawing::ContentAlignment::TopRight;
            // 
            // lb_modif_facturation_fiche_client
            // 
            this->lb_modif_facturation_fiche_client->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_facturation_fiche_client->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_facturation_fiche_client->Location = System::Drawing::Point(508, 295);
            this->lb_modif_facturation_fiche_client->Name = L"lb_modif_facturation_fiche_client";
            this->lb_modif_facturation_fiche_client->Size = System::Drawing::Size(151, 58);
            this->lb_modif_facturation_fiche_client->TabIndex = 29;
            this->lb_modif_facturation_fiche_client->TextAlign = System::Drawing::ContentAlignment::BottomRight;
            // 
            // lb_modif_naissance_fiche_cli
            // 
            this->lb_modif_naissance_fiche_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_naissance_fiche_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_naissance_fiche_cli->Location = System::Drawing::Point(3, 248);
            this->lb_modif_naissance_fiche_cli->Name = L"lb_modif_naissance_fiche_cli";
            this->lb_modif_naissance_fiche_cli->Size = System::Drawing::Size(148, 103);
            this->lb_modif_naissance_fiche_cli->TabIndex = 28;
            this->lb_modif_naissance_fiche_cli->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
            // 
            // lb_modif_prenom_fiche_cli
            // 
            this->lb_modif_prenom_fiche_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_prenom_fiche_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_prenom_fiche_cli->Location = System::Drawing::Point(10, 20);
            this->lb_modif_prenom_fiche_cli->Name = L"lb_modif_prenom_fiche_cli";
            this->lb_modif_prenom_fiche_cli->Size = System::Drawing::Size(147, 61);
            this->lb_modif_prenom_fiche_cli->TabIndex = 27;
            // 
            // lb_modif_nom_fiche_cli
            // 
            this->lb_modif_nom_fiche_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_nom_fiche_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_nom_fiche_cli->Location = System::Drawing::Point(3, -9);
            this->lb_modif_nom_fiche_cli->Name = L"lb_modif_nom_fiche_cli";
            this->lb_modif_nom_fiche_cli->Size = System::Drawing::Size(154, 51);
            this->lb_modif_nom_fiche_cli->TabIndex = 26;
            // 
            // pct3_cli
            // 
            this->pct3_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->pct3_cli->Location = System::Drawing::Point(157, 6);
            this->pct3_cli->Name = L"pct3_cli";
            this->pct3_cli->Size = System::Drawing::Size(345, 350);
            this->pct3_cli->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pct3_cli->TabIndex = 25;
            this->pct3_cli->TabStop = false;
            // 
            // tb_modif_livraison_cli
            // 
            this->tb_modif_livraison_cli->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_livraison_cli->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_livraison_cli->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_livraison_cli->Location = System::Drawing::Point(15, 359);
            this->tb_modif_livraison_cli->Name = L"tb_modif_livraison_cli";
            this->tb_modif_livraison_cli->Size = System::Drawing::Size(423, 36);
            this->tb_modif_livraison_cli->TabIndex = 48;
            // 
            // tab_gestion_stock
            // 
            this->tab_gestion_stock->Controls->Add(this->tab_modif_article);
            this->tab_gestion_stock->Controls->Add(this->tab_creer_article);
            this->tab_gestion_stock->Controls->Add(this->tab_suppr_article);
            this->tab_gestion_stock->Controls->Add(this->tab_affich_article);
            this->tab_gestion_stock->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tab_gestion_stock->Location = System::Drawing::Point(0, 88);
            this->tab_gestion_stock->Name = L"tab_gestion_stock";
            this->tab_gestion_stock->SelectedIndex = 0;
            this->tab_gestion_stock->Size = System::Drawing::Size(1359, 515);
            this->tab_gestion_stock->TabIndex = 34;
            this->tab_gestion_stock->Visible = false;
            // 
            // tab_modif_article
            // 
            this->tab_modif_article->BackColor = System::Drawing::Color::Bisque;
            this->tab_modif_article->Controls->Add(this->pn_modif_cacher_info_article);
            this->tab_modif_article->Controls->Add(this->lb_modif_seuil_article);
            this->tab_modif_article->Controls->Add(this->tb_modif_seuil_article);
            this->tab_modif_article->Controls->Add(this->lb_modif_stock_article);
            this->tab_modif_article->Controls->Add(this->tb_modif_stock_article);
            this->tab_modif_article->Controls->Add(this->pn_modif_fiche_article);
            this->tab_modif_article->Controls->Add(this->layout2_modif_btn_article);
            this->tab_modif_article->Controls->Add(this->lb_modif_nom_article);
            this->tab_modif_article->Controls->Add(this->tb_modif_nom_article);
            this->tab_modif_article->Controls->Add(this->tb_modif_prix_article);
            this->tab_modif_article->Controls->Add(this->lb_modif_prix_article);
            this->tab_modif_article->Controls->Add(this->lb_modif_couleur_article);
            this->tab_modif_article->Controls->Add(this->tb_modif_couleur_article);
            this->tab_modif_article->Controls->Add(this->tb_modif_id_article);
            this->tab_modif_article->Controls->Add(this->lb_modif_id_article);
            this->tab_modif_article->Location = System::Drawing::Point(4, 25);
            this->tab_modif_article->Name = L"tab_modif_article";
            this->tab_modif_article->Padding = System::Windows::Forms::Padding(3);
            this->tab_modif_article->Size = System::Drawing::Size(1351, 486);
            this->tab_modif_article->TabIndex = 1;
            this->tab_modif_article->Text = L"Modifier un article";
            // 
            // pn_modif_cacher_info_article
            // 
            this->pn_modif_cacher_info_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->pn_modif_cacher_info_article->Controls->Add(this->layout_affich_btn_article);
            this->pn_modif_cacher_info_article->Location = System::Drawing::Point(6, 81);
            this->pn_modif_cacher_info_article->Name = L"pn_modif_cacher_info_article";
            this->pn_modif_cacher_info_article->Size = System::Drawing::Size(648, 404);
            this->pn_modif_cacher_info_article->TabIndex = 26;
            // 
            // layout_affich_btn_article
            // 
            this->layout_affich_btn_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout_affich_btn_article->ColumnCount = 2;
            this->layout_affich_btn_article->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_btn_article->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_btn_article->Controls->Add(this->btn_modif_valider_article, 0, 0);
            this->layout_affich_btn_article->Controls->Add(this->btn_affich_annuler_article, 1, 0);
            this->layout_affich_btn_article->Location = System::Drawing::Point(3, 65);
            this->layout_affich_btn_article->MinimumSize = System::Drawing::Size(298, 0);
            this->layout_affich_btn_article->Name = L"layout_affich_btn_article";
            this->layout_affich_btn_article->RowCount = 1;
            this->layout_affich_btn_article->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_btn_article->Size = System::Drawing::Size(642, 149);
            this->layout_affich_btn_article->TabIndex = 55;
            // 
            // btn_modif_valider_article
            // 
            this->btn_modif_valider_article->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_modif_valider_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_modif_valider_article->FlatAppearance->BorderSize = 0;
            this->btn_modif_valider_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_valider_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_valider_article->ForeColor = System::Drawing::Color::White;
            this->btn_modif_valider_article->Location = System::Drawing::Point(89, 3);
            this->btn_modif_valider_article->Name = L"btn_modif_valider_article";
            this->btn_modif_valider_article->Size = System::Drawing::Size(143, 143);
            this->btn_modif_valider_article->TabIndex = 52;
            this->btn_modif_valider_article->Text = L"Valider";
            this->btn_modif_valider_article->UseVisualStyleBackColor = false;
            this->btn_modif_valider_article->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_valider_article_Click);
            // 
            // btn_affich_annuler_article
            // 
            this->btn_affich_annuler_article->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich_annuler_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_affich_annuler_article->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_affich_annuler_article->FlatAppearance->BorderSize = 0;
            this->btn_affich_annuler_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich_annuler_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_affich_annuler_article->ForeColor = System::Drawing::Color::White;
            this->btn_affich_annuler_article->Location = System::Drawing::Point(410, 3);
            this->btn_affich_annuler_article->Name = L"btn_affich_annuler_article";
            this->btn_affich_annuler_article->Size = System::Drawing::Size(143, 143);
            this->btn_affich_annuler_article->TabIndex = 53;
            this->btn_affich_annuler_article->Text = L"Annuler";
            this->btn_affich_annuler_article->UseVisualStyleBackColor = false;
            this->btn_affich_annuler_article->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_annuler_article_Click);
            // 
            // lb_modif_seuil_article
            // 
            this->lb_modif_seuil_article->AutoSize = true;
            this->lb_modif_seuil_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_seuil_article->Location = System::Drawing::Point(15, 260);
            this->lb_modif_seuil_article->Name = L"lb_modif_seuil_article";
            this->lb_modif_seuil_article->Size = System::Drawing::Size(424, 22);
            this->lb_modif_seuil_article->TabIndex = 55;
            this->lb_modif_seuil_article->Text = L"Seuil reapprovisionnement :";
            // 
            // tb_modif_seuil_article
            // 
            this->tb_modif_seuil_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_seuil_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_seuil_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_seuil_article->Location = System::Drawing::Point(10, 290);
            this->tb_modif_seuil_article->Name = L"tb_modif_seuil_article";
            this->tb_modif_seuil_article->Size = System::Drawing::Size(615, 36);
            this->tb_modif_seuil_article->TabIndex = 56;
            // 
            // lb_modif_stock_article
            // 
            this->lb_modif_stock_article->AutoSize = true;
            this->lb_modif_stock_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_stock_article->Location = System::Drawing::Point(14, 329);
            this->lb_modif_stock_article->Name = L"lb_modif_stock_article";
            this->lb_modif_stock_article->Size = System::Drawing::Size(104, 22);
            this->lb_modif_stock_article->TabIndex = 53;
            this->lb_modif_stock_article->Text = L"Stock :";
            // 
            // tb_modif_stock_article
            // 
            this->tb_modif_stock_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_stock_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_stock_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_stock_article->Location = System::Drawing::Point(9, 359);
            this->tb_modif_stock_article->Name = L"tb_modif_stock_article";
            this->tb_modif_stock_article->Size = System::Drawing::Size(615, 36);
            this->tb_modif_stock_article->TabIndex = 54;
            // 
            // pn_modif_fiche_article
            // 
            this->pn_modif_fiche_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pn_modif_fiche_article->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pn_modif_fiche_article->Controls->Add(this->lb_modif_prix_fiche_article);
            this->pn_modif_fiche_article->Controls->Add(this->lb_modif_couleur_fiche_article);
            this->pn_modif_fiche_article->Controls->Add(this->lb_modif_nom_fiche_article);
            this->pn_modif_fiche_article->Controls->Add(this->pct3_article);
            this->pn_modif_fiche_article->Location = System::Drawing::Point(665, 17);
            this->pn_modif_fiche_article->Name = L"pn_modif_fiche_article";
            this->pn_modif_fiche_article->Size = System::Drawing::Size(662, 357);
            this->pn_modif_fiche_article->TabIndex = 52;
            // 
            // lb_modif_prix_fiche_article
            // 
            this->lb_modif_prix_fiche_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_prix_fiche_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_prix_fiche_article->ImageAlign = System::Drawing::ContentAlignment::TopRight;
            this->lb_modif_prix_fiche_article->Location = System::Drawing::Point(508, 6);
            this->lb_modif_prix_fiche_article->Name = L"lb_modif_prix_fiche_article";
            this->lb_modif_prix_fiche_article->Size = System::Drawing::Size(151, 141);
            this->lb_modif_prix_fiche_article->TabIndex = 30;
            this->lb_modif_prix_fiche_article->TextAlign = System::Drawing::ContentAlignment::TopRight;
            // 
            // lb_modif_couleur_fiche_article
            // 
            this->lb_modif_couleur_fiche_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_couleur_fiche_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_couleur_fiche_article->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
            this->lb_modif_couleur_fiche_article->Location = System::Drawing::Point(3, 3);
            this->lb_modif_couleur_fiche_article->Name = L"lb_modif_couleur_fiche_article";
            this->lb_modif_couleur_fiche_article->Size = System::Drawing::Size(154, 121);
            this->lb_modif_couleur_fiche_article->TabIndex = 27;
            // 
            // lb_modif_nom_fiche_article
            // 
            this->lb_modif_nom_fiche_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_nom_fiche_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_nom_fiche_article->Location = System::Drawing::Point(9, 239);
            this->lb_modif_nom_fiche_article->Name = L"lb_modif_nom_fiche_article";
            this->lb_modif_nom_fiche_article->Size = System::Drawing::Size(647, 68);
            this->lb_modif_nom_fiche_article->TabIndex = 26;
            this->lb_modif_nom_fiche_article->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pct3_article
            // 
            this->pct3_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->pct3_article->Location = System::Drawing::Point(157, 6);
            this->pct3_article->Name = L"pct3_article";
            this->pct3_article->Size = System::Drawing::Size(345, 237);
            this->pct3_article->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pct3_article->TabIndex = 25;
            this->pct3_article->TabStop = false;
            // 
            // layout2_modif_btn_article
            // 
            this->layout2_modif_btn_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout2_modif_btn_article->AutoSize = true;
            this->layout2_modif_btn_article->ColumnCount = 3;
            this->layout2_modif_btn_article->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_modif_btn_article->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_modif_btn_article->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                200)));
            this->layout2_modif_btn_article->Controls->Add(this->btn_modif_actu_article, 0, 0);
            this->layout2_modif_btn_article->Controls->Add(this->btn_modif_article, 0, 0);
            this->layout2_modif_btn_article->Controls->Add(this->btn_modif_autre_article, 1, 0);
            this->layout2_modif_btn_article->Location = System::Drawing::Point(16, 399);
            this->layout2_modif_btn_article->Name = L"layout2_modif_btn_article";
            this->layout2_modif_btn_article->RowCount = 1;
            this->layout2_modif_btn_article->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_modif_btn_article->Size = System::Drawing::Size(626, 100);
            this->layout2_modif_btn_article->TabIndex = 0;
            // 
            // btn_modif_actu_article
            // 
            this->btn_modif_actu_article->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_actu_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->btn_modif_actu_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_actu_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_actu_article->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_actu_article->Location = System::Drawing::Point(216, 3);
            this->btn_modif_actu_article->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_actu_article->Name = L"btn_modif_actu_article";
            this->btn_modif_actu_article->Size = System::Drawing::Size(207, 83);
            this->btn_modif_actu_article->TabIndex = 57;
            this->btn_modif_actu_article->TabStop = false;
            this->btn_modif_actu_article->Text = L"Actualiser l\'affichage de la fiche article";
            this->btn_modif_actu_article->UseVisualStyleBackColor = false;
            this->btn_modif_actu_article->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_actu_article_Click);
            // 
            // btn_modif_article
            // 
            this->btn_modif_article->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->btn_modif_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_article->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_article->Location = System::Drawing::Point(3, 3);
            this->btn_modif_article->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_article->Name = L"btn_modif_article";
            this->btn_modif_article->Size = System::Drawing::Size(207, 83);
            this->btn_modif_article->TabIndex = 56;
            this->btn_modif_article->Text = L"Modifier l\'article";
            this->btn_modif_article->UseVisualStyleBackColor = false;
            this->btn_modif_article->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_article_Click);
            // 
            // btn_modif_autre_article
            // 
            this->btn_modif_autre_article->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_autre_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_modif_autre_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_autre_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_modif_autre_article->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_autre_article->Location = System::Drawing::Point(429, 3);
            this->btn_modif_autre_article->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_autre_article->Name = L"btn_modif_autre_article";
            this->btn_modif_autre_article->Size = System::Drawing::Size(194, 83);
            this->btn_modif_autre_article->TabIndex = 55;
            this->btn_modif_autre_article->TabStop = false;
            this->btn_modif_autre_article->Text = L"Modifier un autre article";
            this->btn_modif_autre_article->UseVisualStyleBackColor = false;
            this->btn_modif_autre_article->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_autre_article_Click);
            // 
            // lb_modif_nom_article
            // 
            this->lb_modif_nom_article->AutoSize = true;
            this->lb_modif_nom_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_nom_article->Location = System::Drawing::Point(20, 95);
            this->lb_modif_nom_article->Name = L"lb_modif_nom_article";
            this->lb_modif_nom_article->Size = System::Drawing::Size(79, 22);
            this->lb_modif_nom_article->TabIndex = 40;
            this->lb_modif_nom_article->Text = L"Nom :";
            // 
            // tb_modif_nom_article
            // 
            this->tb_modif_nom_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_nom_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_nom_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_nom_article->Location = System::Drawing::Point(102, 91);
            this->tb_modif_nom_article->Name = L"tb_modif_nom_article";
            this->tb_modif_nom_article->Size = System::Drawing::Size(526, 36);
            this->tb_modif_nom_article->TabIndex = 39;
            // 
            // tb_modif_prix_article
            // 
            this->tb_modif_prix_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_prix_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_prix_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_prix_article->Location = System::Drawing::Point(102, 141);
            this->tb_modif_prix_article->Name = L"tb_modif_prix_article";
            this->tb_modif_prix_article->Size = System::Drawing::Size(526, 36);
            this->tb_modif_prix_article->TabIndex = 42;
            // 
            // lb_modif_prix_article
            // 
            this->lb_modif_prix_article->AutoSize = true;
            this->lb_modif_prix_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_prix_article->Location = System::Drawing::Point(16, 147);
            this->lb_modif_prix_article->Name = L"lb_modif_prix_article";
            this->lb_modif_prix_article->Size = System::Drawing::Size(83, 22);
            this->lb_modif_prix_article->TabIndex = 41;
            this->lb_modif_prix_article->Text = L"Prix :";
            // 
            // lb_modif_couleur_article
            // 
            this->lb_modif_couleur_article->AutoSize = true;
            this->lb_modif_couleur_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_modif_couleur_article->Location = System::Drawing::Point(14, 186);
            this->lb_modif_couleur_article->Name = L"lb_modif_couleur_article";
            this->lb_modif_couleur_article->Size = System::Drawing::Size(144, 22);
            this->lb_modif_couleur_article->TabIndex = 43;
            this->lb_modif_couleur_article->Text = L"Couleur :";
            // 
            // tb_modif_couleur_article
            // 
            this->tb_modif_couleur_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_couleur_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_couleur_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_couleur_article->Location = System::Drawing::Point(9, 216);
            this->tb_modif_couleur_article->Name = L"tb_modif_couleur_article";
            this->tb_modif_couleur_article->Size = System::Drawing::Size(615, 36);
            this->tb_modif_couleur_article->TabIndex = 44;
            // 
            // tb_modif_id_article
            // 
            this->tb_modif_id_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_id_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_id_article->Font = (gcnew System::Drawing::Font(L"Asiana", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_id_article->Location = System::Drawing::Point(18, 43);
            this->tb_modif_id_article->Name = L"tb_modif_id_article";
            this->tb_modif_id_article->Size = System::Drawing::Size(610, 33);
            this->tb_modif_id_article->TabIndex = 38;
            // 
            // lb_modif_id_article
            // 
            this->lb_modif_id_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->lb_modif_id_article->AutoSize = true;
            this->lb_modif_id_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_id_article->Location = System::Drawing::Point(15, 15);
            this->lb_modif_id_article->Name = L"lb_modif_id_article";
            this->lb_modif_id_article->Size = System::Drawing::Size(432, 18);
            this->lb_modif_id_article->TabIndex = 37;
            this->lb_modif_id_article->Text = L"Entrez l\'ID de l\'article a modifier :";
            // 
            // tab_creer_article
            // 
            this->tab_creer_article->BackColor = System::Drawing::Color::Bisque;
            this->tab_creer_article->Controls->Add(this->pn_creer_btn_article);
            this->tab_creer_article->Controls->Add(this->bdd_creer_article);
            this->tab_creer_article->Controls->Add(this->pn_creer_article);
            this->tab_creer_article->Location = System::Drawing::Point(4, 25);
            this->tab_creer_article->Name = L"tab_creer_article";
            this->tab_creer_article->Padding = System::Windows::Forms::Padding(3);
            this->tab_creer_article->Size = System::Drawing::Size(1351, 486);
            this->tab_creer_article->TabIndex = 0;
            this->tab_creer_article->Text = L"Creer un article";
            // 
            // pn_creer_btn_article
            // 
            this->pn_creer_btn_article->Controls->Add(this->btn_creer_actu_article);
            this->pn_creer_btn_article->Controls->Add(this->btn_creer_article);
            this->pn_creer_btn_article->Controls->Add(this->splitter3);
            this->pn_creer_btn_article->Location = System::Drawing::Point(12, 389);
            this->pn_creer_btn_article->Name = L"pn_creer_btn_article";
            this->pn_creer_btn_article->Size = System::Drawing::Size(678, 89);
            this->pn_creer_btn_article->TabIndex = 14;
            // 
            // btn_creer_actu_article
            // 
            this->btn_creer_actu_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_creer_actu_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->btn_creer_actu_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer_actu_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_creer_actu_article->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_creer_actu_article->Location = System::Drawing::Point(351, 3);
            this->btn_creer_actu_article->Name = L"btn_creer_actu_article";
            this->btn_creer_actu_article->Size = System::Drawing::Size(324, 83);
            this->btn_creer_actu_article->TabIndex = 2;
            this->btn_creer_actu_article->Text = L"Actualiser l\'affichage de la base de donnees";
            this->btn_creer_actu_article->UseVisualStyleBackColor = false;
            this->btn_creer_actu_article->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_actu_article_Click);
            // 
            // btn_creer_article
            // 
            this->btn_creer_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_creer_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->btn_creer_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_creer_article->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_creer_article->Location = System::Drawing::Point(3, 3);
            this->btn_creer_article->Name = L"btn_creer_article";
            this->btn_creer_article->Size = System::Drawing::Size(333, 83);
            this->btn_creer_article->TabIndex = 1;
            this->btn_creer_article->Text = L"Creer l\'article";
            this->btn_creer_article->UseVisualStyleBackColor = false;
            this->btn_creer_article->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_article_Click);
            // 
            // splitter3
            // 
            this->splitter3->Location = System::Drawing::Point(0, 0);
            this->splitter3->Name = L"splitter3";
            this->splitter3->Size = System::Drawing::Size(345, 89);
            this->splitter3->TabIndex = 0;
            this->splitter3->TabStop = false;
            // 
            // bdd_creer_article
            // 
            this->bdd_creer_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_creer_article->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_creer_article->Location = System::Drawing::Point(698, 6);
            this->bdd_creer_article->Name = L"bdd_creer_article";
            this->bdd_creer_article->RowHeadersWidth = 51;
            this->bdd_creer_article->RowTemplate->Height = 24;
            this->bdd_creer_article->Size = System::Drawing::Size(651, 474);
            this->bdd_creer_article->TabIndex = 6;
            // 
            // pn_creer_article
            // 
            this->pn_creer_article->Controls->Add(this->lb_creer_stock_article);
            this->pn_creer_article->Controls->Add(this->tb_creer_stock_article);
            this->pn_creer_article->Controls->Add(this->lb_creer_seuil_article);
            this->pn_creer_article->Controls->Add(this->tb_creer_seuil_article);
            this->pn_creer_article->Controls->Add(this->pct_article);
            this->pn_creer_article->Controls->Add(this->lb_creer_nom_artcile);
            this->pn_creer_article->Controls->Add(this->tb_creer_nom_article);
            this->pn_creer_article->Controls->Add(this->tb_creer_prix_article);
            this->pn_creer_article->Controls->Add(this->lb_creer_prix_article);
            this->pn_creer_article->Controls->Add(this->lb_creer_couleur_article);
            this->pn_creer_article->Controls->Add(this->tb_creer_couleur_article);
            this->pn_creer_article->Location = System::Drawing::Point(8, 6);
            this->pn_creer_article->Name = L"pn_creer_article";
            this->pn_creer_article->Size = System::Drawing::Size(682, 380);
            this->pn_creer_article->TabIndex = 15;
            // 
            // lb_creer_stock_article
            // 
            this->lb_creer_stock_article->AutoSize = true;
            this->lb_creer_stock_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_stock_article->Location = System::Drawing::Point(11, 304);
            this->lb_creer_stock_article->Name = L"lb_creer_stock_article";
            this->lb_creer_stock_article->Size = System::Drawing::Size(104, 22);
            this->lb_creer_stock_article->TabIndex = 11;
            this->lb_creer_stock_article->Text = L"Stock :";
            // 
            // tb_creer_stock_article
            // 
            this->tb_creer_stock_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_stock_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_stock_article->Location = System::Drawing::Point(9, 330);
            this->tb_creer_stock_article->Name = L"tb_creer_stock_article";
            this->tb_creer_stock_article->Size = System::Drawing::Size(318, 36);
            this->tb_creer_stock_article->TabIndex = 10;
            // 
            // lb_creer_seuil_article
            // 
            this->lb_creer_seuil_article->AutoSize = true;
            this->lb_creer_seuil_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_seuil_article->Location = System::Drawing::Point(12, 233);
            this->lb_creer_seuil_article->Name = L"lb_creer_seuil_article";
            this->lb_creer_seuil_article->Size = System::Drawing::Size(229, 22);
            this->lb_creer_seuil_article->TabIndex = 9;
            this->lb_creer_seuil_article->Text = L"Seuil reappro :";
            // 
            // tb_creer_seuil_article
            // 
            this->tb_creer_seuil_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_seuil_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_seuil_article->Location = System::Drawing::Point(10, 259);
            this->tb_creer_seuil_article->Name = L"tb_creer_seuil_article";
            this->tb_creer_seuil_article->Size = System::Drawing::Size(318, 36);
            this->tb_creer_seuil_article->TabIndex = 8;
            // 
            // pct_article
            // 
            this->pct_article->Location = System::Drawing::Point(334, 4);
            this->pct_article->Name = L"pct_article";
            this->pct_article->Size = System::Drawing::Size(345, 370);
            this->pct_article->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pct_article->TabIndex = 7;
            this->pct_article->TabStop = false;
            // 
            // lb_creer_nom_artcile
            // 
            this->lb_creer_nom_artcile->AutoSize = true;
            this->lb_creer_nom_artcile->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_nom_artcile->Location = System::Drawing::Point(9, 15);
            this->lb_creer_nom_artcile->Name = L"lb_creer_nom_artcile";
            this->lb_creer_nom_artcile->Size = System::Drawing::Size(79, 22);
            this->lb_creer_nom_artcile->TabIndex = 1;
            this->lb_creer_nom_artcile->Text = L"Nom :";
            // 
            // tb_creer_nom_article
            // 
            this->tb_creer_nom_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_nom_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_nom_article->Location = System::Drawing::Point(7, 41);
            this->tb_creer_nom_article->Name = L"tb_creer_nom_article";
            this->tb_creer_nom_article->Size = System::Drawing::Size(318, 36);
            this->tb_creer_nom_article->TabIndex = 0;
            // 
            // tb_creer_prix_article
            // 
            this->tb_creer_prix_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_prix_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_prix_article->Location = System::Drawing::Point(8, 117);
            this->tb_creer_prix_article->Name = L"tb_creer_prix_article";
            this->tb_creer_prix_article->Size = System::Drawing::Size(317, 36);
            this->tb_creer_prix_article->TabIndex = 3;
            // 
            // lb_creer_prix_article
            // 
            this->lb_creer_prix_article->AutoSize = true;
            this->lb_creer_prix_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_prix_article->Location = System::Drawing::Point(12, 90);
            this->lb_creer_prix_article->Name = L"lb_creer_prix_article";
            this->lb_creer_prix_article->Size = System::Drawing::Size(125, 22);
            this->lb_creer_prix_article->TabIndex = 2;
            this->lb_creer_prix_article->Text = L"Prix HT :";
            // 
            // lb_creer_couleur_article
            // 
            this->lb_creer_couleur_article->AutoSize = true;
            this->lb_creer_couleur_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_couleur_article->Location = System::Drawing::Point(6, 165);
            this->lb_creer_couleur_article->Name = L"lb_creer_couleur_article";
            this->lb_creer_couleur_article->Size = System::Drawing::Size(144, 22);
            this->lb_creer_couleur_article->TabIndex = 4;
            this->lb_creer_couleur_article->Text = L"Couleur :";
            // 
            // tb_creer_couleur_article
            // 
            this->tb_creer_couleur_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_couleur_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_couleur_article->Location = System::Drawing::Point(8, 190);
            this->tb_creer_couleur_article->Name = L"tb_creer_couleur_article";
            this->tb_creer_couleur_article->Size = System::Drawing::Size(321, 36);
            this->tb_creer_couleur_article->TabIndex = 5;
            // 
            // tab_suppr_article
            // 
            this->tab_suppr_article->BackColor = System::Drawing::Color::Bisque;
            this->tab_suppr_article->Controls->Add(this->btn_suppr_annuler_article);
            this->tab_suppr_article->Controls->Add(this->btn_suppr_valider_article);
            this->tab_suppr_article->Controls->Add(this->bdd_suppr_article);
            this->tab_suppr_article->Controls->Add(this->tb_suppr_id_article);
            this->tab_suppr_article->Controls->Add(this->lb_suppr_id_article);
            this->tab_suppr_article->Location = System::Drawing::Point(4, 25);
            this->tab_suppr_article->Name = L"tab_suppr_article";
            this->tab_suppr_article->Padding = System::Windows::Forms::Padding(3);
            this->tab_suppr_article->Size = System::Drawing::Size(1351, 486);
            this->tab_suppr_article->TabIndex = 2;
            this->tab_suppr_article->Text = L"Supprimer un article";
            // 
            // btn_suppr_annuler_article
            // 
            this->btn_suppr_annuler_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_suppr_annuler_article->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_suppr_annuler_article->FlatAppearance->BorderSize = 0;
            this->btn_suppr_annuler_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_suppr_annuler_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_suppr_annuler_article->ForeColor = System::Drawing::Color::White;
            this->btn_suppr_annuler_article->Location = System::Drawing::Point(291, 216);
            this->btn_suppr_annuler_article->Name = L"btn_suppr_annuler_article";
            this->btn_suppr_annuler_article->Size = System::Drawing::Size(143, 143);
            this->btn_suppr_annuler_article->TabIndex = 16;
            this->btn_suppr_annuler_article->Text = L"Annuler";
            this->btn_suppr_annuler_article->UseVisualStyleBackColor = false;
            this->btn_suppr_annuler_article->Click += gcnew System::EventHandler(this, &MainForm::btn_suppr_annuler_article_Click);
            // 
            // btn_suppr_valider_article
            // 
            this->btn_suppr_valider_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_suppr_valider_article->FlatAppearance->BorderSize = 0;
            this->btn_suppr_valider_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_suppr_valider_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_suppr_valider_article->ForeColor = System::Drawing::Color::White;
            this->btn_suppr_valider_article->Location = System::Drawing::Point(70, 216);
            this->btn_suppr_valider_article->Name = L"btn_suppr_valider_article";
            this->btn_suppr_valider_article->Size = System::Drawing::Size(143, 143);
            this->btn_suppr_valider_article->TabIndex = 15;
            this->btn_suppr_valider_article->Text = L"Valider";
            this->btn_suppr_valider_article->UseVisualStyleBackColor = false;
            this->btn_suppr_valider_article->Click += gcnew System::EventHandler(this, &MainForm::btn_suppr_valider_article_Click);
            // 
            // bdd_suppr_article
            // 
            this->bdd_suppr_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_suppr_article->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_suppr_article->Location = System::Drawing::Point(517, 6);
            this->bdd_suppr_article->Name = L"bdd_suppr_article";
            this->bdd_suppr_article->RowHeadersWidth = 51;
            this->bdd_suppr_article->RowTemplate->Height = 24;
            this->bdd_suppr_article->Size = System::Drawing::Size(832, 472);
            this->bdd_suppr_article->TabIndex = 14;
            // 
            // tb_suppr_id_article
            // 
            this->tb_suppr_id_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_suppr_id_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_suppr_id_article->Location = System::Drawing::Point(18, 151);
            this->tb_suppr_id_article->Name = L"tb_suppr_id_article";
            this->tb_suppr_id_article->Size = System::Drawing::Size(475, 36);
            this->tb_suppr_id_article->TabIndex = 13;
            // 
            // lb_suppr_id_article
            // 
            this->lb_suppr_id_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_suppr_id_article->Location = System::Drawing::Point(14, 91);
            this->lb_suppr_id_article->Name = L"lb_suppr_id_article";
            this->lb_suppr_id_article->Size = System::Drawing::Size(479, 52);
            this->lb_suppr_id_article->TabIndex = 12;
            this->lb_suppr_id_article->Text = L"Entrez l\'ID de l\'article supprimer :";
            this->lb_suppr_id_article->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tab_affich_article
            // 
            this->tab_affich_article->BackColor = System::Drawing::Color::Bisque;
            this->tab_affich_article->Controls->Add(this->bdd_affich_article);
            this->tab_affich_article->Controls->Add(this->layout_affich_article);
            this->tab_affich_article->Controls->Add(this->tb_affich_id_article);
            this->tab_affich_article->Controls->Add(this->lb_affich_id_article);
            this->tab_affich_article->Location = System::Drawing::Point(4, 25);
            this->tab_affich_article->Name = L"tab_affich_article";
            this->tab_affich_article->Padding = System::Windows::Forms::Padding(3);
            this->tab_affich_article->Size = System::Drawing::Size(1351, 486);
            this->tab_affich_article->TabIndex = 3;
            this->tab_affich_article->Text = L"Afficher un article";
            // 
            // bdd_affich_article
            // 
            this->bdd_affich_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_affich_article->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_affich_article->Location = System::Drawing::Point(698, 14);
            this->bdd_affich_article->Name = L"bdd_affich_article";
            this->bdd_affich_article->RowHeadersWidth = 51;
            this->bdd_affich_article->RowTemplate->Height = 24;
            this->bdd_affich_article->Size = System::Drawing::Size(645, 454);
            this->bdd_affich_article->TabIndex = 55;
            // 
            // layout_affich_article
            // 
            this->layout_affich_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout_affich_article->ColumnCount = 2;
            this->layout_affich_article->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_article->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_article->Controls->Add(this->btn_affich_valider_article, 0, 0);
            this->layout_affich_article->Controls->Add(this->btn_affich_autre_article, 1, 0);
            this->layout_affich_article->Location = System::Drawing::Point(3, 201);
            this->layout_affich_article->MinimumSize = System::Drawing::Size(298, 0);
            this->layout_affich_article->Name = L"layout_affich_article";
            this->layout_affich_article->RowCount = 1;
            this->layout_affich_article->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_article->Size = System::Drawing::Size(682, 149);
            this->layout_affich_article->TabIndex = 54;
            // 
            // btn_affich_valider_article
            // 
            this->btn_affich_valider_article->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich_valider_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_affich_valider_article->FlatAppearance->BorderSize = 0;
            this->btn_affich_valider_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich_valider_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_affich_valider_article->ForeColor = System::Drawing::Color::White;
            this->btn_affich_valider_article->Location = System::Drawing::Point(99, 3);
            this->btn_affich_valider_article->Name = L"btn_affich_valider_article";
            this->btn_affich_valider_article->Size = System::Drawing::Size(143, 143);
            this->btn_affich_valider_article->TabIndex = 52;
            this->btn_affich_valider_article->Text = L"Valider";
            this->btn_affich_valider_article->UseVisualStyleBackColor = false;
            this->btn_affich_valider_article->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_valider_article_Click);
            // 
            // btn_affich_autre_article
            // 
            this->btn_affich_autre_article->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich_autre_article->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_affich_autre_article->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_affich_autre_article->FlatAppearance->BorderSize = 0;
            this->btn_affich_autre_article->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich_autre_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_affich_autre_article->ForeColor = System::Drawing::Color::White;
            this->btn_affich_autre_article->Location = System::Drawing::Point(440, 3);
            this->btn_affich_autre_article->Name = L"btn_affich_autre_article";
            this->btn_affich_autre_article->Size = System::Drawing::Size(143, 143);
            this->btn_affich_autre_article->TabIndex = 53;
            this->btn_affich_autre_article->Text = L"Afficher un autre article";
            this->btn_affich_autre_article->UseVisualStyleBackColor = false;
            this->btn_affich_autre_article->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_autre_article_Click);
            // 
            // tb_affich_id_article
            // 
            this->tb_affich_id_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tb_affich_id_article->BackColor = System::Drawing::Color::SeaShell;
            this->tb_affich_id_article->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_affich_id_article->Location = System::Drawing::Point(11, 135);
            this->tb_affich_id_article->Name = L"tb_affich_id_article";
            this->tb_affich_id_article->Size = System::Drawing::Size(670, 36);
            this->tb_affich_id_article->TabIndex = 15;
            // 
            // lb_affich_id_article
            // 
            this->lb_affich_id_article->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lb_affich_id_article->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_affich_id_article->Location = System::Drawing::Point(11, 76);
            this->lb_affich_id_article->Name = L"lb_affich_id_article";
            this->lb_affich_id_article->Size = System::Drawing::Size(670, 73);
            this->lb_affich_id_article->TabIndex = 14;
            this->lb_affich_id_article->Text = L"Entrez l\'ID de l\'article a afficher :";
            this->lb_affich_id_article->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tab_gestion_commande
            // 
            this->tab_gestion_commande->Controls->Add(this->tab_creer_commande);
            this->tab_gestion_commande->Controls->Add(this->tab_suppr_commande);
            this->tab_gestion_commande->Controls->Add(this->tab_affich_commade);
            this->tab_gestion_commande->Controls->Add(this->tab_modif_commande);
            this->tab_gestion_commande->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tab_gestion_commande->Location = System::Drawing::Point(0, 88);
            this->tab_gestion_commande->Name = L"tab_gestion_commande";
            this->tab_gestion_commande->SelectedIndex = 0;
            this->tab_gestion_commande->Size = System::Drawing::Size(1359, 515);
            this->tab_gestion_commande->TabIndex = 35;
            this->tab_gestion_commande->Visible = false;
            // 
            // tab_creer_commande
            // 
            this->tab_creer_commande->BackColor = System::Drawing::Color::Bisque;
            this->tab_creer_commande->Controls->Add(this->layout_btn_creer_commande);
            this->tab_creer_commande->Controls->Add(this->bdd_creer_commande);
            this->tab_creer_commande->Controls->Add(this->pn_creer_commande);
            this->tab_creer_commande->Location = System::Drawing::Point(4, 25);
            this->tab_creer_commande->Name = L"tab_creer_commande";
            this->tab_creer_commande->Padding = System::Windows::Forms::Padding(3);
            this->tab_creer_commande->Size = System::Drawing::Size(1351, 486);
            this->tab_creer_commande->TabIndex = 0;
            this->tab_creer_commande->Text = L"Creer une commande";
            // 
            // layout_btn_creer_commande
            // 
            this->layout_btn_creer_commande->AutoSize = true;
            this->layout_btn_creer_commande->ColumnCount = 3;
            this->layout_btn_creer_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_btn_creer_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_btn_creer_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                233)));
            this->layout_btn_creer_commande->Controls->Add(this->btn_ajouter_article_commande, 0, 0);
            this->layout_btn_creer_commande->Controls->Add(this->btn_creer_valider_base_commande, 0, 0);
            this->layout_btn_creer_commande->Controls->Add(this->btn_ajouter_date_paiement, 2, 0);
            this->layout_btn_creer_commande->Location = System::Drawing::Point(0, 389);
            this->layout_btn_creer_commande->Name = L"layout_btn_creer_commande";
            this->layout_btn_creer_commande->RowCount = 1;
            this->layout_btn_creer_commande->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_btn_creer_commande->Size = System::Drawing::Size(697, 91);
            this->layout_btn_creer_commande->TabIndex = 16;
            // 
            // btn_ajouter_article_commande
            // 
            this->btn_ajouter_article_commande->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_ajouter_article_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->btn_ajouter_article_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_ajouter_article_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_ajouter_article_commande->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_ajouter_article_commande->Location = System::Drawing::Point(239, 3);
            this->btn_ajouter_article_commande->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_ajouter_article_commande->Name = L"btn_ajouter_article_commande";
            this->btn_ajouter_article_commande->Size = System::Drawing::Size(218, 83);
            this->btn_ajouter_article_commande->TabIndex = 57;
            this->btn_ajouter_article_commande->TabStop = false;
            this->btn_ajouter_article_commande->Text = L"Ajouter un article";
            this->btn_ajouter_article_commande->UseVisualStyleBackColor = false;
            this->btn_ajouter_article_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_ajouter_article_commande_Click);
            // 
            // btn_creer_valider_base_commande
            // 
            this->btn_creer_valider_base_commande->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_creer_valider_base_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->btn_creer_valider_base_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer_valider_base_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_creer_valider_base_commande->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_creer_valider_base_commande->Location = System::Drawing::Point(7, 3);
            this->btn_creer_valider_base_commande->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_creer_valider_base_commande->Name = L"btn_creer_valider_base_commande";
            this->btn_creer_valider_base_commande->Size = System::Drawing::Size(218, 83);
            this->btn_creer_valider_base_commande->TabIndex = 56;
            this->btn_creer_valider_base_commande->Text = L"Valider la commande";
            this->btn_creer_valider_base_commande->UseVisualStyleBackColor = false;
            this->btn_creer_valider_base_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_valider_base_commande_Click);
            // 
            // btn_ajouter_date_paiement
            // 
            this->btn_ajouter_date_paiement->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_ajouter_date_paiement->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_ajouter_date_paiement->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_ajouter_date_paiement->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_ajouter_date_paiement->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_ajouter_date_paiement->Location = System::Drawing::Point(473, 3);
            this->btn_ajouter_date_paiement->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_ajouter_date_paiement->Name = L"btn_ajouter_date_paiement";
            this->btn_ajouter_date_paiement->Size = System::Drawing::Size(214, 83);
            this->btn_ajouter_date_paiement->TabIndex = 55;
            this->btn_ajouter_date_paiement->TabStop = false;
            this->btn_ajouter_date_paiement->Text = L"Ajouter une date de paiement";
            this->btn_ajouter_date_paiement->UseVisualStyleBackColor = false;
            this->btn_ajouter_date_paiement->Click += gcnew System::EventHandler(this, &MainForm::btn_ajouter_date_paiement_Click);
            // 
            // bdd_creer_commande
            // 
            this->bdd_creer_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_creer_commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_creer_commande->Location = System::Drawing::Point(698, 6);
            this->bdd_creer_commande->Name = L"bdd_creer_commande";
            this->bdd_creer_commande->RowHeadersWidth = 51;
            this->bdd_creer_commande->RowTemplate->Height = 24;
            this->bdd_creer_commande->Size = System::Drawing::Size(629, 474);
            this->bdd_creer_commande->TabIndex = 6;
            // 
            // pn_creer_commande
            // 
            this->pn_creer_commande->Controls->Add(this->tb_creer_moyen_paiement_commande);
            this->pn_creer_commande->Controls->Add(this->lb_creer_ref_commande);
            this->pn_creer_commande->Controls->Add(this->lb_creer_moyen_paiement_commande);
            this->pn_creer_commande->Controls->Add(this->tb_creer_ref_commande);
            this->pn_creer_commande->Controls->Add(this->tb_creer_emision_commande);
            this->pn_creer_commande->Controls->Add(this->tb_creer_nb_paiement_commande);
            this->pn_creer_commande->Controls->Add(this->lb_creer_emission_commande);
            this->pn_creer_commande->Controls->Add(this->lb_creer_nb_paiement_commande);
            this->pn_creer_commande->Controls->Add(this->lb_creer_livraison_commande);
            this->pn_creer_commande->Controls->Add(this->tb_creer_livraison_commande);
            this->pn_creer_commande->Controls->Add(this->pn_creer_article_commande);
            this->pn_creer_commande->Controls->Add(this->pn_creer_paiement_commande);
            this->pn_creer_commande->Location = System::Drawing::Point(8, 6);
            this->pn_creer_commande->Name = L"pn_creer_commande";
            this->pn_creer_commande->Size = System::Drawing::Size(682, 380);
            this->pn_creer_commande->TabIndex = 15;
            // 
            // tb_creer_moyen_paiement_commande
            // 
            this->tb_creer_moyen_paiement_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_moyen_paiement_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_moyen_paiement_commande->Location = System::Drawing::Point(7, 335);
            this->tb_creer_moyen_paiement_commande->Name = L"tb_creer_moyen_paiement_commande";
            this->tb_creer_moyen_paiement_commande->Size = System::Drawing::Size(321, 36);
            this->tb_creer_moyen_paiement_commande->TabIndex = 11;
            // 
            // lb_creer_ref_commande
            // 
            this->lb_creer_ref_commande->AutoSize = true;
            this->lb_creer_ref_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_creer_ref_commande->Location = System::Drawing::Point(11, 39);
            this->lb_creer_ref_commande->Name = L"lb_creer_ref_commande";
            this->lb_creer_ref_commande->Size = System::Drawing::Size(76, 22);
            this->lb_creer_ref_commande->TabIndex = 1;
            this->lb_creer_ref_commande->Text = L"Ref :";
            // 
            // lb_creer_moyen_paiement_commande
            // 
            this->lb_creer_moyen_paiement_commande->AutoSize = true;
            this->lb_creer_moyen_paiement_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_moyen_paiement_commande->Location = System::Drawing::Point(9, 310);
            this->lb_creer_moyen_paiement_commande->Name = L"lb_creer_moyen_paiement_commande";
            this->lb_creer_moyen_paiement_commande->Size = System::Drawing::Size(302, 22);
            this->lb_creer_moyen_paiement_commande->TabIndex = 10;
            this->lb_creer_moyen_paiement_commande->Text = L"Moyen de paiement :";
            // 
            // tb_creer_ref_commande
            // 
            this->tb_creer_ref_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_ref_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_ref_commande->Location = System::Drawing::Point(94, 33);
            this->tb_creer_ref_commande->Name = L"tb_creer_ref_commande";
            this->tb_creer_ref_commande->Size = System::Drawing::Size(231, 36);
            this->tb_creer_ref_commande->TabIndex = 0;
            // 
            // tb_creer_emision_commande
            // 
            this->tb_creer_emision_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_emision_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_emision_commande->Location = System::Drawing::Point(7, 266);
            this->tb_creer_emision_commande->Name = L"tb_creer_emision_commande";
            this->tb_creer_emision_commande->Size = System::Drawing::Size(321, 36);
            this->tb_creer_emision_commande->TabIndex = 9;
            // 
            // tb_creer_nb_paiement_commande
            // 
            this->tb_creer_nb_paiement_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_nb_paiement_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_nb_paiement_commande->Location = System::Drawing::Point(7, 117);
            this->tb_creer_nb_paiement_commande->Name = L"tb_creer_nb_paiement_commande";
            this->tb_creer_nb_paiement_commande->Size = System::Drawing::Size(318, 36);
            this->tb_creer_nb_paiement_commande->TabIndex = 3;
            // 
            // lb_creer_emission_commande
            // 
            this->lb_creer_emission_commande->AutoSize = true;
            this->lb_creer_emission_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_emission_commande->Location = System::Drawing::Point(5, 241);
            this->lb_creer_emission_commande->Name = L"lb_creer_emission_commande";
            this->lb_creer_emission_commande->Size = System::Drawing::Size(221, 22);
            this->lb_creer_emission_commande->TabIndex = 8;
            this->lb_creer_emission_commande->Text = L"Date emission :";
            // 
            // lb_creer_nb_paiement_commande
            // 
            this->lb_creer_nb_paiement_commande->AutoSize = true;
            this->lb_creer_nb_paiement_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_nb_paiement_commande->Location = System::Drawing::Point(0, 92);
            this->lb_creer_nb_paiement_commande->Name = L"lb_creer_nb_paiement_commande";
            this->lb_creer_nb_paiement_commande->Size = System::Drawing::Size(336, 22);
            this->lb_creer_nb_paiement_commande->TabIndex = 2;
            this->lb_creer_nb_paiement_commande->Text = L"Nombre de paiements :";
            // 
            // lb_creer_livraison_commande
            // 
            this->lb_creer_livraison_commande->AutoSize = true;
            this->lb_creer_livraison_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_livraison_commande->Location = System::Drawing::Point(9, 172);
            this->lb_creer_livraison_commande->Name = L"lb_creer_livraison_commande";
            this->lb_creer_livraison_commande->Size = System::Drawing::Size(236, 22);
            this->lb_creer_livraison_commande->TabIndex = 4;
            this->lb_creer_livraison_commande->Text = L"Date livraison :";
            // 
            // tb_creer_livraison_commande
            // 
            this->tb_creer_livraison_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_livraison_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_livraison_commande->Location = System::Drawing::Point(7, 197);
            this->tb_creer_livraison_commande->Name = L"tb_creer_livraison_commande";
            this->tb_creer_livraison_commande->Size = System::Drawing::Size(322, 36);
            this->tb_creer_livraison_commande->TabIndex = 5;
            // 
            // pn_creer_article_commande
            // 
            this->pn_creer_article_commande->Controls->Add(this->btn_creer_valider_article_commande);
            this->pn_creer_article_commande->Controls->Add(this->tb_creer_quantite_commande);
            this->pn_creer_article_commande->Controls->Add(this->lb_creer_quantite_commande);
            this->pn_creer_article_commande->Controls->Add(this->tb_creer_article_commande);
            this->pn_creer_article_commande->Controls->Add(this->lb_creer_article_commande);
            this->pn_creer_article_commande->Location = System::Drawing::Point(342, 22);
            this->pn_creer_article_commande->Name = L"pn_creer_article_commande";
            this->pn_creer_article_commande->Size = System::Drawing::Size(337, 349);
            this->pn_creer_article_commande->TabIndex = 14;
            this->pn_creer_article_commande->Visible = false;
            // 
            // btn_creer_valider_article_commande
            // 
            this->btn_creer_valider_article_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_creer_valider_article_commande->FlatAppearance->BorderSize = 0;
            this->btn_creer_valider_article_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer_valider_article_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_creer_valider_article_commande->ForeColor = System::Drawing::Color::White;
            this->btn_creer_valider_article_commande->Location = System::Drawing::Point(103, 175);
            this->btn_creer_valider_article_commande->Name = L"btn_creer_valider_article_commande";
            this->btn_creer_valider_article_commande->Size = System::Drawing::Size(143, 143);
            this->btn_creer_valider_article_commande->TabIndex = 16;
            this->btn_creer_valider_article_commande->Text = L"Valider";
            this->btn_creer_valider_article_commande->UseVisualStyleBackColor = false;
            this->btn_creer_valider_article_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_valider_article_commande_Click);
            // 
            // tb_creer_quantite_commande
            // 
            this->tb_creer_quantite_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_quantite_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_quantite_commande->Location = System::Drawing::Point(13, 119);
            this->tb_creer_quantite_commande->Name = L"tb_creer_quantite_commande";
            this->tb_creer_quantite_commande->Size = System::Drawing::Size(302, 36);
            this->tb_creer_quantite_commande->TabIndex = 14;
            // 
            // lb_creer_quantite_commande
            // 
            this->lb_creer_quantite_commande->AutoSize = true;
            this->lb_creer_quantite_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_quantite_commande->Location = System::Drawing::Point(9, 93);
            this->lb_creer_quantite_commande->Name = L"lb_creer_quantite_commande";
            this->lb_creer_quantite_commande->Size = System::Drawing::Size(151, 22);
            this->lb_creer_quantite_commande->TabIndex = 15;
            this->lb_creer_quantite_commande->Text = L"Quantite :";
            // 
            // tb_creer_article_commande
            // 
            this->tb_creer_article_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_article_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_article_commande->Location = System::Drawing::Point(13, 44);
            this->tb_creer_article_commande->Name = L"tb_creer_article_commande";
            this->tb_creer_article_commande->Size = System::Drawing::Size(302, 36);
            this->tb_creer_article_commande->TabIndex = 12;
            // 
            // lb_creer_article_commande
            // 
            this->lb_creer_article_commande->AutoSize = true;
            this->lb_creer_article_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_article_commande->Location = System::Drawing::Point(9, 18);
            this->lb_creer_article_commande->Name = L"lb_creer_article_commande";
            this->lb_creer_article_commande->Size = System::Drawing::Size(166, 22);
            this->lb_creer_article_commande->TabIndex = 13;
            this->lb_creer_article_commande->Text = L"ID article :";
            // 
            // pn_creer_paiement_commande
            // 
            this->pn_creer_paiement_commande->Controls->Add(this->btn_creer_valider_paiement_commande);
            this->pn_creer_paiement_commande->Controls->Add(this->tb_creer_paiement_commande);
            this->pn_creer_paiement_commande->Controls->Add(this->lb_creer_paiement_commande);
            this->pn_creer_paiement_commande->Location = System::Drawing::Point(339, 22);
            this->pn_creer_paiement_commande->Name = L"pn_creer_paiement_commande";
            this->pn_creer_paiement_commande->Size = System::Drawing::Size(337, 349);
            this->pn_creer_paiement_commande->TabIndex = 17;
            this->pn_creer_paiement_commande->Visible = false;
            // 
            // btn_creer_valider_paiement_commande
            // 
            this->btn_creer_valider_paiement_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_creer_valider_paiement_commande->FlatAppearance->BorderSize = 0;
            this->btn_creer_valider_paiement_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_creer_valider_paiement_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_creer_valider_paiement_commande->ForeColor = System::Drawing::Color::White;
            this->btn_creer_valider_paiement_commande->Location = System::Drawing::Point(103, 175);
            this->btn_creer_valider_paiement_commande->Name = L"btn_creer_valider_paiement_commande";
            this->btn_creer_valider_paiement_commande->Size = System::Drawing::Size(143, 143);
            this->btn_creer_valider_paiement_commande->TabIndex = 16;
            this->btn_creer_valider_paiement_commande->Text = L"Valider";
            this->btn_creer_valider_paiement_commande->UseVisualStyleBackColor = false;
            this->btn_creer_valider_paiement_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_creer_valider_paiement_commande_Click);
            // 
            // tb_creer_paiement_commande
            // 
            this->tb_creer_paiement_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_creer_paiement_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_creer_paiement_commande->Location = System::Drawing::Point(13, 44);
            this->tb_creer_paiement_commande->Name = L"tb_creer_paiement_commande";
            this->tb_creer_paiement_commande->Size = System::Drawing::Size(302, 36);
            this->tb_creer_paiement_commande->TabIndex = 12;
            // 
            // lb_creer_paiement_commande
            // 
            this->lb_creer_paiement_commande->AutoSize = true;
            this->lb_creer_paiement_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_creer_paiement_commande->Location = System::Drawing::Point(9, 18);
            this->lb_creer_paiement_commande->Name = L"lb_creer_paiement_commande";
            this->lb_creer_paiement_commande->Size = System::Drawing::Size(280, 22);
            this->lb_creer_paiement_commande->TabIndex = 13;
            this->lb_creer_paiement_commande->Text = L"Date de paiement :";
            // 
            // tab_suppr_commande
            // 
            this->tab_suppr_commande->BackColor = System::Drawing::Color::Bisque;
            this->tab_suppr_commande->Controls->Add(this->btn_suppr_annuler_commande);
            this->tab_suppr_commande->Controls->Add(this->btn_suppr_valider_commande);
            this->tab_suppr_commande->Controls->Add(this->bdd_suppr_commande);
            this->tab_suppr_commande->Controls->Add(this->tb_suppr_id_commande);
            this->tab_suppr_commande->Controls->Add(this->lb_suppr_id_commande);
            this->tab_suppr_commande->Location = System::Drawing::Point(4, 25);
            this->tab_suppr_commande->Name = L"tab_suppr_commande";
            this->tab_suppr_commande->Padding = System::Windows::Forms::Padding(3);
            this->tab_suppr_commande->Size = System::Drawing::Size(1351, 486);
            this->tab_suppr_commande->TabIndex = 2;
            this->tab_suppr_commande->Text = L"Supprimer une commande";
            // 
            // btn_suppr_annuler_commande
            // 
            this->btn_suppr_annuler_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_suppr_annuler_commande->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_suppr_annuler_commande->FlatAppearance->BorderSize = 0;
            this->btn_suppr_annuler_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_suppr_annuler_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_suppr_annuler_commande->ForeColor = System::Drawing::Color::White;
            this->btn_suppr_annuler_commande->Location = System::Drawing::Point(291, 216);
            this->btn_suppr_annuler_commande->Name = L"btn_suppr_annuler_commande";
            this->btn_suppr_annuler_commande->Size = System::Drawing::Size(143, 143);
            this->btn_suppr_annuler_commande->TabIndex = 16;
            this->btn_suppr_annuler_commande->Text = L"Annuler";
            this->btn_suppr_annuler_commande->UseVisualStyleBackColor = false;
            this->btn_suppr_annuler_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_suppr_annuler_commande_Click);
            // 
            // btn_suppr_valider_commande
            // 
            this->btn_suppr_valider_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_suppr_valider_commande->FlatAppearance->BorderSize = 0;
            this->btn_suppr_valider_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_suppr_valider_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_suppr_valider_commande->ForeColor = System::Drawing::Color::White;
            this->btn_suppr_valider_commande->Location = System::Drawing::Point(70, 216);
            this->btn_suppr_valider_commande->Name = L"btn_suppr_valider_commande";
            this->btn_suppr_valider_commande->Size = System::Drawing::Size(143, 143);
            this->btn_suppr_valider_commande->TabIndex = 15;
            this->btn_suppr_valider_commande->Text = L"Valider";
            this->btn_suppr_valider_commande->UseVisualStyleBackColor = false;
            this->btn_suppr_valider_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_suppr_valider_commande_Click);
            // 
            // bdd_suppr_commande
            // 
            this->bdd_suppr_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_suppr_commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_suppr_commande->Location = System::Drawing::Point(517, 6);
            this->bdd_suppr_commande->Name = L"bdd_suppr_commande";
            this->bdd_suppr_commande->RowHeadersWidth = 51;
            this->bdd_suppr_commande->RowTemplate->Height = 24;
            this->bdd_suppr_commande->Size = System::Drawing::Size(832, 384);
            this->bdd_suppr_commande->TabIndex = 14;
            // 
            // tb_suppr_id_commande
            // 
            this->tb_suppr_id_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_suppr_id_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_suppr_id_commande->Location = System::Drawing::Point(18, 151);
            this->tb_suppr_id_commande->Name = L"tb_suppr_id_commande";
            this->tb_suppr_id_commande->Size = System::Drawing::Size(475, 36);
            this->tb_suppr_id_commande->TabIndex = 13;
            // 
            // lb_suppr_id_commande
            // 
            this->lb_suppr_id_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_suppr_id_commande->Location = System::Drawing::Point(14, 91);
            this->lb_suppr_id_commande->Name = L"lb_suppr_id_commande";
            this->lb_suppr_id_commande->Size = System::Drawing::Size(479, 52);
            this->lb_suppr_id_commande->TabIndex = 12;
            this->lb_suppr_id_commande->Text = L"Entrez l\'ID de la commande a supprimer";
            this->lb_suppr_id_commande->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tab_affich_commade
            // 
            this->tab_affich_commade->BackColor = System::Drawing::Color::Bisque;
            this->tab_affich_commade->Controls->Add(this->bdd_affich_commande);
            this->tab_affich_commade->Controls->Add(this->layout_affich_commande);
            this->tab_affich_commade->Controls->Add(this->tb_affich_id_commande);
            this->tab_affich_commade->Controls->Add(this->lb_affich_id_commande);
            this->tab_affich_commade->Location = System::Drawing::Point(4, 25);
            this->tab_affich_commade->Name = L"tab_affich_commade";
            this->tab_affich_commade->Padding = System::Windows::Forms::Padding(3);
            this->tab_affich_commade->Size = System::Drawing::Size(1351, 486);
            this->tab_affich_commade->TabIndex = 3;
            this->tab_affich_commade->Text = L"Afficher une commande";
            // 
            // bdd_affich_commande
            // 
            this->bdd_affich_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->bdd_affich_commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bdd_affich_commande->Location = System::Drawing::Point(698, 0);
            this->bdd_affich_commande->Name = L"bdd_affich_commande";
            this->bdd_affich_commande->RowHeadersWidth = 51;
            this->bdd_affich_commande->RowTemplate->Height = 24;
            this->bdd_affich_commande->Size = System::Drawing::Size(645, 465);
            this->bdd_affich_commande->TabIndex = 55;
            // 
            // layout_affich_commande
            // 
            this->layout_affich_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout_affich_commande->ColumnCount = 2;
            this->layout_affich_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_commande->Controls->Add(this->btn_affich_valider_commande, 0, 0);
            this->layout_affich_commande->Controls->Add(this->btn_affich_autre_commande, 1, 0);
            this->layout_affich_commande->Location = System::Drawing::Point(3, 201);
            this->layout_affich_commande->MinimumSize = System::Drawing::Size(298, 0);
            this->layout_affich_commande->Name = L"layout_affich_commande";
            this->layout_affich_commande->RowCount = 1;
            this->layout_affich_commande->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_affich_commande->Size = System::Drawing::Size(682, 149);
            this->layout_affich_commande->TabIndex = 54;
            // 
            // btn_affich_valider_commande
            // 
            this->btn_affich_valider_commande->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich_valider_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_affich_valider_commande->FlatAppearance->BorderSize = 0;
            this->btn_affich_valider_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich_valider_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_affich_valider_commande->ForeColor = System::Drawing::Color::White;
            this->btn_affich_valider_commande->Location = System::Drawing::Point(99, 3);
            this->btn_affich_valider_commande->Name = L"btn_affich_valider_commande";
            this->btn_affich_valider_commande->Size = System::Drawing::Size(143, 143);
            this->btn_affich_valider_commande->TabIndex = 52;
            this->btn_affich_valider_commande->Text = L"Valider";
            this->btn_affich_valider_commande->UseVisualStyleBackColor = false;
            this->btn_affich_valider_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_valider_commande_Click);
            // 
            // btn_affich_autre_commande
            // 
            this->btn_affich_autre_commande->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_affich_autre_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_affich_autre_commande->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_affich_autre_commande->FlatAppearance->BorderSize = 0;
            this->btn_affich_autre_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_affich_autre_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_affich_autre_commande->ForeColor = System::Drawing::Color::White;
            this->btn_affich_autre_commande->Location = System::Drawing::Point(440, 3);
            this->btn_affich_autre_commande->Name = L"btn_affich_autre_commande";
            this->btn_affich_autre_commande->Size = System::Drawing::Size(143, 143);
            this->btn_affich_autre_commande->TabIndex = 53;
            this->btn_affich_autre_commande->Text = L"Afficher une autre commande";
            this->btn_affich_autre_commande->UseVisualStyleBackColor = false;
            this->btn_affich_autre_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_affich_autre_commande_Click);
            // 
            // tb_affich_id_commande
            // 
            this->tb_affich_id_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tb_affich_id_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_affich_id_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_affich_id_commande->Location = System::Drawing::Point(11, 135);
            this->tb_affich_id_commande->Name = L"tb_affich_id_commande";
            this->tb_affich_id_commande->Size = System::Drawing::Size(670, 36);
            this->tb_affich_id_commande->TabIndex = 15;
            // 
            // lb_affich_id_commande
            // 
            this->lb_affich_id_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lb_affich_id_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_affich_id_commande->Location = System::Drawing::Point(11, 76);
            this->lb_affich_id_commande->Name = L"lb_affich_id_commande";
            this->lb_affich_id_commande->Size = System::Drawing::Size(670, 73);
            this->lb_affich_id_commande->TabIndex = 14;
            this->lb_affich_id_commande->Text = L"Entrez l\'ID de la commande a afficher :";
            this->lb_affich_id_commande->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tab_modif_commande
            // 
            this->tab_modif_commande->BackColor = System::Drawing::Color::Bisque;
            this->tab_modif_commande->Controls->Add(this->pn_modif_cacher_info_commande);
            this->tab_modif_commande->Controls->Add(this->pn_modif_fiche_commande);
            this->tab_modif_commande->Controls->Add(this->layout2_btn_modif_commande);
            this->tab_modif_commande->Controls->Add(this->lb_modif_ref_commande);
            this->tab_modif_commande->Controls->Add(this->tb_modif_ref_commande);
            this->tab_modif_commande->Controls->Add(this->tb_modif_moyen_paiement_commande);
            this->tab_modif_commande->Controls->Add(this->tb_modif_emission_commande);
            this->tab_modif_commande->Controls->Add(this->lb_modif_moyen_paiement_commande);
            this->tab_modif_commande->Controls->Add(this->lb_modif_emission_commande);
            this->tab_modif_commande->Controls->Add(this->lb_modif_livraison_commande);
            this->tab_modif_commande->Controls->Add(this->tb_modif_livraison_commande);
            this->tab_modif_commande->Controls->Add(this->tb_modif_id_commande);
            this->tab_modif_commande->Controls->Add(this->lb_modif_id_commande);
            this->tab_modif_commande->Location = System::Drawing::Point(4, 25);
            this->tab_modif_commande->Name = L"tab_modif_commande";
            this->tab_modif_commande->Padding = System::Windows::Forms::Padding(3);
            this->tab_modif_commande->Size = System::Drawing::Size(1351, 486);
            this->tab_modif_commande->TabIndex = 1;
            this->tab_modif_commande->Text = L"Modifier une commande";
            // 
            // pn_modif_cacher_info_commande
            // 
            this->pn_modif_cacher_info_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->pn_modif_cacher_info_commande->Controls->Add(this->layout_btn_commande);
            this->pn_modif_cacher_info_commande->Location = System::Drawing::Point(6, 85);
            this->pn_modif_cacher_info_commande->Name = L"pn_modif_cacher_info_commande";
            this->pn_modif_cacher_info_commande->Size = System::Drawing::Size(670, 395);
            this->pn_modif_cacher_info_commande->TabIndex = 26;
            // 
            // layout_btn_commande
            // 
            this->layout_btn_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout_btn_commande->ColumnCount = 2;
            this->layout_btn_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_btn_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_btn_commande->Controls->Add(this->btn_modif_valider_commande, 0, 0);
            this->layout_btn_commande->Controls->Add(this->btn_modif_annuler_commande, 1, 0);
            this->layout_btn_commande->Location = System::Drawing::Point(2, 67);
            this->layout_btn_commande->MinimumSize = System::Drawing::Size(298, 0);
            this->layout_btn_commande->Name = L"layout_btn_commande";
            this->layout_btn_commande->RowCount = 1;
            this->layout_btn_commande->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout_btn_commande->Size = System::Drawing::Size(668, 149);
            this->layout_btn_commande->TabIndex = 55;
            // 
            // btn_modif_valider_commande
            // 
            this->btn_modif_valider_commande->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_modif_valider_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)),
                static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
            this->btn_modif_valider_commande->FlatAppearance->BorderSize = 0;
            this->btn_modif_valider_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_valider_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_modif_valider_commande->ForeColor = System::Drawing::Color::White;
            this->btn_modif_valider_commande->Location = System::Drawing::Point(95, 3);
            this->btn_modif_valider_commande->Name = L"btn_modif_valider_commande";
            this->btn_modif_valider_commande->Size = System::Drawing::Size(143, 143);
            this->btn_modif_valider_commande->TabIndex = 52;
            this->btn_modif_valider_commande->Text = L"Valider";
            this->btn_modif_valider_commande->UseVisualStyleBackColor = false;
            this->btn_modif_valider_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_valider_commande_Click);
            // 
            // btn_modif_annuler_commande
            // 
            this->btn_modif_annuler_commande->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->btn_modif_annuler_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_modif_annuler_commande->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->btn_modif_annuler_commande->FlatAppearance->BorderSize = 0;
            this->btn_modif_annuler_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_annuler_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_modif_annuler_commande->ForeColor = System::Drawing::Color::White;
            this->btn_modif_annuler_commande->Location = System::Drawing::Point(429, 3);
            this->btn_modif_annuler_commande->Name = L"btn_modif_annuler_commande";
            this->btn_modif_annuler_commande->Size = System::Drawing::Size(143, 143);
            this->btn_modif_annuler_commande->TabIndex = 53;
            this->btn_modif_annuler_commande->Text = L"Annuler";
            this->btn_modif_annuler_commande->UseVisualStyleBackColor = false;
            this->btn_modif_annuler_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_annuler_commande_Click);
            // 
            // pn_modif_fiche_commande
            // 
            this->pn_modif_fiche_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pn_modif_fiche_commande->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->pn_modif_fiche_commande->Controls->Add(this->lb_modif_livraison_fiche_commande);
            this->pn_modif_fiche_commande->Controls->Add(this->lb_modif_moyen_paiement_fiche_commande);
            this->pn_modif_fiche_commande->Controls->Add(this->lb_modif_emission_fiche_commande);
            this->pn_modif_fiche_commande->Controls->Add(this->lb_modif_ref_fiche_commande);
            this->pn_modif_fiche_commande->Location = System::Drawing::Point(683, 17);
            this->pn_modif_fiche_commande->Name = L"pn_modif_fiche_commande";
            this->pn_modif_fiche_commande->Size = System::Drawing::Size(662, 363);
            this->pn_modif_fiche_commande->TabIndex = 56;
            // 
            // lb_modif_livraison_fiche_commande
            // 
            this->lb_modif_livraison_fiche_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_livraison_fiche_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_livraison_fiche_commande->Location = System::Drawing::Point(5, 152);
            this->lb_modif_livraison_fiche_commande->Name = L"lb_modif_livraison_fiche_commande";
            this->lb_modif_livraison_fiche_commande->Size = System::Drawing::Size(654, 39);
            this->lb_modif_livraison_fiche_commande->TabIndex = 30;
            this->lb_modif_livraison_fiche_commande->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // lb_modif_moyen_paiement_fiche_commande
            // 
            this->lb_modif_moyen_paiement_fiche_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_moyen_paiement_fiche_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_modif_moyen_paiement_fiche_commande->Location = System::Drawing::Point(10, 371);
            this->lb_modif_moyen_paiement_fiche_commande->Name = L"lb_modif_moyen_paiement_fiche_commande";
            this->lb_modif_moyen_paiement_fiche_commande->Size = System::Drawing::Size(649, 0);
            this->lb_modif_moyen_paiement_fiche_commande->TabIndex = 29;
            this->lb_modif_moyen_paiement_fiche_commande->TextAlign = System::Drawing::ContentAlignment::BottomRight;
            // 
            // lb_modif_emission_fiche_commande
            // 
            this->lb_modif_emission_fiche_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_emission_fiche_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_emission_fiche_commande->Location = System::Drawing::Point(5, 71);
            this->lb_modif_emission_fiche_commande->Name = L"lb_modif_emission_fiche_commande";
            this->lb_modif_emission_fiche_commande->Size = System::Drawing::Size(650, 53);
            this->lb_modif_emission_fiche_commande->TabIndex = 27;
            this->lb_modif_emission_fiche_commande->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // lb_modif_ref_fiche_commande
            // 
            this->lb_modif_ref_fiche_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lb_modif_ref_fiche_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_ref_fiche_commande->Location = System::Drawing::Point(3, 0);
            this->lb_modif_ref_fiche_commande->Name = L"lb_modif_ref_fiche_commande";
            this->lb_modif_ref_fiche_commande->Size = System::Drawing::Size(652, 49);
            this->lb_modif_ref_fiche_commande->TabIndex = 26;
            this->lb_modif_ref_fiche_commande->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // layout2_btn_modif_commande
            // 
            this->layout2_btn_modif_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->layout2_btn_modif_commande->AutoSize = true;
            this->layout2_btn_modif_commande->ColumnCount = 3;
            this->layout2_btn_modif_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_btn_modif_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_btn_modif_commande->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                200)));
            this->layout2_btn_modif_commande->Controls->Add(this->btn_modif_actu_commande, 0, 0);
            this->layout2_btn_modif_commande->Controls->Add(this->btn_modif_commande, 0, 0);
            this->layout2_btn_modif_commande->Controls->Add(this->btn_modif_autre_commande, 1, 0);
            this->layout2_btn_modif_commande->Location = System::Drawing::Point(16, 383);
            this->layout2_btn_modif_commande->Name = L"layout2_btn_modif_commande";
            this->layout2_btn_modif_commande->RowCount = 1;
            this->layout2_btn_modif_commande->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->layout2_btn_modif_commande->Size = System::Drawing::Size(648, 100);
            this->layout2_btn_modif_commande->TabIndex = 0;
            // 
            // btn_modif_actu_commande
            // 
            this->btn_modif_actu_commande->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_actu_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->btn_modif_actu_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_actu_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_modif_actu_commande->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_actu_commande->Location = System::Drawing::Point(227, 3);
            this->btn_modif_actu_commande->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_actu_commande->Name = L"btn_modif_actu_commande";
            this->btn_modif_actu_commande->Size = System::Drawing::Size(218, 83);
            this->btn_modif_actu_commande->TabIndex = 57;
            this->btn_modif_actu_commande->TabStop = false;
            this->btn_modif_actu_commande->Text = L"Actualiser l\'affichage de la fiche commande";
            this->btn_modif_actu_commande->UseVisualStyleBackColor = false;
            this->btn_modif_actu_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_actu_commande_Click);
            // 
            // btn_modif_commande
            // 
            this->btn_modif_commande->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
            this->btn_modif_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_modif_commande->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_commande->Location = System::Drawing::Point(3, 3);
            this->btn_modif_commande->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_commande->Name = L"btn_modif_commande";
            this->btn_modif_commande->Size = System::Drawing::Size(218, 83);
            this->btn_modif_commande->TabIndex = 56;
            this->btn_modif_commande->Text = L"Modifier la commande";
            this->btn_modif_commande->UseVisualStyleBackColor = false;
            this->btn_modif_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_commande_Click);
            // 
            // btn_modif_autre_commande
            // 
            this->btn_modif_autre_commande->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_modif_autre_commande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
                static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
            this->btn_modif_autre_commande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_modif_autre_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 10.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->btn_modif_autre_commande->ForeColor = System::Drawing::Color::SeaShell;
            this->btn_modif_autre_commande->Location = System::Drawing::Point(451, 3);
            this->btn_modif_autre_commande->MinimumSize = System::Drawing::Size(150, 83);
            this->btn_modif_autre_commande->Name = L"btn_modif_autre_commande";
            this->btn_modif_autre_commande->Size = System::Drawing::Size(194, 83);
            this->btn_modif_autre_commande->TabIndex = 55;
            this->btn_modif_autre_commande->TabStop = false;
            this->btn_modif_autre_commande->Text = L"Modifier une autre commande";
            this->btn_modif_autre_commande->UseVisualStyleBackColor = false;
            this->btn_modif_autre_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_modif_autre_commande_Click);
            // 
            // lb_modif_ref_commande
            // 
            this->lb_modif_ref_commande->AutoSize = true;
            this->lb_modif_ref_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_ref_commande->Location = System::Drawing::Point(20, 95);
            this->lb_modif_ref_commande->Name = L"lb_modif_ref_commande";
            this->lb_modif_ref_commande->Size = System::Drawing::Size(76, 22);
            this->lb_modif_ref_commande->TabIndex = 40;
            this->lb_modif_ref_commande->Text = L"Ref :";
            // 
            // tb_modif_ref_commande
            // 
            this->tb_modif_ref_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_ref_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_ref_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_ref_commande->Location = System::Drawing::Point(103, 90);
            this->tb_modif_ref_commande->Name = L"tb_modif_ref_commande";
            this->tb_modif_ref_commande->Size = System::Drawing::Size(547, 36);
            this->tb_modif_ref_commande->TabIndex = 39;
            // 
            // tb_modif_moyen_paiement_commande
            // 
            this->tb_modif_moyen_paiement_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_moyen_paiement_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_moyen_paiement_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_moyen_paiement_commande->Location = System::Drawing::Point(16, 322);
            this->tb_modif_moyen_paiement_commande->Name = L"tb_modif_moyen_paiement_commande";
            this->tb_modif_moyen_paiement_commande->Size = System::Drawing::Size(634, 36);
            this->tb_modif_moyen_paiement_commande->TabIndex = 46;
            // 
            // tb_modif_emission_commande
            // 
            this->tb_modif_emission_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_emission_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_emission_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_emission_commande->Location = System::Drawing::Point(15, 173);
            this->tb_modif_emission_commande->Name = L"tb_modif_emission_commande";
            this->tb_modif_emission_commande->Size = System::Drawing::Size(635, 36);
            this->tb_modif_emission_commande->TabIndex = 42;
            // 
            // lb_modif_moyen_paiement_commande
            // 
            this->lb_modif_moyen_paiement_commande->AutoSize = true;
            this->lb_modif_moyen_paiement_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_modif_moyen_paiement_commande->Location = System::Drawing::Point(14, 297);
            this->lb_modif_moyen_paiement_commande->Name = L"lb_modif_moyen_paiement_commande";
            this->lb_modif_moyen_paiement_commande->Size = System::Drawing::Size(302, 22);
            this->lb_modif_moyen_paiement_commande->TabIndex = 45;
            this->lb_modif_moyen_paiement_commande->Text = L"Moyen de paiement :";
            // 
            // lb_modif_emission_commande
            // 
            this->lb_modif_emission_commande->AutoSize = true;
            this->lb_modif_emission_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_modif_emission_commande->Location = System::Drawing::Point(18, 148);
            this->lb_modif_emission_commande->Name = L"lb_modif_emission_commande";
            this->lb_modif_emission_commande->Size = System::Drawing::Size(244, 22);
            this->lb_modif_emission_commande->TabIndex = 41;
            this->lb_modif_emission_commande->Text = L"Date d\'emission :";
            // 
            // lb_modif_livraison_commande
            // 
            this->lb_modif_livraison_commande->AutoSize = true;
            this->lb_modif_livraison_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 16.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lb_modif_livraison_commande->Location = System::Drawing::Point(18, 228);
            this->lb_modif_livraison_commande->Name = L"lb_modif_livraison_commande";
            this->lb_modif_livraison_commande->Size = System::Drawing::Size(279, 22);
            this->lb_modif_livraison_commande->TabIndex = 43;
            this->lb_modif_livraison_commande->Text = L"Date de livraison :";
            // 
            // tb_modif_livraison_commande
            // 
            this->tb_modif_livraison_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_livraison_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_livraison_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_livraison_commande->Location = System::Drawing::Point(13, 254);
            this->tb_modif_livraison_commande->Name = L"tb_modif_livraison_commande";
            this->tb_modif_livraison_commande->Size = System::Drawing::Size(637, 36);
            this->tb_modif_livraison_commande->TabIndex = 44;
            // 
            // tb_modif_id_commande
            // 
            this->tb_modif_id_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->tb_modif_id_commande->BackColor = System::Drawing::Color::SeaShell;
            this->tb_modif_id_commande->Font = (gcnew System::Drawing::Font(L"Asiana", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tb_modif_id_commande->Location = System::Drawing::Point(15, 40);
            this->tb_modif_id_commande->Name = L"tb_modif_id_commande";
            this->tb_modif_id_commande->Size = System::Drawing::Size(632, 33);
            this->tb_modif_id_commande->TabIndex = 38;
            // 
            // lb_modif_id_commande
            // 
            this->lb_modif_id_commande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->lb_modif_id_commande->AutoSize = true;
            this->lb_modif_id_commande->Font = (gcnew System::Drawing::Font(L"Japanese 3017", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lb_modif_id_commande->Location = System::Drawing::Point(14, 15);
            this->lb_modif_id_commande->Name = L"lb_modif_id_commande";
            this->lb_modif_id_commande->Size = System::Drawing::Size(483, 18);
            this->lb_modif_id_commande->TabIndex = 37;
            this->lb_modif_id_commande->Text = L"Entrez l\'ID de la commande a modifier :";
            // 
            // MainForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Bisque;
            this->ClientSize = System::Drawing::Size(1359, 603);
            this->Controls->Add(this->tab_gestion_stock);
            this->Controls->Add(this->tab_gestion_commande);
            this->Controls->Add(this->tab_gestion_client);
            this->Controls->Add(this->tab_gest_pers);
            this->Controls->Add(this->pn_centre);
            this->Controls->Add(this->pn_menu);
            this->Controls->Add(this->pn_haut);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(1377, 650);
            this->MinimumSize = System::Drawing::Size(1140, 435);
            this->Name = L"MainForm";
            this->Text = L"Kokoyo";
            this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
            this->pn_menu->ResumeLayout(false);
            this->pn_haut->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptc_cerise))->EndInit();
            this->tab_gest_pers->ResumeLayout(false);
            this->tab_pers_creer->ResumeLayout(false);
            this->pn_btn_creer_perso->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_creer_perso))->EndInit();
            this->pn_info_creer_perso->ResumeLayout(false);
            this->pn_info_creer_perso->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct_perso))->EndInit();
            this->tab_pers_suppr->ResumeLayout(false);
            this->tab_pers_suppr->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_suppr_perso))->EndInit();
            this->tab_pers_affich->ResumeLayout(false);
            this->tab_pers_affich->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_affich_perso))->EndInit();
            this->layout_affich_perso->ResumeLayout(false);
            this->tab_pers_modif->ResumeLayout(false);
            this->tab_pers_modif->PerformLayout();
            this->pn_cacher_info_modif_perso->ResumeLayout(false);
            this->layout_modif_perso->ResumeLayout(false);
            this->layout2_modif_perso->ResumeLayout(false);
            this->pn_modif_fiche_perso->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct_perso2))->EndInit();
            this->pn_centre->ResumeLayout(false);
            this->tab_gestion_client->ResumeLayout(false);
            this->tab_creer_cli->ResumeLayout(false);
            this->pn_creer_btn_cli->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_creer_cli))->EndInit();
            this->pn_creer_cli->ResumeLayout(false);
            this->pn_creer_cli->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct_cli))->EndInit();
            this->tab_suppr_cli->ResumeLayout(false);
            this->tab_suppr_cli->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_suppr_cli))->EndInit();
            this->tab_affich_cli->ResumeLayout(false);
            this->tab_affich_cli->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_affich_cli))->EndInit();
            this->layout_affich_cli->ResumeLayout(false);
            this->tab_modif_cli->ResumeLayout(false);
            this->tab_modif_cli->PerformLayout();
            this->pn_modif_cacher_info_cli->ResumeLayout(false);
            this->layout_modif_cli->ResumeLayout(false);
            this->layout2_modif_cli->ResumeLayout(false);
            this->pn_modif_fiche_cli->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct3_cli))->EndInit();
            this->tab_gestion_stock->ResumeLayout(false);
            this->tab_modif_article->ResumeLayout(false);
            this->tab_modif_article->PerformLayout();
            this->pn_modif_cacher_info_article->ResumeLayout(false);
            this->layout_affich_btn_article->ResumeLayout(false);
            this->pn_modif_fiche_article->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct3_article))->EndInit();
            this->layout2_modif_btn_article->ResumeLayout(false);
            this->tab_creer_article->ResumeLayout(false);
            this->pn_creer_btn_article->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_creer_article))->EndInit();
            this->pn_creer_article->ResumeLayout(false);
            this->pn_creer_article->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct_article))->EndInit();
            this->tab_suppr_article->ResumeLayout(false);
            this->tab_suppr_article->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_suppr_article))->EndInit();
            this->tab_affich_article->ResumeLayout(false);
            this->tab_affich_article->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_affich_article))->EndInit();
            this->layout_affich_article->ResumeLayout(false);
            this->tab_gestion_commande->ResumeLayout(false);
            this->tab_creer_commande->ResumeLayout(false);
            this->tab_creer_commande->PerformLayout();
            this->layout_btn_creer_commande->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_creer_commande))->EndInit();
            this->pn_creer_commande->ResumeLayout(false);
            this->pn_creer_commande->PerformLayout();
            this->pn_creer_article_commande->ResumeLayout(false);
            this->pn_creer_article_commande->PerformLayout();
            this->pn_creer_paiement_commande->ResumeLayout(false);
            this->pn_creer_paiement_commande->PerformLayout();
            this->tab_suppr_commande->ResumeLayout(false);
            this->tab_suppr_commande->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_suppr_commande))->EndInit();
            this->tab_affich_commade->ResumeLayout(false);
            this->tab_affich_commade->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bdd_affich_commande))->EndInit();
            this->layout_affich_commande->ResumeLayout(false);
            this->tab_modif_commande->ResumeLayout(false);
            this->tab_modif_commande->PerformLayout();
            this->pn_modif_cacher_info_commande->ResumeLayout(false);
            this->layout_btn_commande->ResumeLayout(false);
            this->pn_modif_fiche_commande->ResumeLayout(false);
            this->layout2_btn_modif_commande->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e)
    {
        Thread::Sleep(1000);
        tab_gestion_client->BringToFront();
        tab_gestion_commande->BringToFront();
        tab_gestion_stock->BringToFront();
        tab_gest_pers->BringToFront();

        this->oRqt = gcnew NS_Comp_Svc::Requete();
    }

    private: System::Void btn_accueil_Click(System::Object^ sender, System::EventArgs^ e)
    {
        btn_creer->Visible = false;
        btn_modif->Visible = false;
        btn_suppr->Visible = false;
        btn_affich->Visible = false;
        ptc_cerise->Visible = true;

        tab_gest_pers->Visible = false;
        tab_gestion_client->Visible = false;
        tab_gestion_commande->Visible = false;
        tab_gestion_stock->Visible = false;
    }
	private: System::Void btn_gest_pers_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		btn_creer->Visible = true;
		btn_modif->Visible = true;
		btn_suppr->Visible = true;
		btn_affich->Visible = true;
		ptc_cerise->Visible = false;

		btn_creer->Text = "Creer un membre du personnel";
		btn_modif->Text = "Modifier un membre du personnel";
		btn_suppr->Text = "Supprimer un membre du personnel";
		btn_affich->Text = "Afficher un membre du personnel";

        tab_gest_pers->Visible = false;
        tab_gestion_client->Visible = false;
        tab_gestion_commande->Visible = false;
        tab_gestion_stock->Visible = false;
	}
	private: System::Void btn_gest_client_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		btn_creer->Visible = true;
		btn_modif->Visible = true;
		btn_suppr->Visible = true;
		btn_affich->Visible = true;
		ptc_cerise->Visible = false;
		btn_creer->Text = "Creer un client";
		btn_modif->Text = "Modifier un client";
		btn_suppr->Text = "Supprimer un client";
		btn_affich->Text = "Afficher un client";
        tab_gest_pers->Visible = false;
        tab_gestion_client->Visible = false;
        tab_gestion_commande->Visible = false;
        tab_gestion_stock->Visible = false;
	}
	private: System::Void btn_gest_commande_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		btn_creer->Visible = true;
		btn_modif->Visible = true;
		btn_suppr->Visible = true;
		btn_affich->Visible = true;
		ptc_cerise->Visible = false;
		btn_creer->Text = "Creer une commande";
		btn_modif->Text = "Modifier une commande";
		btn_suppr->Text = "Supprimer une commande";
		btn_affich->Text = "Afficher une commande";
        tab_gest_pers->Visible = false;
        tab_gestion_client->Visible = false;
        tab_gestion_commande->Visible = false;
        tab_gestion_stock->Visible = false;
	}
	private: System::Void btn_gest_stock_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		btn_creer->Visible = true;
		btn_modif->Visible = true;
		btn_suppr->Visible = true;
		btn_affich->Visible = true;
		ptc_cerise->Visible = false;
		btn_creer->Text = "Creer un article";
		btn_modif->Text = "Modifier un article";
		btn_suppr->Text = "Supprimer un article";
		btn_affich->Text = "Afficher un article";
        tab_gest_pers->Visible = false;
        tab_gestion_client->Visible = false;
        tab_gestion_commande->Visible = false;
        tab_gestion_stock->Visible = false;
	}

	private: System::Void btn_menu_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::Timer^ timer = gcnew System::Windows::Forms::Timer();
		timer->Interval = 5;
		if (pn_menu->Width == 0) 
		{
			timer->Tick += gcnew System::EventHandler(this, &MainForm::ouvrir_menu);
		}
		else
		{
			timer->Tick += gcnew System::EventHandler(this, &MainForm::fermer_menu);
		}
		
		timer->Start();
	}
	private: System::Void ouvrir_menu(System::Object^ sender, System::EventArgs^ e) {
		static int compteur = 0;
		if (compteur < 30)
		{
			pn_menu->Width += 5;
			compteur++;
		}
		else
		{
			System::Windows::Forms::Timer^ timer = dynamic_cast<System::Windows::Forms::Timer^>(sender);
			if (timer != nullptr) {
				timer->Stop();
				delete timer;
			}
			compteur = 0;
		}
	}
	private: System::Void fermer_menu(System::Object^ sender, System::EventArgs^ e) {
		static int compteur = 0;
		if (compteur < 30)
		{
			pn_menu->Width -= 5;
			compteur++;
		}
		else
		{
			System::Windows::Forms::Timer^ timer = dynamic_cast<System::Windows::Forms::Timer^>(sender);
			if (timer != nullptr) {
				timer->Stop();
				delete timer;
			}
			compteur = 0;
		}
	}

	private: System::Void btn_creer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (btn_creer->Text == "Creer un membre du personnel")
		{
			tab_gest_pers->Visible = true;
		}
		else if (btn_creer->Text == "Creer un client")
		{
			tab_gestion_client->Visible = true;
		}
		else if (btn_creer->Text == "Creer un article")
		{
			tab_gestion_stock->Visible = true;
		}
        else
        {
            tab_gestion_commande->Visible = true;
        }
	}
    private: System::Void btn_affich_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        if (btn_creer->Text == "Afficher un membre du personnel")
        {
            tab_gest_pers->Visible = true;
        }
        else if (btn_creer->Text == "Afficher un client")
        {
            tab_gestion_client->Visible = true;
        }
        else if (btn_creer->Text == "Afficher un article")
        {
            tab_gestion_stock->Visible = true;
        }
        else
        {
            tab_gestion_commande->Visible = true;
        }
    }
    private: System::Void btn_modif_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        if (btn_creer->Text == "Modifier un membre du personnel")
        {
            tab_gest_pers->Visible = true;

        }
        else if (btn_creer->Text == "Modifier un client")
        {
            tab_gestion_client->Visible = true;
        }
        else if (btn_creer->Text == "Modifier un article")
        {
            tab_gestion_stock->Visible = true;
        }
        else
        {
            tab_gestion_commande->Visible = true;
        }
    }
    private: System::Void btn_suppr_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (btn_creer->Text == "Supprimer un membre du personnel")
        {
            tab_gest_pers->Visible = true;
        }
        else if (btn_creer->Text == "Supprimer un client")
        {
            tab_gestion_client->Visible = true;
        }
        else if (btn_creer->Text == "Supprimer un article")
        {
            tab_gestion_stock->Visible = true;
        }
        else
        {
            tab_gestion_commande->Visible = true;
        }
    }

    private: System::Void btn_creer_valider_perso_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_creer_sup_perso->Text;
        int entree;
        if (System::Int32::TryParse(texte, entree))
        this->oRqt->ajouter_personnel(tb__creer_prenom_perso->Text, tb__creer_nom_perso->Text, 
            tb_creer_adresse_perso->Text, tb__creer_embauche_perso->Text,entree);
        else
        {
            tb_creer_sup_perso->Text = "";
        }
    }
    private: System::Void btn_creer_actualiser_perso_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        this->bdd_creer_perso->Refresh();
        this->oDs = this->oRqt->selectionner_le_personnel("Rsl");
        this->bdd_creer_perso->DataSource = this->oDs;
        this->bdd_creer_perso->DataMember = "Rsl";
    }
    private: System::Void btn_suppr_valider_perso_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_suppr_id_perso->Text;
        int entree;
        if (System::Int32::TryParse(texte, entree))
        {
            this->oRqt->supprimer_un_personnel(entree);
            this->bdd_suppr_perso->Refresh();
            this->oDs = this->oRqt->selectionner_le_personnel("Rsl");
            this->bdd_suppr_perso->DataSource = this->oDs;
            this->bdd_suppr_perso->DataMember = "Rsl";
        }
        else
        {
            tb_suppr_id_perso->Text = "";
        }
    }
	private: System::Void btn_suppr_annuler_perso_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		tb_suppr_id_perso->Text = "";
	}
	private: System::Void btn_affich_nouveau_perso_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		tb_affich_id_perso->Text = "";
	}
    private: System::Void btn_affich_valider_perso_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_affich_id_perso->Text;
        int entree;

        if (System::Int32::TryParse(texte, entree))
        {
            this->bdd_affich_perso->Refresh();
            this->oDs = this->oRqt->selectionner_un_personnel("Rsl", entree);
            this->bdd_affich_perso->DataSource = this->oDs;
            this->bdd_affich_perso->DataMember = "Rsl";
        }
    }
	private: System::Void btn_modif_annuler_perso_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		tb_modif_id_perso->Text = "";
	}
	private: System::Void btn_modif_valider_perso_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		pn_cacher_info_modif_perso->Visible = false;
		tb_modif_id_perso->ReadOnly = true;
	}
	private: System::Void btn_modif_changer_perso_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		layout_modif_perso->Visible = true;
		pn_cacher_info_modif_perso->Visible = true;
		tb_modif_id_perso->ReadOnly = false;

		lb_modif_adresse_fiche_perso->Text = "";
		lb_modif_embauche_fiche_perso->Text = "";
		lb_modif_nom_fiche_perso->Text = "";
		lb_modif_prenom_fiche_perso->Text = "";
		lb_modif_sup_fiche_perso->Text = "";

		tb_modif_id_perso->Text = "";
        tb_modif_adresse_perso->Text = "";
        tb_modif_embauche_perso->Text = "";
        tb_modif_nom_perso->Text = "";
        tb_modif_prenom_perso->Text = "";
        tb_modif_sup_perso->Text = "";
	}
	private: System::Void btn_modif_actu_fiche_perso_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		lb_modif_nom_fiche_perso->Text = tb_modif_nom_perso->Text;
		lb_modif_prenom_fiche_perso->Text = tb_modif_prenom_perso->Text;
		lb_modif_adresse_fiche_perso->Text = tb_modif_adresse_perso->Text;
		lb_modif_embauche_fiche_perso->Text = tb_modif_embauche_perso->Text;
		lb_modif_sup_fiche_perso->Text = tb_modif_sup_perso->Text;
	}
    private: System::Void btn_valider_modif_perso_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_modif_id_perso->Text;
        System::String^ texte2 = tb_modif_sup_perso->Text;
        int entree,entree2;
        if (System::Int32::TryParse(texte, entree))
        {
            if (System::Int32::TryParse(texte2, entree2))
            {
                this->oRqt->mettre_a_jour_un_personnel(entree, tb_modif_nom_perso->Text, tb_modif_prenom_perso->Text,
                    tb_modif_adresse_perso->Text, tb_modif_embauche_perso->Text, entree2);
            }
        }
    }

    private: System::Void btn_creer_cli_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        this->oRqt->ajouter_client(tb_creer_prenom_cli->Text, tb_creer_nom_cli->Text, 
            tb_creer_facturation_cli->Text, tb_creer_livraison_cli->Text, tb_creer_naissance_cli->Text);
    }
    private: System::Void btn_creer_actu_cli_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        this->bdd_creer_cli->Refresh();
        this->oDs = this->oRqt->selectionner_les_clients("Rsl");
        this->bdd_creer_cli->DataSource = this->oDs;
        this->bdd_creer_cli->DataMember = "Rsl";
    }
    private: System::Void btn_suppr_valider_cli_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_suppr_id_cli->Text;
        int entree;
        if (System::Int32::TryParse(texte, entree))
        {
            this->oRqt->supprimer_un_client(entree);
            this->bdd_suppr_cli->Refresh();
            this->oDs = this->oRqt->selectionner_les_clients("Rsl");
            this->bdd_suppr_cli->DataSource = this->oDs;
            this->bdd_suppr_cli->DataMember = "Rsl";
        }
        else
        {
            tb_suppr_id_cli->Text = "";
        }
    }
    private: System::Void btn_suppr_annuler_cli_Click(System::Object^ sender, System::EventArgs^ e)
    {
        tb_suppr_id_cli->Text = "";
    }
    private: System::Void btn_affich_valider_cli_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_affich_id_cli->Text;
        int entree;

        if (System::Int32::TryParse(texte, entree))
        {
            this->bdd_affich_cli->Refresh();
            this->oDs = this->oRqt->selectionner_un_client("Rsl", entree);
            this->bdd_affich_cli->DataSource = this->oDs;
            this->bdd_affich_cli->DataMember = "Rsl";
        }
    }
    private: System::Void btn_affich_autre_cli_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        tb_affich_id_cli->Text = "";
    }
    private: System::Void btn_modif_valider_cli_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        pn_modif_cacher_info_cli->Visible = false;
        tb_modif_id_cli->ReadOnly = true;
    }
    private: System::Void btn_modif_annuler_cli_Click(System::Object^ sender, System::EventArgs^ e)
    {
        tb_modif_id_cli->Text = "";
    }
    private: System::Void btn_modif_cli_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_modif_id_cli->Text;
        int entree;
        if (System::Int32::TryParse(texte, entree))
        {
            this->oRqt->mettre_a_jour_un_client(entree, tb_modif_prenom_cli->Text, tb_modif_nom_cli->Text,
            tb_modif_facturation_cli->Text, tb_modif_livraison_cli->Text, tb_modif_naissance_cli->Text);
        }
    }
    private: System::Void btn_modif_actu_cli_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        lb_modif_nom_fiche_cli->Text = tb_modif_nom_cli->Text;
        lb_modif_prenom_fiche_cli->Text = tb_modif_prenom_cli->Text;
        lb_modif_livraison_fiche_cli->Text = tb_modif_livraison_cli->Text;
        lb_modif_facturation_fiche_client->Text = tb_modif_facturation_cli->Text;
        lb_modif_naissance_fiche_cli->Text = tb_modif_naissance_cli->Text;
    }
    private: System::Void btn_modif_autre_cli_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        pn_modif_cacher_info_cli->Visible = true;
        tb_modif_id_cli->ReadOnly = false;

        lb_modif_livraison_fiche_cli->Text = "";
        lb_modif_facturation_fiche_client->Text = "";
        lb_modif_nom_fiche_cli->Text = "";
        lb_modif_prenom_fiche_cli->Text = "";
        lb_modif_naissance_fiche_cli->Text = "";

        tb_modif_id_cli->Text = "";
        tb_modif_facturation_cli->Text = "";
        tb_modif_livraison_cli->Text = "";
        tb_modif_nom_cli->Text = "";
        tb_modif_prenom_cli->Text = "";
        tb_modif_naissance_cli->Text = "";
    }

    int compteur_date_paiement = 0;

    private: System::Void btn_creer_valider_base_commande_Click(System::Object^ sender, System::EventArgs^ e)
    {
        this->oRqt->ajouter_commande(tb_creer_ref_commande->Text, tb_creer_livraison_commande->Text,
            tb_creer_emision_commande->Text, tb_creer_moyen_paiement_commande->Text);
        this->bdd_creer_commande->Refresh();
        this->oDs = this->oRqt->selectionner_les_commandes("Rsl");
        this->bdd_creer_commande->DataSource = this->oDs;
        this->bdd_creer_commande->DataMember = "Rsl";
    }
    private: System::Void btn_ajouter_article_commande_Click(System::Object^ sender, System::EventArgs^ e) //Non implémenté
    {
        pn_creer_article_commande->Visible = true;
        pn_creer_paiement_commande->Visible = false;
    }
    private: System::Void btn_ajouter_date_paiement_Click(System::Object^ sender, System::EventArgs^ e) //Non implémenté
    {
        System::String^ nb_paiement = tb_creer_nb_paiement_commande->Text;
        int max_appui = System::Convert::ToInt32(nb_paiement);
        if (compteur_date_paiement < max_appui)
        {
            pn_creer_paiement_commande->Visible = true;
        }
        pn_creer_article_commande->Visible = false;
    }
    private: System::Void btn_creer_valider_paiement_commande_Click(System::Object^ sender, System::EventArgs^ e) //Non implémenté
    {
        compteur_date_paiement++;
    }
    private: System::Void btn_creer_valider_article_commande_Click(System::Object^ sender, System::EventArgs^ e) //Non implémenté
    {
    }
    private: System::Void btn_suppr_valider_commande_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_suppr_id_commande->Text;
        int entree;
        if (System::Int32::TryParse(texte, entree))
        {
            this->oRqt->supprimer_une_commande(entree);
            this->bdd_suppr_commande->Refresh();
            this->oDs = this->oRqt->selectionner_les_commandes("Rsl");
            this->bdd_suppr_commande->DataSource = this->oDs;
            this->bdd_suppr_commande->DataMember = "Rsl";
        }
        else
        {
            tb_suppr_id_commande->Text = "";
        }
    }
    private: System::Void btn_suppr_annuler_commande_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        tb_suppr_id_article->Text = "";
    }
    private: System::Void btn_affich_valider_commande_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_affich_id_commande->Text;
        int entree;

        if (System::Int32::TryParse(texte, entree))
        {
            this->bdd_affich_commande->Refresh();
            this->oDs = this->oRqt->selectionner_une_commande("Rsl", entree);
            this->bdd_affich_commande->DataSource = this->oDs;
            this->bdd_affich_commande->DataMember = "Rsl";
        }
    }
    private: System::Void btn_affich_autre_commande_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        tb_affich_id_commande->Text = "";
    }
    private: System::Void btn_modif_annuler_commande_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        tb_modif_id_commande->Text = "";
    }
    private: System::Void btn_modif_valider_commande_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        pn_modif_cacher_info_commande->Visible = false;
        tb_modif_id_commande->ReadOnly = true;
    }
    private: System::Void btn_modif_autre_commande_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        pn_modif_cacher_info_commande->Visible = true;
        tb_modif_id_commande->ReadOnly = false;

        lb_modif_livraison_fiche_commande->Text = "";
        lb_modif_emission_fiche_commande->Text = "";
        lb_modif_moyen_paiement_fiche_commande->Text = "";
        lb_modif_ref_fiche_commande->Text = "";

        tb_modif_id_commande->Text = "";
        tb_modif_emission_commande->Text = "";
        tb_modif_livraison_commande->Text = "";
        tb_modif_ref_commande->Text = "";
        tb_modif_moyen_paiement_commande->Text = "";
    }
    private: System::Void btn_modif_actu_commande_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        lb_modif_ref_fiche_commande->Text = tb_modif_ref_commande->Text;
        lb_modif_livraison_fiche_commande->Text = tb_modif_livraison_commande->Text;
        lb_modif_emission_fiche_commande->Text = tb_modif_emission_commande->Text;
        lb_modif_moyen_paiement_fiche_commande->Text = tb_modif_moyen_paiement_commande->Text;
    }
    private: System::Void btn_modif_commande_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_modif_id_commande->Text;
        int entree;
        if (System::Int32::TryParse(texte, entree))
        {
            this->oRqt->mettre_a_jour_une_commande(entree, tb_modif_ref_commande->Text, tb_modif_livraison_commande->Text,
                tb_modif_emission_commande->Text, tb_modif_moyen_paiement_commande->Text);
        }
    }

    private: System::Void btn_creer_article_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_creer_prix_article->Text;
        System::String^ texte2 = tb_creer_seuil_article->Text;
        System::String^ texte3 = tb_creer_stock_article->Text;
        float entree = System::Single::Parse(texte);
        int entree2, entree3;
        if (System::Int32::TryParse(texte2, entree2))
        {
            if (System::Int32::TryParse(texte3, entree3))
            {
                this->oRqt->ajouter_article(tb_creer_nom_article->Text, entree,
                    tb_creer_couleur_article->Text, entree2, entree3);
            }
        }
    }
    private: System::Void btn_creer_actu_article_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        this->bdd_creer_article->Refresh();
        this->oDs = this->oRqt->selectionner_les_articles("Rsl");
        this->bdd_creer_article->DataSource = this->oDs;
        this->bdd_creer_article->DataMember = "Rsl";
    }
    private: System::Void btn_suppr_valider_article_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_suppr_id_article->Text;
        int entree;
        if (System::Int32::TryParse(texte, entree))
        {
            this->oRqt->supprimer_un_article(entree);
            this->bdd_suppr_article->Refresh();
            this->oDs = this->oRqt->selectionner_les_articles("Rsl");
            this->bdd_suppr_article->DataSource = this->oDs;
            this->bdd_suppr_article->DataMember = "Rsl";
        }
        else
        {
            tb_suppr_id_article->Text = "";
        }
    }
    private: System::Void btn_suppr_annuler_article_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        tb_suppr_id_article->Text = "";
    }
    private: System::Void btn_affich_autre_article_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        tb_affich_id_article->Text = "";
    }
    private: System::Void btn_affich_valider_article_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        System::String^ texte = tb_affich_id_article->Text;
        int entree;

        if (System::Int32::TryParse(texte, entree))
        {
            this->bdd_affich_article->Refresh();
            this->oDs = this->oRqt->selectionner_un_article("Rsl", entree);
            this->bdd_affich_article->DataSource = this->oDs;
            this->bdd_affich_article->DataMember = "Rsl";
        }
    }
    private: System::Void btn_affich_annuler_article_Click(System::Object^ sender, System::EventArgs^ e)
    {
        tb_modif_id_article->Text = "";
    }
    private: System::Void btn_modif_valider_article_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        pn_modif_cacher_info_article->Visible = false;
        tb_modif_id_article->ReadOnly = true;
    }
    private: System::Void btn_modif_autre_article_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        pn_modif_cacher_info_article->Visible = true;
        tb_modif_id_article->ReadOnly = false;

        lb_modif_nom_fiche_article->Text = "";
        lb_modif_couleur_fiche_article->Text = "";
        lb_modif_prix_fiche_article->Text = "";

        tb_modif_id_article->Text = "";
        tb_modif_nom_article->Text = "";
        tb_modif_couleur_article->Text = "";
        tb_modif_prix_article->Text = "";
    }
    private: System::Void btn_modif_actu_article_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        lb_modif_nom_fiche_article->Text = tb_modif_nom_article->Text;
        lb_modif_couleur_fiche_article->Text = tb_modif_couleur_article->Text;
        lb_modif_prix_fiche_article->Text = tb_modif_prix_article->Text;
    }
    private: System::Void btn_modif_article_Click(System::Object^ sender, System::EventArgs^ e)
    {
        System::String^ texte4 = tb_modif_id_article->Text;
        System::String^ texte = tb_modif_prix_article->Text;
        System::String^ texte2 = tb_modif_seuil_article->Text;
        System::String^ texte3 = tb_modif_stock_article->Text;
        float entree = System::Single::Parse(texte);
        int entree2,entree3,entree4;
        if (System::Int32::TryParse(texte4, entree4))
        {
            if (System::Int32::TryParse(texte3, entree3))
            {
                if (System::Int32::TryParse(texte2, entree2))
                {
                    this->oRqt->mettre_a_jour_un_article(entree4, tb_modif_nom_article->Text, entree,
                        tb_modif_couleur_article->Text, entree2, entree3);
                }
            }     
        }
    }
};
}