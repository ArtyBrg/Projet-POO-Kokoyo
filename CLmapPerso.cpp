#include "CLmapPerso.h"

void NS_Comp_Mappage::CLmapPerso::setNom_Personnel(System::String^ nom)
{
	this->Nom_Personnel = nom;
}
void NS_Comp_Mappage::CLmapPerso::setPrenom_Personnel(System::String^ prenom)
{
	this->Prenom_Personnel = prenom;
}
void NS_Comp_Mappage::CLmapPerso::setDate_Embauche(System::String^ date) {
    this->Date_Embauche = date;
}
void NS_Comp_Mappage::CLmapPerso::setAdresse_Personnel(System::String^ adresse) {
    this->Adresse_Personnel = adresse;
}
void NS_Comp_Mappage::CLmapPerso::setID_Personnel_1(int Id)
{
    this->ID_Personnel = Id;
}
int NS_Comp_Mappage::CLmapPerso::getID_Personnel(void) 
{ 
    return this->ID_Personnel; 
}
System::String^ NS_Comp_Mappage::CLmapPerso::getNom_Personnel(void) 
{ 
    return this->Nom_Personnel; 
}
System::String^ NS_Comp_Mappage::CLmapPerso::getPrenom_Personnel(void) 
{ 
    return this->Prenom_Personnel; 
}
System::String^ NS_Comp_Mappage::CLmapPerso::getDate_Embauche(void)
{
    return Date_Embauche;
}
System::String^ NS_Comp_Mappage::CLmapPerso::getAdresse_Personnel(void)
{
    return Adresse_Personnel;
}
int NS_Comp_Mappage::CLmapPerso::getID_Personnel_1(void)
{
    return this->ID_Personnel_1;
}
System::String^ NS_Comp_Mappage::CLmapPerso::Select(void)
{
    return "SELECT * FROM [Kokoyo].[dbo].[Personnel]";
}
System::String^ NS_Comp_Mappage::CLmapPerso::Select(int ID) 
{
    return "SELECT * FROM [Kokoyo].[dbo].[Personnel] WHERE ID_Personnel =" + ID;
}
System::String^ NS_Comp_Mappage::CLmapPerso::Update(int ID) 
{
    return "UPDATE [Kokoyo].[dbo].[Personnel] SET  Prenom_Personnel = '" + this->Prenom_Personnel
        + "', Nom_Personnel = '" + this->Nom_Personnel + "', Date_Embauche = '" + this->Date_Embauche
        + "', Adresse = '" + this->Adresse_Personnel + "', ID_Personnel_1 = '" + this->ID_Personnel_1 
        + ",WHERE ID_Personnel = " + ID;
}
System::String^ NS_Comp_Mappage::CLmapPerso::Insert() 
{
    return "INSERT INTO [Kokoyo].[dbo].[Personnel](Nom_Personnel, Prenom_Personnel, Date_Embauche, Adresse) VALUES ('" 
        + this->Nom_Personnel + "','" + this->Prenom_Personnel + "','" 
        + this->Date_Embauche + "','" + this->Adresse_Personnel + "','" + this->ID_Personnel_1 + ",)";
}
System::String^ NS_Comp_Mappage::CLmapPerso::Delete(int id) 
{
    return "DELETE FROM [Kokoyo].[dbo].[Personnel] WHERE ID_Personnel =" + id;
}
