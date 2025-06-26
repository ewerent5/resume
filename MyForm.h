#pragma once

namespace Dtcheat {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ de;
	private: System::Windows::Forms::Button^ umn;
	private: System::Windows::Forms::Button^ mn;
	private: System::Windows::Forms::Button^ pls;
	private: System::Windows::Forms::Button^ point;
	private: System::Windows::Forms::Button^ result;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ below;
	private: System::Windows::Forms::Button^ proc;

	private:
		double firs_num;
		char act{' '};
		bool is_eq = false;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->de = (gcnew System::Windows::Forms::Button());
			this->umn = (gcnew System::Windows::Forms::Button());
			this->mn = (gcnew System::Windows::Forms::Button());
			this->pls = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->below = (gcnew System::Windows::Forms::Button());
			this->proc = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(12, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(15, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(93, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(171, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(15, 228);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(93, 228);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(171, 228);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 50);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->Location = System::Drawing::Point(15, 298);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 50);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->Location = System::Drawing::Point(93, 298);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 50);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->Location = System::Drawing::Point(171, 298);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 50);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button10->Location = System::Drawing::Point(15, 368);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(138, 50);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Butter_click);
			// 
			// de
			// 
			this->de->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->de->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->de->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->de->ForeColor = System::Drawing::Color::LimeGreen;
			this->de->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->de->Location = System::Drawing::Point(251, 157);
			this->de->Name = L"de";
			this->de->Size = System::Drawing::Size(75, 50);
			this->de->TabIndex = 11;
			this->de->Text = L"/";
			this->de->UseVisualStyleBackColor = false;
			this->de->Click += gcnew System::EventHandler(this, &MyForm::de_Click);
			// 
			// umn
			// 
			this->umn->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->umn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->umn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->umn->ForeColor = System::Drawing::Color::LimeGreen;
			this->umn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->umn->Location = System::Drawing::Point(251, 205);
			this->umn->Name = L"umn";
			this->umn->Size = System::Drawing::Size(75, 50);
			this->umn->TabIndex = 12;
			this->umn->Text = L"*";
			this->umn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->umn->UseVisualStyleBackColor = false;
			this->umn->Click += gcnew System::EventHandler(this, &MyForm::umn_Click);
			// 
			// mn
			// 
			this->mn->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->mn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->mn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mn->ForeColor = System::Drawing::Color::LimeGreen;
			this->mn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->mn->Location = System::Drawing::Point(251, 254);
			this->mn->Name = L"mn";
			this->mn->Size = System::Drawing::Size(75, 50);
			this->mn->TabIndex = 13;
			this->mn->Text = L"-";
			this->mn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->mn->UseVisualStyleBackColor = false;
			this->mn->Click += gcnew System::EventHandler(this, &MyForm::mn_Click);
			// 
			// pls
			// 
			this->pls->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->pls->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pls->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->pls->ForeColor = System::Drawing::Color::LimeGreen;
			this->pls->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->pls->Location = System::Drawing::Point(251, 303);
			this->pls->Name = L"pls";
			this->pls->Size = System::Drawing::Size(75, 50);
			this->pls->TabIndex = 14;
			this->pls->Text = L"+";
			this->pls->UseVisualStyleBackColor = false;
			this->pls->Click += gcnew System::EventHandler(this, &MyForm::pls_Click);
			// 
			// point
			// 
			this->point->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point->ForeColor = System::Drawing::SystemColors::Control;
			this->point->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->point->Location = System::Drawing::Point(171, 368);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(60, 50);
			this->point->TabIndex = 15;
			this->point->Text = L",";
			this->point->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->point->UseVisualStyleBackColor = false;
			this->point->Click += gcnew System::EventHandler(this, &MyForm::point_Click);
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::Color::LimeGreen;
			this->result->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->result->ForeColor = System::Drawing::Color::Snow;
			this->result->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->result->Location = System::Drawing::Point(251, 351);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(75, 67);
			this->result->TabIndex = 16;
			this->result->Text = L"=";
			this->result->UseVisualStyleBackColor = false;
			this->result->Click += gcnew System::EventHandler(this, &MyForm::result_Click);
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->back->ForeColor = System::Drawing::Color::LimeGreen;
			this->back->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->back->Location = System::Drawing::Point(251, 107);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(75, 34);
			this->back->TabIndex = 17;
			this->back->Text = L"<";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::OrangeRed;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->clear->ForeColor = System::Drawing::SystemColors::Control;
			this->clear->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->clear->Location = System::Drawing::Point(15, 107);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(60, 35);
			this->clear->TabIndex = 18;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// below
			// 
			this->below->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->below->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->below->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->below->ForeColor = System::Drawing::Color::LimeGreen;
			this->below->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->below->Location = System::Drawing::Point(93, 107);
			this->below->Name = L"below";
			this->below->Size = System::Drawing::Size(60, 34);
			this->below->TabIndex = 19;
			this->below->Text = L"+/-";
			this->below->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->below->UseVisualStyleBackColor = false;
			this->below->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// proc
			// 
			this->proc->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->proc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->proc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->proc->ForeColor = System::Drawing::Color::LimeGreen;
			this->proc->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->proc->Location = System::Drawing::Point(171, 107);
			this->proc->Name = L"proc";
			this->proc->Size = System::Drawing::Size(60, 34);
			this->proc->TabIndex = 20;
			this->proc->Text = L"%";
			this->proc->UseVisualStyleBackColor = false;
			this->proc->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ClientSize = System::Drawing::Size(346, 438);
			this->Controls->Add(this->proc);
			this->Controls->Add(this->below);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->back);
			this->Controls->Add(this->result);
			this->Controls->Add(this->point);
			this->Controls->Add(this->pls);
			this->Controls->Add(this->mn);
			this->Controls->Add(this->umn);
			this->Controls->Add(this->de);
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
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"      ";
			this->ResumeLayout(false);

		}
