#pragma once
ref class ClmapPerso
{
};

#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapPerso
	{
	private:
		System::String^ sSql;
		int ID_Personnel;
		System::String^ Nom_Personnel;
		System::String^ Prenom_Personnel;
		System::String^ Date_Embauche;
		System::String^ Adresse_Personnel;
		int ID_Personnel_1;
	public:
		System::String^ Select();
		System::String^ Select(int id);
		System::String^ Update(int id);
		System::String^ Insert();
		System::String^ Delete(int id);
		void setNom_Personnel(System::String^);
		void setPrenom_Personnel(System::String^);
		void setDate_Embauche(System::String^);
		void setAdresse_Personnel(System::String^);
		void setID_Personnel_1(int);
		int getID_Personnel(void);
		System::String^ getNom_Personnel(void);
		System::String^ getPrenom_Personnel(void);
		System::String^ getDate_Embauche(void);
		System::String^ getAdresse_Personnel(void);
		int getID_Personnel_1(void);
	};
}