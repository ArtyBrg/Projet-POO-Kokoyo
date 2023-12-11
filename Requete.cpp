#include "Requete.h"

NS_Comp_Svc::Requete::Requete(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oPers = gcnew NS_Comp_Mappage::CLmapPerso();
	this->oCli = gcnew Client();
	this->oArti = gcnew Article();
	this->oCommande = gcnew Commande();
}
System::Data::DataSet^ NS_Comp_Svc::Requete::selectionner_le_personnel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oPers->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::Requete::selectionner_un_personnel(System::String^ dataTableName, int id)
{
	System::String^ sql;

	sql = this->oPers->Select(id);
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::Requete::ajouter_personnel(System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ date, int id)
{
	System::String^ sql;

	this->oPers->setNom_Personnel(nom);
	this->oPers->setPrenom_Personnel(prenom);
	this->oPers->setAdresse_Personnel(adresse);
	this->oPers->setDate_Embauche(date);
	this->oPers->setID_Personnel_1(id);

	sql = this->oPers->Insert();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::Requete::supprimer_un_personnel(int id) 
{
	System::String^ sql;

	sql = this->oPers->Delete(id);
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::Requete::mettre_a_jour_un_personnel(int id, System::String^ nom, System::String^ prenom, System::String^ adresse, System::String^ date, int id2) {
	System::String^ sql;

	this->oPers->setNom_Personnel(nom);
	this->oPers->setPrenom_Personnel(prenom);
	this->oPers->setAdresse_Personnel(adresse);
	this->oPers->setDate_Embauche(date);
	this->oPers->setID_Personnel_1(id2);

	sql = this->oPers->Update(id);
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::Requete::selectionner_les_clients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oCli->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::Requete::selectionner_un_client(System::String^ dataTableName, int id)
{
	System::String^ sql;

	sql = this->oCli->Select(id);
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::Requete::ajouter_client(System::String^ prenom, System::String^ nom, System::String^ adresse_facturation, System::String^ adresse_livraison, System::String^ date_naissance)
{
	System::String^ sql;

	this->oCli->setNom_Client(nom);
	this->oCli->setPrenom_Client(prenom);
	this->oCli->setAdresse_Facturation(adresse_facturation);
	this->oCli->setAdresse_Livraison(adresse_livraison);
	this->oCli->setDate_Naissance(date_naissance);

	sql = this->oCli->Insert();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::Requete::supprimer_un_client(int id)
{
	System::String^ sql;

	sql = this->oCli->Delete(id);
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::Requete::mettre_a_jour_un_client(int id, System::String^ prenom, System::String^ nom, System::String^ adresse_facturation, System::String^ adresse_livraison, System::String^ date_naissance)
{
	System::String^ sql;

	this->oCli->setNom_Client(nom);
	this->oCli->setPrenom_Client(prenom);
	this->oCli->setAdresse_Facturation(adresse_facturation);
	this->oCli->setAdresse_Livraison(adresse_livraison);
	this->oCli->setDate_Naissance(date_naissance);

	sql = this->oCli->Update(id);
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::Requete::selectionner_les_articles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oArti->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::Requete::selectionner_un_article(System::String^ dataTableName, int id)
{
	System::String^ sql;

	sql = this->oArti->Select(id);
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::Requete::ajouter_article(System::String^ nom, float prix, System::String^ couleur, int seuil_reapprovisionnement, int stock)
{
	System::String^ sql;

	this->oArti->setNom_Article(nom);
	this->oArti->setPrix_Article(prix);
	this->oArti->set_Couleur(couleur);
	this->oArti->setSeuil_Reapprovisionnement(seuil_reapprovisionnement);
	this->oArti->setStock(stock);

	sql = this->oArti->Insert();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::Requete::supprimer_un_article(int id)
{
	System::String^ sql;

	sql = this->oArti->Delete(id);
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::Requete::mettre_a_jour_un_article(int id, System::String^ nom, float prix, System::String^ couleur, int seuil_reapprovisionnement, int stock)
{
	System::String^ sql;

	this->oArti->setNom_Article(nom);
	this->oArti->setPrix_Article(prix);
	this->oArti->set_Couleur(couleur);
	this->oArti->setSeuil_Reapprovisionnement(seuil_reapprovisionnement);
	this->oArti->setStock(stock);

	sql = this->oArti->Update(id);
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Svc::Requete::selectionner_les_commandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::Requete::selectionner_une_commande(System::String^ dataTableName, int id)
{
	System::String^ sql;

	sql = this->oCommande->Select(id);
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::Requete::ajouter_commande(System::String^ ref, System::String^ livraison, System::String^ emission, System::String^ paiement)
{
	System::String^ sql;

	this->oCommande->setReference(ref);
	this->oCommande->setDate_Livraison(livraison);
	this->oCommande->setDate_Emission(emission);
	this->oCommande->setMoyen_Paiement(paiement);

	sql = this->oCommande->Insert();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::Requete::supprimer_une_commande(int id)
{
	System::String^ sql;

	sql = this->oCommande->Delete(id);
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::Requete::mettre_a_jour_une_commande(int id, System::String^ ref, System::String^ livraison, System::String^ emission, System::String^ paiement)
{
	System::String^ sql;

	this->oCommande->setReference(ref);
	this->oCommande->setDate_Livraison(livraison);
	this->oCommande->setDate_Emission(emission);
	this->oCommande->setMoyen_Paiement(paiement);

	sql = this->oCommande->Update(id);
	this->oCad->actionRows(sql);
}