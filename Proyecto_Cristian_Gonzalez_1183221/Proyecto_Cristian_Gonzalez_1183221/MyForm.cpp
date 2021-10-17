#include "MyForm.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <cctype>
#include"Pila.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using System::String;


[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProyectoCristianGonzalez1183221::MyForm form;
	Application::Run(% form);
	return 0;
}