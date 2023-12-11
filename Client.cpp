#include "Client.h"

int Client::getClient_Id()
{
    return this->Client_Id;
}

System::String^ Client::getPrenom_Client()
{
    return this->Prenom_Client;
}

System::String^ Client::getNom_Client()
{
    return this->Nom_Client;
}

System::String^ Client::getAdresse_Facturation()
{
    return this->adresse_Facturation;
}

System::String^ Client::getAdresse_Livraison()
{
    return this->adresse_Livraison;
}

System::String^ Client::getDate_Naissance()
{
    return this->date_Naissance;
}

void Client::setPrenom_Client(System::String^ prenom)
{
    this->Prenom_Client = prenom;
}

void Client::setNom_Client(System::String^ nom)
{
    this->Nom_Client = nom;
}

void Client::setAdresse_Facturation(System::String^ adresse_factu)
{
    this->adresse_Facturation = adresse_factu;
}

void Client::setAdresse_Livraison(System::String^ adresse_livr)
{
    this->adresse_Livraison = adresse_livr;
}

void Client::setDate_Naissance(System::String^ date)
{
    this->date_Naissance = date;
}

System::String^ Client::Select(void)
{
    return "SELECT * FROM [Kokoyo].[dbo].[Client]";
}

System::String^ Client::Select(int ID)
{
    return "SELECT * FROM [Kokoyo].[dbo].[CLient] WHERE ID_CLient =" + ID;
}
System::String^ Client::Update(int ID)
{
    return "UPDATE [Kokoyo].[dbo].[Client] SET  Prenom_CLient = '" + this->Prenom_Client
        + "', Nom_CLient = '" + this->Nom_Client + "', Date_Naissance = '" + this->date_Naissance
        + "', Adresse_livraison = '" + this->adresse_Livraison + "', Adresse_facturation = '" + this->adresse_Facturation
        + "' WHERE ID_Client = " + ID;
}

System::String^ Client::Insert()
{
    return "INSERT INTO [Kokoyo].[dbo].[Client](Nom_Client, Prenom_Client, Date_Naissance, Adresse_livraison, Adresse_facturation) VALUES ('"
        + this->Nom_Client + "','" + this->Prenom_Client + "','"
        + this->date_Naissance + "','" + this->adresse_Livraison + "','" + this->adresse_Facturation + "')";
}

System::String^ Client::Delete(int ID)
{
    return "DELETE FROM [Kokoyo].[dbo].[Client] WHERE ID_Client =" + ID;
}