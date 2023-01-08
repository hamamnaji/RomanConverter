#include "RomanNumeralConverterForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RomanConverter::RomanNumeralConverterForm roman;
	Application::Run(% roman);
}