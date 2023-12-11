#pragma once
ref class Commande
{
private:
    int ID_Commande;
    System::String^ Reference;
    System::String^ Date_Livraison;
    System::String^ Date_Emission;
    System::String^ Moyen_Paiement;
    int ID_Client;

public:
    int getID_Commande();
    System::String^ getReference();
    System::String^ getDate_Livraison();
    System::String^ getDate_Emission();
    System::String^ getMoyen_Paiement();
    int getID_Client();

    void setReference(System::String^);
    void setDate_Livraison(System::String^);
    void setDate_Emission(System::String^);
    void setMoyen_Paiement(System::String^);
    void setID_Client(int);

    System::String^ Select();
    System::String^ Select(int id);
    System::String^ Update(int id);
    System::String^ Insert();
    System::String^ Delete(int id);
};