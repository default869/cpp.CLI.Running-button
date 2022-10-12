#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
}