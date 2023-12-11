#ifndef CLIENT
#define CLIENT

#pragma once

ref class Client {
private:
    int Client_Id;
    System::String^ Prenom_Client;
    System::String^ Nom_Client;
    System::String^ adresse_Facturation;
    System::String^ adresse_Livraison;
    System::String^ date_Naissance;
public:
    int getClient_Id();
    System::String^ getPrenom_Client();
    System::String^ getNom_Client();
    System::String^ getAdresse_Facturation();
    System::String^ getAdresse_Livraison();
    System::String^ getDate_Naissance();
    void setNom_Client(System::String^);
    void setPrenom_Client(System::String^);
    void setAdresse_Facturation(System::String^);
    void setAdresse_Livraison(System::String^);
    void setDate_Naissance(System::String^);
    System::String^ Select();
    System::String^ Select(int id);
    System::String^ Update(int id);
    System::String^ Insert();
    System::String^ Delete(int id);
};


#endif