#include "Ship.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int ship(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectGUIs::Ship ship;
    Application::Run(% ship);
    return 0;
}