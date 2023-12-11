#include <Windows.h>

#include "MyForm1.h"

#pragma once

using namespace System::Threading;
using namespace std;

namespace ChargementKokoyo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			kokoyo->BackgroundImage = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\Petal_Final.png");
			kunai1->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\KUNAI.png");
			kunai2->Image = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\KUNAI2.png");
			this->BackgroundImage = Image::FromFile("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\fond2.png");
			this->Icon = gcnew System::Drawing::Icon("C:\\Users\\Utilisateur\\Arthur\\Cours\\A2\\Programmation Orienté Objet\\Projet\\Image\\logo.ico");

			this->lb_kokoyo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::label_Paint);
			kunai1->Location = Point(440, 380); // Positionnez kunai1 à l'intérieur du label
			kunai1->Parent = lb_kokoyo;

			kunai2->Location = Point(13, 16); // Positionnez kunai2 par rapport à kunai1
			kunai2->Parent = kunai1;
			kokoyo->Parent = lb_kokoyo;
		}
		protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lb_kokoyo;
	protected:
	protected:
	private: System::Windows::Forms::PictureBox^ kokoyo;
	private: System::Windows::Forms::PictureBox^ kunai2;

	private: System::Windows::Forms::PictureBox^ kunai1;

	protected:


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lb_kokoyo = (gcnew System::Windows::Forms::Label());
			this->kokoyo = (gcnew System::Windows::Forms::PictureBox());
			this->kunai2 = (gcnew System::Windows::Forms::PictureBox());
			this->kunai1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kokoyo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kunai2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kunai1))->BeginInit();
			this->SuspendLayout();
			// 
			// lb_kokoyo
			// 
			this->lb_kokoyo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_kokoyo->BackColor = System::Drawing::Color::Transparent;
			this->lb_kokoyo->Font = (gcnew System::Drawing::Font(L"KATANA", 199.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_kokoyo->ForeColor = System::Drawing::Color::White;
			this->lb_kokoyo->Location = System::Drawing::Point(0, -35);
			this->lb_kokoyo->Margin = System::Windows::Forms::Padding(0);
			this->lb_kokoyo->Name = L"lb_kokoyo";
			this->lb_kokoyo->Size = System::Drawing::Size(1377, 660);
			this->lb_kokoyo->TabIndex = 8;
			this->lb_kokoyo->Text = L"KOKOYO";
			this->lb_kokoyo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lb_kokoyo->UseMnemonic = false;
			// 
			// kokoyo
			// 
			this->kokoyo->BackColor = System::Drawing::Color::Transparent;
			this->kokoyo->Location = System::Drawing::Point(-3000, -1600);
			this->kokoyo->Name = L"kokoyo";
			this->kokoyo->Size = System::Drawing::Size(3000, 1600);
			this->kokoyo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->kokoyo->TabIndex = 6;
			this->kokoyo->TabStop = false;
			// 
			// kunai2
			// 
			this->kunai2->BackColor = System::Drawing::Color::Transparent;
			this->kunai2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->kunai2->Location = System::Drawing::Point(1168, 1);
			this->kunai2->Name = L"kunai2";
			this->kunai2->Size = System::Drawing::Size(100, 96);
			this->kunai2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->kunai2->TabIndex = 9;
			this->kunai2->TabStop = false;
			// 
			// kunai1
			// 
			this->kunai1->BackColor = System::Drawing::Color::Transparent;
			this->kunai1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->kunai1->Location = System::Drawing::Point(815, 1);
			this->kunai1->Name = L"kunai1";
			this->kunai1->Size = System::Drawing::Size(217, 133);
			this->kunai1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->kunai1->TabIndex = 10;
			this->kunai1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1359, 613);
			this->Controls->Add(this->kunai2);
			this->Controls->Add(this->kunai1);
			this->Controls->Add(this->kokoyo);
			this->Controls->Add(this->lb_kokoyo);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1377, 660);
			this->MinimumSize = System::Drawing::Size(1377, 660);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chargement de Kokoyo";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kokoyo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kunai2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kunai1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	void MyForm::StartTimer()
	{
		System::Windows::Forms::Timer^ timer = gcnew System::Windows::Forms::Timer();
		timer->Interval = 1;
		timer->Tick += gcnew System::EventHandler(this, &MyForm::Deplacer_Petale);
		timer->Start();

		System::Windows::Forms::Timer^ timer2 = gcnew System::Windows::Forms::Timer();
		timer2->Interval = 50;
		timer2->Tick += gcnew System::EventHandler(this, &MyForm::Chargement);
		timer2->Start();
    }

	System::Void MyForm::Deplacer_Petale(System::Object^ sender, System::EventArgs^ e)
	{
		static int fin = 0;
		static bool etat = true;
		if (etat)
		{
			lb_kokoyo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::label_Paint);
			lb_kokoyo->Refresh();
			etat = false;
		}
		if (fin != 135)
		{
			kokoyo->Top += 4.8;
			kokoyo->Left += 10;
			fin++;
		}
		else
		{
			System::Windows::Forms::Timer^ timer = dynamic_cast<System::Windows::Forms::Timer^>(sender);
			if (timer != nullptr) {
				timer->Stop();
				delete timer;
			}
			this->Hide();

			kokoyo::MainForm^ fonction = gcnew kokoyo::MainForm();
			fonction->ShowDialog();

			this->Close();
		}
	}
	System::Void MyForm::Chargement(System::Object^ sender, System::EventArgs^ e)
	{
		static int compteur = 0;
		static int fin2 = 0;
		int tab[] = {15,16,17,18};
		bool estDanstab = false;
		if (fin2 != 73)
		{
			for (int i = 0; i < sizeof(tab) / sizeof(tab[0]); ++i)
			{
				if (tab[i] == compteur)
				{
					estDanstab = true;
					break;
				}
			}
			if (estDanstab)
			{
				kunai1->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
				kunai1->Refresh();
				kunai2->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
				kunai2->Refresh();
				if (compteur == 18)
				{
					compteur = 0;
				}
			}
			compteur++;
			fin2++;
		}
		else
		{
			System::Windows::Forms::Timer^ timer2 = dynamic_cast<System::Windows::Forms::Timer^>(sender);
			if (timer2 != nullptr) {
				timer2->Stop();
				delete timer2;
			}
		}
	}
	System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		Thread::Sleep(1000);
		StartTimer();
	}
	System::Void label_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		Color customColor = Color::FromArgb(0x7C, 0x15, 0x29);

		SolidBrush^ customBrush = gcnew SolidBrush(customColor);

		e->Graphics->DrawString(lb_kokoyo->Text, lb_kokoyo->Font, customBrush, PointF(0, 160));

		delete customBrush;
	}
};
}