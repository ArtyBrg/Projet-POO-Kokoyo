#pragma once
#include "CLmapPerso.h"
#include "Client.h"
#include "Article.h"
#include "Commande.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class Requete
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapPerso^ oPers;
		Client^ oCli;
		Article^ oArti;
		Commande^ oCommande;
	public:
		Requete(void);
		System::Data::DataSet^ selectionner_le_personnel(System::String^);
		System::Data::DataSet ^ selectionner_un_personnel(System::String^, int id);
		void ajouter_personnel(System::String^ prenom, System::String^ nom, System::String^ adresse, System::String^ date, int id);
		void supprimer_un_personnel(int id);
		void mettre_a_jour_un_personnel(int id, System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ date, int id2);

		System::Data::DataSet^ selectionner_les_clients(System::String^);
		System::Data::DataSet^ selectionner_un_client(System::String^, int id);
		void ajouter_client(System::String^ prenom, System::String^ nom, System::String^ adresse_facturation, System::String^ adresse_livraison, System::String^ date_naissance);
		void supprimer_un_client(int id);
		void mettre_a_jour_un_client(int id, System::String^ prenom, System::String^ nom, System::String^ adresse_facturation, System::String^ adresse_livraison, System::String^ date_naissance);

		System::Data::DataSet^ selectionner_les_articles(System::String^);
		System::Data::DataSet^ selectionner_un_article(System::String^, int id);
		void ajouter_article(System::String^ nom, float prix, System::String^ couleur, int seuil_reapprovisionnement, int stock);
		void supprimer_un_article(int id);
		void mettre_a_jour_un_article(int id, System::String^ nom, float prix, System::String^ couleur, int seuil_reapprovisionnement, int stock);

		System::Data::DataSet^ selectionner_les_commandes(System::String^);
		System::Data::DataSet^ selectionner_une_commande(System::String^, int id);
		void ajouter_commande(System::String^ ref, System::String^ livraison, System::String^ emission, System::String^ paiement);
		void supprimer_une_commande(int id);
		void mettre_a_jour_une_commande(int id, System::String^ ref, System::String^ livraison, System::String^ emission, System::String^ paiement);
	};
}
