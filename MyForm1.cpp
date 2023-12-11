#include "MyForm.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ChargementKokoyo::MyForm monformulaire;
    //kokoyo::MainForm monformulaire;
    Application::Run(% monformulaire);
    return 0;
}