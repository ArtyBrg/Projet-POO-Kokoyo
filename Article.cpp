#include "Article.h"

int Article::getID_Article()
{
    return this->ID_Article;
}

System::String^ Article::getNom_Article()
{
    return this->Nom_Article;
}

float Article::getPrix_Article()
{
    return this->Prix_Article;
}

System::String^ Article::getCouleur()
{
    return this->Couleur;
}

int Article::getSeuil_Reapprovisionnement()
{
    return this->Seuil_Reapprovisionnement;
}

int Article::getStock()
{
    return this->Stock;
}

void Article::setNom_Article(System::String^ nom)
{
    this->Nom_Article = nom;
}

void Article::setPrix_Article(float prix)
{
    this->Prix_Article = prix;
}

void Article::set_Couleur(System::String^ couleur)
{
    this->Couleur = couleur;
}

void Article::setSeuil_Reapprovisionnement(int seuil)
{
    this->Seuil_Reapprovisionnement = seuil;
}

void Article::setStock(int stock)
{
    this->Stock = stock;
}

System::String^ Article::Select()
{
    return "SELECT * FROM [Kokoyo].[dbo].[Article]";
}
System::String^ Article::Select(int ID)
{
    return "SELECT * FROM [Kokoyo].[dbo].[Article] WHERE ID_Article =" + ID;
}

System::String^ Article::Update(int ID)
{
    return "UPDATE [Kokoyo].[dbo].[Article] SET  Nom_Article = '" + this->Nom_Article
        + "', Prix_Article = '" + this->Prix_Article + "', Couleur = '"
        + this->Couleur + "', Seuil_Reapprovisionnement = '"
        + this->Seuil_Reapprovisionnement + "', Stock = '" + this->Stock + "' WHERE ID_Article = " + ID;
}

System::String^ Article::Insert()
{
    return "INSERT INTO [Kokoyo].[dbo].[Article](Nom_Article, Prix_Article, Couleur, Seuil_Reapprovisionnement, Stock) VALUES ('"
        + this->Nom_Article + "','" + this->Prix_Article + "','"
        + this->Couleur + "','" + this->Seuil_Reapprovisionnement + "','" + this->Stock + "')";
}

System::String^ Article::Delete(int id)
{
    return "DELETE FROM [Kokoyo].[dbo].[Article] WHERE ID_Article =" + id;
}