#include "MyForm.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Dtcheat::MyForm form;
	Application::Run(% form);
}


