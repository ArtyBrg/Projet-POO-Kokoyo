#pragma once
ref class Article
{
private:
    int ID_Article;
    System::String^ Nom_Article;
    float Prix_Article;
    System::String^ Couleur;
    int Seuil_Reapprovisionnement;
    int Stock;

public:
    int getID_Article();
    System::String^ getNom_Article();
    float getPrix_Article();
    System::String^ getCouleur();
    int getSeuil_Reapprovisionnement();
    int getStock();

    void setNom_Article(System::String^);
    void setPrix_Article(float);
    void set_Couleur(System::String^);
    void setSeuil_Reapprovisionnement(int);
    void setStock(int);

    System::String^ Select();
    System::String^ Select(int id);
    System::String^ Update(int id);
    System::String^ Insert();
    System::String^ Delete(int id);

};