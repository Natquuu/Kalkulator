#pragma once
#include "Calculator.h"
#include "Addition.h"
#include "Division.h"
#include "Exponentiation.h"
#include "Multiplication.h"
#include "Strength.h"
#include "Subtraction.h"
#include "History.h"


namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(219, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(11, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(57, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(102, 78);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(39, 34);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(11, 118);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 34);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(57, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(39, 34);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(102, 118);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(39, 34);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(12, 158);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(39, 34);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(57, 158);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(39, 34);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(102, 158);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(39, 34);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(12, 38);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(39, 34);
			this->button10->TabIndex = 10;
			this->button10->Text = L"±";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(57, 38);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(39, 34);
			this->button11->TabIndex = 11;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(102, 38);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(39, 34);
			this->button12->TabIndex = 12;
			this->button12->Text = L",";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(147, 38);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(39, 34);
			this->button13->TabIndex = 13;
			this->button13->Text = L"C";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(147, 78);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(39, 34);
			this->button14->TabIndex = 14;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(147, 118);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(39, 34);
			this->button15->TabIndex = 15;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(192, 78);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(39, 34);
			this->button16->TabIndex = 16;
			this->button16->Text = L"×";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(192, 118);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(39, 34);
			this->button17->TabIndex = 17;
			this->button17->Text = L"÷";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(192, 158);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(39, 34);
			this->button18->TabIndex = 18;
			this->button18->Text = L"!";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(147, 158);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(39, 34);
			this->button19->TabIndex = 19;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button20->Location = System::Drawing::Point(190, 38);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(39, 34);
			this->button20->TabIndex = 20;
			this->button20->Text = L"x²";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(241, 201);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		History^ h = gcnew History();

	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "0";
	}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->TextLength != 0) {
		Calculator::equals = 0;
		double liczba1 = Convert::ToDouble(textBox1->Text);
		Calculator^ d = gcnew Addition(liczba1);
		h->Add(d);
		if (Calculator::setamount == 0)
		{
			Calculator::set_value(liczba1);
			textBox1->Clear();
		}
		else
		{
			d->operation();
			textBox1->Text = Calculator::result.ToString();
			textBox1->Clear();
		}
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text += "1";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text += "2";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text += "3";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text += "4";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text += "5";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text += "6";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text += "7";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text += "8";
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text += "9";
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
	
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->TextLength != 0) {
		double l = Convert::ToDouble(textBox1->Text);
		l *= -1;
		textBox1->Text = l.ToString();
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Clear();
	Calculator::setamount = 0;
	Calculator::equals = 0;
	h->Clear();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->TextLength != 0) textBox1->Text += ",";
}

	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->TextLength != 0)
		{
			if (Calculator::equals == 0) {
				h->Last()->set_a(Convert::ToDouble(textBox1->Text));
				Calculator::equals++;
			}
			if (h->Last()->illegaloperation())
			{
				h->Last()->operation();
				textBox1->Text = Calculator::result.ToString();
				Calculator::setamount = 0;
			}
			else textBox1->Text = "Nie mozna wykonac operacji";
		}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->TextLength != 0) {
		Calculator::equals = 0;
		double liczba1 = Convert::ToDouble(textBox1->Text);
		Calculator^ d = gcnew Subtraction(liczba1);
		h->Add(d);
		if (Calculator::setamount == 0)
		{
			Calculator::set_value(liczba1);
			textBox1->Clear();
		}
		else
		{
			d->operation();
			textBox1->Text = Calculator::result.ToString();
			textBox1->Clear();
		}
	}
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->TextLength != 0) {
		Calculator::equals = 0;
		double liczba1 = Convert::ToDouble(textBox1->Text);
		Calculator^ d = gcnew Exponentiation();
		h->Add(d);
			Calculator::set_value(liczba1);
			d->operation();
			textBox1->Text = Calculator::result.ToString();	
			Calculator::setamount = 0;

	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->TextLength != 0) {
		Calculator::equals = 0;
		double liczba1 = Convert::ToDouble(textBox1->Text);
		Calculator^ d = gcnew Multiplication(liczba1);
		h->Add(d);
		if (Calculator::setamount == 0)
		{
			Calculator::set_value(liczba1);
			textBox1->Clear();
		}
		else
		{
			d->operation();
			textBox1->Text = Calculator::result.ToString();
			textBox1->Clear();
		}
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->TextLength != 0) {
		Calculator::equals = 0;
		double liczba1 = Convert::ToDouble(textBox1->Text);
		Calculator^ d = gcnew Division(liczba1);
		h->Add(d);
		if (Calculator::setamount == 0)
		{
			Calculator::set_value(liczba1);
			textBox1->Clear();
		}
		else
		{
			if (liczba1 == 0) textBox1->Text = "Nie mozna dzielic przez zero!";
			else {
				d->operation();
				textBox1->Text = Calculator::result.ToString();
				textBox1->Clear();
			}
		}
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->TextLength != 0) {
		Calculator::equals = 0;
		double liczba1 = Convert::ToDouble(textBox1->Text);
		Calculator^ d = gcnew Strength();
		h->Add(d);
		Calculator::set_value(liczba1);
		if (d->illegaloperation()) {
			d->operation();
			textBox1->Text = Calculator::result.ToString();
			Calculator::setamount = 0;
		}
		else textBox1->Text = "Nie mozna wykonac operacji";
	}
}
};
}