#pragma endregion
	// 
	// click 1 2 3 4 5 6 7 8 9 0
	// 
	private: System::Void Butter_click(System::Object^ sender, System::EventArgs^ e) {
		Button^ bt = safe_cast<Button^>(sender);

		if (this->label1->Text == "0" || is_eq) {
			this->label1->Text = bt->Text;
			this->is_eq = false;
		}
		else{this->label1->Text += bt->Text;}

	}

	private: System::Void de_Click(System::Object^ sender, System::EventArgs^ e) {
		math_act('/');
	}
	private: System::Void umn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_act('*');
	}
	private: System::Void mn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_act('-');
	}
	private: System::Void pls_Click(System::Object^ sender, System::EventArgs^ e) {
		math_act('+');
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		math_act('%');
	}

	private: System::Void math_act(char ch) {
		this->firs_num = System::Convert::ToDouble(this->label1->Text);
		this->act = ch;
		this->label1->Text = "0";
	}
	// 
	//  =
	// 
	private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e) {

		if (act == ' ') {
			return;}

		double res{};
		double second = System::Convert::ToDouble(this->label1->Text);

		switch (this->act) {
		case'+': res = this->firs_num + second; break;
		case'-': res = this->firs_num - second; break;
		case'*': res = this->firs_num * second; break;
		case'%': res = this->firs_num * second / 100.0; break;
		case'/': 
			if (second == 0.0) {
				res = 0.0;
			}
			else {
				res = this->firs_num / second; break;
			}
		}

		this->is_eq = true;
		this->label1->Text = System::Convert::ToString(res);
	}
	// 
	// AC
	// 
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "0";
		this->firs_num = 0;
		this->act = ' ';
		this->is_eq = false;
	}
	// 
	// + / -
	// 
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		double num = System::Convert::ToDouble(this->label1->Text);

		num *= -1.0;

		this->label1->Text = System::Convert::ToString(num);
	}
	// 
	// back  <
	// 
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->label1->Text == "0") return;
		
		else {

			String^ str{};

			for (short i = 0; i < (this->label1->Text->Length - 1); ++i) str += this->label1->Text[i];

			this->label1->Text = str;
		}

		if (this->label1->Text == "") this->label1->Text = "0";
	}

    // 
	// 0,000
	// 
	private: System::Void point_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!this->label1->Text->Contains(","))

			this->label1->Text += ",";

	}
};
}
