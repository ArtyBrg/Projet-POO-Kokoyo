#include "Commande.h"

int Commande::getID_Commande()
{
    return this->ID_Commande;
}

System::String^ Commande::getReference()
{
    return this->Reference;
}

System::String^ Commande::getDate_Livraison()
{
    return this->Date_Livraison;
}

System::String^ Commande::getDate_Emission()
{
    return this->Date_Emission;
}

System::String^ Commande::getMoyen_Paiement()
{
    return this->Moyen_Paiement;
}

int Commande::getID_Client()
{
    return this->ID_Client;
}


void Commande::setReference(System::String^ reference)
{
    this->Reference = reference;
}

void Commande::setDate_Livraison(System::String^ livraison)
{
    this->Date_Livraison = livraison;
}

void Commande::setDate_Emission(System::String^ emission)
{
    this->Date_Emission = emission;
}

void Commande::setMoyen_Paiement(System::String^ paiement)
{
    this->Moyen_Paiement = paiement;
}

void Commande::setID_Client(int id)
{
    this->ID_Client = id;

}
System::String^ Commande::Select()
{
    return "SELECT * FROM [Kokoyo].[dbo].[Commande]";
}

System::String^ Commande::Select(int ID)
{
    return "SELECT * FROM [Kokoyo].[dbo].[Commande] WHERE ID_Commande =" + ID;
}

System::String^ Commande::Update(int ID)
{
    return "UPDATE [Kokoyo].[dbo].[Commande] SET  Reference = '" + this->Reference
        + "', Date_Livraison = '" + this->Date_Livraison + "', Date_Emission = '" + this->Date_Emission
        + "', Moyen_Paiement = '" + this->Moyen_Paiement + "' WHERE ID_Commande = " + ID;
}

System::String^ Commande::Insert()
{
    return "INSERT INTO [Kokoyo].[dbo].[Commande](Reference, Date_Livraison, Date_Emission, Moyen_Paiement, ID_Client) VALUES ('"
        + this->Reference + "','" + this->Date_Livraison + "','"
        + this->Date_Emission + "','" + this->Moyen_Paiement + "','" + 1 + "')";
}

System::String^ Commande::Delete(int id)
{
    return "DELETE FROM [Kokoyo].[dbo].[Commande] WHERE ID_Commande =" + id;
}