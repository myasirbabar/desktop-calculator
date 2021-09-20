#pragma once
#include <cmath>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ operation;
	protected:

	protected:






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ addition;

	private: System::Windows::Forms::Button^ multiplication;
	private: System::Windows::Forms::Button^ division;



	private: System::Windows::Forms::Button^ equals;


	private: System::Windows::Forms::Button^ num7;

	private: System::Windows::Forms::Button^ num6;


	private: System::Windows::Forms::Button^ num8;

	private: System::Windows::Forms::Button^ num5;

	private: System::Windows::Forms::Button^ num2;



	private: System::Windows::Forms::Button^ num4;

	private: System::Windows::Forms::Button^ num1;

	private: System::Windows::Forms::Button^ num0;
	private: System::Windows::Forms::Button^ num9;

	private: System::Windows::Forms::Button^ num3;

	private: System::Windows::Forms::Button^ ac;
	private: System::Windows::Forms::Button^ mod;





	private: System::Windows::Forms::Button^ power;

	private: System::Windows::Forms::Label^ left;
	private: System::Windows::Forms::Label^ right;
	private: System::Windows::Forms::Button^ subtraction;

	private: System::Windows::Forms::Label^ help;
	private: System::Windows::Forms::Label^ error_msg;
	private: System::Windows::Forms::Button^ dot;
	private: System::Windows::Forms::Label^ calculation;
	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Button^ backspace;













	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->operation = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->addition = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->equals = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->ac = (gcnew System::Windows::Forms::Button());
			this->mod = (gcnew System::Windows::Forms::Button());
			this->power = (gcnew System::Windows::Forms::Button());
			this->left = (gcnew System::Windows::Forms::Label());
			this->right = (gcnew System::Windows::Forms::Label());
			this->subtraction = (gcnew System::Windows::Forms::Button());
			this->help = (gcnew System::Windows::Forms::Label());
			this->error_msg = (gcnew System::Windows::Forms::Label());
			this->dot = (gcnew System::Windows::Forms::Button());
			this->calculation = (gcnew System::Windows::Forms::Label());
			this->del = (gcnew System::Windows::Forms::Button());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// operation
			// 
			this->operation->AutoSize = true;
			this->operation->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->operation->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->operation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operation->ForeColor = System::Drawing::SystemColors::Desktop;
			this->operation->Location = System::Drawing::Point(194, 63);
			this->operation->Name = L"operation";
			this->operation->Size = System::Drawing::Size(100, 27);
			this->operation->TabIndex = 2;
			this->operation->Text = L"Operation";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Location = System::Drawing::Point(463, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"=";
			// 
			// addition
			// 
			this->addition->BackColor = System::Drawing::SystemColors::ControlLight;
			this->addition->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addition->Location = System::Drawing::Point(483, 319);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(73, 55);
			this->addition->TabIndex = 12;
			this->addition->Text = L"+";
			this->addition->UseVisualStyleBackColor = false;
			this->addition->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// multiplication
			// 
			this->multiplication->BackColor = System::Drawing::SystemColors::ControlLight;
			this->multiplication->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplication->Location = System::Drawing::Point(483, 187);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(73, 55);
			this->multiplication->TabIndex = 14;
			this->multiplication->Text = L"X";
			this->multiplication->UseVisualStyleBackColor = false;
			this->multiplication->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// division
			// 
			this->division->BackColor = System::Drawing::SystemColors::ControlLight;
			this->division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->division->Location = System::Drawing::Point(483, 254);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(73, 55);
			this->division->TabIndex = 13;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = false;
			this->division->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// equals
			// 
			this->equals->BackColor = System::Drawing::SystemColors::ControlLight;
			this->equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals->Location = System::Drawing::Point(392, 319);
			this->equals->Name = L"equals";
			this->equals->Size = System::Drawing::Size(73, 55);
			this->equals->TabIndex = 20;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = false;
			this->equals->Click += gcnew System::EventHandler(this, &Form1::equals_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->Location = System::Drawing::Point(23, 122);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(73, 55);
			this->num7->TabIndex = 8;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &Form1::num7_Click);
			this->num7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::num7_KeyPress);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->Location = System::Drawing::Point(223, 183);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(73, 55);
			this->num6->TabIndex = 7;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->Location = System::Drawing::Point(123, 122);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(73, 55);
			this->num8->TabIndex = 9;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &Form1::num8_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->Location = System::Drawing::Point(123, 183);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(73, 55);
			this->num5->TabIndex = 6;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &Form1::num5_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->Location = System::Drawing::Point(123, 249);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(73, 55);
			this->num2->TabIndex = 3;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &Form1::num2_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->Location = System::Drawing::Point(23, 186);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(73, 55);
			this->num4->TabIndex = 5;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &Form1::num4_Click);
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->Location = System::Drawing::Point(23, 248);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(73, 55);
			this->num1->TabIndex = 2;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &Form1::num1_Click);
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num0->Location = System::Drawing::Point(23, 319);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(73, 55);
			this->num0->TabIndex = 1;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			this->num0->Click += gcnew System::EventHandler(this, &Form1::num0_Click);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->Location = System::Drawing::Point(223, 122);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(73, 55);
			this->num9->TabIndex = 10;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &Form1::num9_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->num3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->num3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->Location = System::Drawing::Point(223, 248);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(73, 55);
			this->num3->TabIndex = 4;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &Form1::num3_Click);
			// 
			// ac
			// 
			this->ac->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ac->Location = System::Drawing::Point(392, 122);
			this->ac->Name = L"ac";
			this->ac->Size = System::Drawing::Size(73, 55);
			this->ac->TabIndex = 21;
			this->ac->Text = L"AC";
			this->ac->UseVisualStyleBackColor = false;
			this->ac->Click += gcnew System::EventHandler(this, &Form1::ac_Click);
			// 
			// mod
			// 
			this->mod->BackColor = System::Drawing::SystemColors::ControlLight;
			this->mod->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->mod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod->Location = System::Drawing::Point(392, 187);
			this->mod->Name = L"mod";
			this->mod->Size = System::Drawing::Size(73, 55);
			this->mod->TabIndex = 17;
			this->mod->Text = L"%";
			this->mod->UseVisualStyleBackColor = false;
			this->mod->Click += gcnew System::EventHandler(this, &Form1::mod_Click);
			// 
			// power
			// 
			this->power->BackColor = System::Drawing::SystemColors::ControlLight;
			this->power->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->power->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power->Location = System::Drawing::Point(392, 254);
			this->power->Name = L"power";
			this->power->Size = System::Drawing::Size(73, 55);
			this->power->TabIndex = 16;
			this->power->Text = L"^";
			this->power->UseVisualStyleBackColor = false;
			this->power->Click += gcnew System::EventHandler(this, &Form1::power_Click);
			// 
			// left
			// 
			this->left->AutoSize = true;
			this->left->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->left->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->left->ForeColor = System::Drawing::SystemColors::Desktop;
			this->left->Location = System::Drawing::Point(30, 54);
			this->left->Name = L"left";
			this->left->Size = System::Drawing::Size(0, 26);
			this->left->TabIndex = 29;
			// 
			// right
			// 
			this->right->AutoSize = true;
			this->right->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->right->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->right->ForeColor = System::Drawing::SystemColors::Desktop;
			this->right->Location = System::Drawing::Point(348, 54);
			this->right->Name = L"right";
			this->right->Size = System::Drawing::Size(0, 26);
			this->right->TabIndex = 30;
			// 
			// subtraction
			// 
			this->subtraction->BackColor = System::Drawing::SystemColors::ControlLight;
			this->subtraction->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->subtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtraction->Location = System::Drawing::Point(476, 122);
			this->subtraction->Name = L"subtraction";
			this->subtraction->Size = System::Drawing::Size(80, 55);
			this->subtraction->TabIndex = 15;
			this->subtraction->Text = L"-";
			this->subtraction->UseVisualStyleBackColor = false;
			this->subtraction->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// help
			// 
			this->help->AutoSize = true;
			this->help->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->help->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->help->ForeColor = System::Drawing::SystemColors::Desktop;
			this->help->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->help->Location = System::Drawing::Point(11, 20);
			this->help->Name = L"help";
			this->help->Size = System::Drawing::Size(101, 22);
			this->help->TabIndex = 34;
			this->help->Text = L"Message: ";
			// 
			// error_msg
			// 
			this->error_msg->AutoSize = true;
			this->error_msg->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->error_msg->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->error_msg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->error_msg->ForeColor = System::Drawing::SystemColors::Desktop;
			this->error_msg->Location = System::Drawing::Point(96, 20);
			this->error_msg->Name = L"error_msg";
			this->error_msg->Size = System::Drawing::Size(0, 22);
			this->error_msg->TabIndex = 35;
			this->error_msg->Click += gcnew System::EventHandler(this, &Form1::error_msg_Click);
			// 
			// dot
			// 
			this->dot->BackColor = System::Drawing::SystemColors::ControlLight;
			this->dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dot->Location = System::Drawing::Point(121, 319);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(75, 55);
			this->dot->TabIndex = 19;
			this->dot->Text = L".";
			this->dot->UseVisualStyleBackColor = false;
			this->dot->Click += gcnew System::EventHandler(this, &Form1::dot_Click);
			// 
			// calculation
			// 
			this->calculation->AutoSize = true;
			this->calculation->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->calculation->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->calculation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculation->ForeColor = System::Drawing::SystemColors::Desktop;
			this->calculation->Location = System::Drawing::Point(484, 55);
			this->calculation->Name = L"calculation";
			this->calculation->Size = System::Drawing::Size(74, 27);
			this->calculation->TabIndex = 38;
			this->calculation->Text = L"Result";
			this->calculation->Click += gcnew System::EventHandler(this, &Form1::calculation_Click);
			// 
			// del
			// 
			this->del->BackColor = System::Drawing::SystemColors::ControlLight;
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del->Location = System::Drawing::Point(223, 319);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(73, 55);
			this->del->TabIndex = 22;
			this->del->Text = L"Quit";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &Form1::del_Click);
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::SystemColors::ControlLight;
			this->backspace->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspace->Location = System::Drawing::Point(307, 122);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(73, 55);
			this->backspace->TabIndex = 11;
			this->backspace->Text = L"⌫ ";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &Form1::backspace_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(569, 447);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->calculation);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->error_msg);
			this->Controls->Add(this->help);
			this->Controls->Add(this->subtraction);
			this->Controls->Add(this->right);
			this->Controls->Add(this->left);
			this->Controls->Add(this->power);
			this->Controls->Add(this->mod);
			this->Controls->Add(this->ac);
			this->Controls->Add(this->del);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->equals);
			this->Controls->Add(this->division);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->addition);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->operation);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->HelpButton = true;
			this->Name = L"Form1";
			this->Text = L"Arithmetic Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void reset() {
			if (calculation->Text != "Result" || error_msg->Text != "") {
				error_msg->ResetText();
				calculation->ResetText(); calculation->Text = "Result";
				operation->ResetText(); operation->Text = "Operation";
				left->ResetText();
				right->ResetText();
				return;
			}
			else
				return;
		}

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//addition
			reset();
			if (left->Text == "") {
				error_msg->Text = "Left Operaend Not Found";
			}
			else {
				error_msg->ResetText();
				operation->Text = addition->Text;
			}
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//division
			reset();
			if (left->Text == "") {
				error_msg->Text = "Left Operaend Not Found";
			}
			else {
				error_msg->ResetText();
				operation->Text = division->Text;
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//multiply
			reset();
			if (left->Text == "") {
				error_msg->Text = "Left Operaend Not Found";
			}
			else {
				error_msg->ResetText();
				operation->Text = multiplication->Text;
			}
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//subtraction
			reset();
			if (left->Text == "") {
				error_msg->Text = "Left Operaend Not Found";
			}
			else {
				error_msg->ResetText();
				operation->Text = subtraction->Text;
			}
		}
		private: System::Void power_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (left->Text == "") {
				error_msg->Text = "Left Operaend Not Found";
			}
			else {
				error_msg->ResetText();
				operation->Text = power->Text;
			}
		}
		private: System::Void mod_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (left->Text == "") {
				error_msg->Text = "Left Operaend Not Found";
			}
			else {
				error_msg->ResetText();
				operation->Text = mod->Text;
			}
		}

		private: System::Void num0_Click(System::Object^ sender, System::EventArgs^ e) {
			
			reset();
			if(operation->Text != "Operation")
				right->Text += num0->Text;
			else
				left->Text += num0->Text;
		}
		private: System::Void num1_Click(System::Object^ sender, System::EventArgs^ e) {
			
			reset();
			if (operation->Text != "Operation")
				right->Text += num1->Text;
			else
				left->Text += num1->Text;
		}
		private: System::Void num2_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text != "Operation")
				right->Text += num2->Text;
			else
				left->Text += num2->Text;
		}
		private: System::Void num3_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text != "Operation")
				right->Text += num3->Text;
			else
				left->Text += num3->Text;
		}
		private: System::Void num4_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text != "Operation")
				right->Text += num4->Text;
			else
				left->Text += num4->Text;
		}
		private: System::Void num5_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text != "Operation")
				right->Text += num5->Text;
			else
				left->Text += num5->Text;
		}
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text != "Operation")
				right->Text += num6->Text;
			else
				left->Text += num6->Text;
		}
		private: System::Void num7_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text != "Operation")
				right->Text += num7->Text;
			else
				left->Text += num7->Text;
		}
		private: System::Void num8_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text != "Operation")
				right->Text += num8->Text;
			else
				left->Text += num8->Text;
		}
		private: System::Void num9_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text != "Operation")
				right->Text += num9->Text;
			else
				left->Text += num9->Text;
		}
		private: System::Void dot_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text != "Operation") {
				if (right->Text == "")
					right->Text = "0" + dot->Text;
				else {
					int check = 0;
					check = right->Text->IndexOf(".");
					
					if (check == -1) {
						right->Text += dot->Text;
					}
					else {
						error_msg->ResetText();
						error_msg->Text = "Syntax Error";
						
					}
				}
			}	
			else {
				if (left->Text == "")
					left->Text = "0" + dot->Text;
				else {
					int check = 0;
					check = left->Text->IndexOf(".");
					if (check == -1) {
						left->Text += dot->Text;
						
					}
					else {
						error_msg->ResetText();
						error_msg->Text = "Syntax Error";
					}
				}
			}
		}

		private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
			if (MessageBox::Show("Do you want to Log out", "Logout", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::No) {
				return;
			}
			Application::Exit();
		}

		private: System::Void equals_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (left->Text == "" || right->Text == "" || operation->Text == "") {
				error_msg->Text = "Syntax Error";
				return;
			}
			double result = 0;
			switch (Convert::ToChar(operation->Text)) {
			case '+': {
				result = Convert::ToDouble(left->Text) + Convert::ToDouble(right->Text);
				calculation->Text = Convert::ToString(result);
				break;
			}

			case '-': {
				result = Convert::ToDouble(left->Text) - Convert::ToDouble(right->Text);
				calculation->Text = Convert::ToString(result);
				break;
			}
			case 'X': {
				result = Convert::ToDouble(left->Text) * Convert::ToDouble(right->Text);
				calculation->Text = Convert::ToString(result);
				break;
			}
			case '/': {
				if (Convert::ToDouble(right->Text) == 0) {
					error_msg->Text = "Math Error";
					//reset();
					break;
				}
				result = Convert::ToDouble(left->Text) / Convert::ToDouble(right->Text);
				calculation->Text = Convert::ToString(result);
				break;
			}
			case '%': {
				if (Convert::ToDouble(right->Text) == 0) {
					error_msg->Text = "Math Error";
				//	reset();
					break;
				}
				result = Convert::ToInt32(left->Text) % Convert::ToInt32(right->Text);
				calculation->Text = Convert::ToString(result);
				break;
			}
			case '^': {
				result = pow(Convert::ToDouble(left->Text), Convert::ToDouble(right->Text));
				calculation->Text = Convert::ToString(result);
				break;
			}
			default: {
				error_msg->ResetText(); error_msg->Text = "Syntax Error";
			}
			}


		}

		private: System::Void ac_Click(System::Object^ sender, System::EventArgs^ e) {
			error_msg->ResetText();
			calculation->ResetText(); calculation->Text = "Result";
			operation->ResetText(); operation->Text = "Operation";
			left->ResetText();
			right->ResetText();
		}

		private: System::Void error_msg_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void calculation_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void backspace_Click(System::Object^ sender, System::EventArgs^ e) {
			reset();
			if (operation->Text == "Operation") {
				if (left->Text->Length > 0) 
					left->Text = left->Text->Remove(left->Text->Length - 1, 1);
			}
			else{
				if (right->Text != "") {
					if (right->Text->Length > 0)
						right->Text = right->Text->Remove(right->Text->Length - 1, 1);
				}
				else
					operation->Text = "Operation";
			}
		}
	private: System::Void Form1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		
	}
	private: System::Void num7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		
	}
};
}
