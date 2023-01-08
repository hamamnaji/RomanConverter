#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <math.h>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
namespace RomanConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RomanNumeralConverterForm
	/// </summary>
	public ref class RomanNumeralConverterForm : public System::Windows::Forms::Form
	{
	public:
		RomanNumeralConverterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RomanNumeralConverterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ romanInput;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ romanInt;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->romanInput = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->romanInt = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(54, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(477, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Roman Numeral Converter";
			this->label1->Click += gcnew System::EventHandler(this, &RomanNumeralConverterForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(132, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter Roman Numeral";
			// 
			// romanInput
			// 
			this->romanInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->romanInput->Location = System::Drawing::Point(294, 141);
			this->romanInput->Name = L"romanInput";
			this->romanInput->Size = System::Drawing::Size(165, 20);
			this->romanInput->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(61, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"CONVERT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RomanNumeralConverterForm::button1_Click);
			// 
			// romanInt
			// 
			this->romanInt->AutoSize = true;
			this->romanInt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->romanInt->Location = System::Drawing::Point(258, 233);
			this->romanInt->Name = L"romanInt";
			this->romanInt->Size = System::Drawing::Size(70, 25);
			this->romanInt->TabIndex = 4;
			this->romanInt->Text = L"label3";
			this->romanInt->Click += gcnew System::EventHandler(this, &RomanNumeralConverterForm::romanInt_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(357, 351);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 48);
			this->button2->TabIndex = 5;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RomanNumeralConverterForm::button2_Click);
			// 
			// RomanNumeralConverterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 432);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->romanInt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->romanInput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"RomanNumeralConverterForm";
			this->Text = L"RomanNumeralConverterForm";
			this->Load += gcnew System::EventHandler(this, &RomanNumeralConverterForm::RomanNumeralConverterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ roman = this->romanInput->Text;

		
		//----------------------------------------------------
		int sum = 0;
		int* romnum = new int[roman->Length];
		for (int i = 0; i < roman->Length; i++) {
			switch (roman[i]) {

			case 'I':
				romnum[i] = (1);
				break;
			case 'V':
				romnum[i] = (5);
				break;
			case 'X':
				romnum[i] = (10);
				break;
			case 'L':
				romnum[i] = (50);
				break;
			case 'C':
				romnum[i] = (100);
				break;
			case 'D':
				romnum[i] = (500);
				break;
			case 'M':
				romnum[i] = (1000);
				break;
			}
		}

		if (roman->Length == 1) {
			sum = romnum[0];
			String^ answer = sum.ToString();
			this->romanInt->Text = answer;
		}
		else {
			for (int j = 0; j < roman->Length; j++) {

				if (romnum[j] < romnum[j + 1]) {
					sum -= romnum[j];
				}
				else {
					sum += romnum[j];
				}
			}
			String^ answer = sum.ToString();
			this->romanInt->Text = answer;
		}
	}
private: System::Void RomanNumeralConverterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->romanInt->Text = "";

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->romanInt->Text = "";

}
private: System::Void romanInt_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
