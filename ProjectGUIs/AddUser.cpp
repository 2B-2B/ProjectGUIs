#include "AddUser.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int addUser(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectGUIs::AddUser form;
    Application::Run(% form);
    return 0;
}