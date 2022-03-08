#pragma once

namespace DMXcalc2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Calc
	/// </summary>
	public ref class Calc : public System::Windows::Forms::Form
	{
	public:
		Calc(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Calc()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::ProgressBar^ progressBar5;
	private: System::Windows::Forms::ProgressBar^ progressBar6;
	private: System::Windows::Forms::ProgressBar^ progressBar7;
	private: System::Windows::Forms::ProgressBar^ progressBar8;
	private: System::Windows::Forms::ProgressBar^ progressBar9;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Button^ button6;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar6 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar7 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar8 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar9 = (gcnew System::Windows::Forms::ProgressBar());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Location = System::Drawing::Point(27, 107);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(132, 63);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"DMX value";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maskedTextBox1->Location = System::Drawing::Point(6, 18);
			this->maskedTextBox1->Mask = L"000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(69, 38);
			this->maskedTextBox1->TabIndex = 8;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 54);
			this->button1->TabIndex = 4;
			this->button1->Text = L"DMX to PIN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calc::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 54);
			this->button2->TabIndex = 4;
			this->button2->Text = L"PIN to DMX";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calc::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar1->Location = System::Drawing::Point(6, 37);
			this->progressBar1->Maximum = 10;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(50, 16);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 5;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Calc::progressBar1_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar2->Location = System::Drawing::Point(6, 59);
			this->progressBar2->Maximum = 10;
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(50, 16);
			this->progressBar2->Step = 1;
			this->progressBar2->TabIndex = 5;
			this->progressBar2->Click += gcnew System::EventHandler(this, &Calc::progressBar2_Click);
			// 
			// progressBar3
			// 
			this->progressBar3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar3->Location = System::Drawing::Point(6, 81);
			this->progressBar3->Maximum = 10;
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(50, 16);
			this->progressBar3->Step = 1;
			this->progressBar3->TabIndex = 5;
			this->progressBar3->Click += gcnew System::EventHandler(this, &Calc::progressBar3_Click);
			// 
			// progressBar4
			// 
			this->progressBar4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar4->Location = System::Drawing::Point(6, 103);
			this->progressBar4->Maximum = 10;
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(50, 16);
			this->progressBar4->Step = 1;
			this->progressBar4->TabIndex = 5;
			this->progressBar4->Click += gcnew System::EventHandler(this, &Calc::progressBar4_Click);
			// 
			// progressBar5
			// 
			this->progressBar5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar5->Location = System::Drawing::Point(6, 125);
			this->progressBar5->Maximum = 10;
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(50, 16);
			this->progressBar5->Step = 1;
			this->progressBar5->TabIndex = 5;
			this->progressBar5->Click += gcnew System::EventHandler(this, &Calc::progressBar5_Click);
			// 
			// progressBar6
			// 
			this->progressBar6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar6->Location = System::Drawing::Point(6, 147);
			this->progressBar6->Maximum = 10;
			this->progressBar6->Name = L"progressBar6";
			this->progressBar6->Size = System::Drawing::Size(50, 16);
			this->progressBar6->Step = 1;
			this->progressBar6->TabIndex = 5;
			this->progressBar6->Click += gcnew System::EventHandler(this, &Calc::progressBar6_Click);
			// 
			// progressBar7
			// 
			this->progressBar7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar7->Location = System::Drawing::Point(6, 169);
			this->progressBar7->Maximum = 10;
			this->progressBar7->Name = L"progressBar7";
			this->progressBar7->Size = System::Drawing::Size(50, 16);
			this->progressBar7->Step = 1;
			this->progressBar7->TabIndex = 5;
			this->progressBar7->Click += gcnew System::EventHandler(this, &Calc::progressBar7_Click);
			// 
			// progressBar8
			// 
			this->progressBar8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar8->Location = System::Drawing::Point(6, 191);
			this->progressBar8->Maximum = 10;
			this->progressBar8->Name = L"progressBar8";
			this->progressBar8->Size = System::Drawing::Size(50, 16);
			this->progressBar8->Step = 1;
			this->progressBar8->TabIndex = 5;
			this->progressBar8->Click += gcnew System::EventHandler(this, &Calc::progressBar8_Click);
			// 
			// progressBar9
			// 
			this->progressBar9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar9->Location = System::Drawing::Point(6, 213);
			this->progressBar9->Maximum = 10;
			this->progressBar9->Name = L"progressBar9";
			this->progressBar9->Size = System::Drawing::Size(50, 16);
			this->progressBar9->Step = 1;
			this->progressBar9->TabIndex = 5;
			this->progressBar9->Click += gcnew System::EventHandler(this, &Calc::progressBar9_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->progressBar6);
			this->groupBox3->Controls->Add(this->progressBar9);
			this->groupBox3->Controls->Add(this->progressBar1);
			this->groupBox3->Controls->Add(this->progressBar8);
			this->groupBox3->Controls->Add(this->progressBar2);
			this->groupBox3->Controls->Add(this->progressBar7);
			this->groupBox3->Controls->Add(this->progressBar3);
			this->groupBox3->Controls->Add(this->progressBar4);
			this->groupBox3->Controls->Add(this->progressBar5);
			this->groupBox3->Location = System::Drawing::Point(205, 18);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(98, 240);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"DIP Switch";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(62, 213);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"256";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(62, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"128";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(62, 169);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"64";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(62, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"32";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(62, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"16";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(62, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"8";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(27, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(276, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Clear all values";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calc::button3_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(337, 327);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(329, 301);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"DMX calculator";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(329, 301);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Patch calculator";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(32, 263);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(248, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Clear all values";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calc::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(44, 202);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 46);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Back";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calc::button6_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(172, 202);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 46);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Forward";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calc::button4_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->groupBox6);
			this->groupBox5->Location = System::Drawing::Point(88, 87);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(150, 99);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Address";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->maskedTextBox5);
			this->groupBox7->Location = System::Drawing::Point(78, 19);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(65, 72);
			this->groupBox7->TabIndex = 4;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"DMX";
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maskedTextBox5->Location = System::Drawing::Point(6, 19);
			this->maskedTextBox5->Mask = L"000";
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(54, 38);
			this->maskedTextBox5->TabIndex = 3;
			this->maskedTextBox5->Text = L"1";
			this->maskedTextBox5->ValidatingType = System::Int32::typeid;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->maskedTextBox4);
			this->groupBox6->Location = System::Drawing::Point(6, 19);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(66, 72);
			this->groupBox6->TabIndex = 3;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Universe";
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maskedTextBox4->Location = System::Drawing::Point(18, 19);
			this->maskedTextBox4->Mask = L"00";
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(38, 38);
			this->maskedTextBox4->TabIndex = 2;
			this->maskedTextBox4->Text = L"1";
			this->maskedTextBox4->ValidatingType = System::Int32::typeid;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->maskedTextBox3);
			this->groupBox4->Location = System::Drawing::Point(8, 15);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(118, 66);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Number of channels";
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maskedTextBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->maskedTextBox3->Location = System::Drawing::Point(6, 19);
			this->maskedTextBox3->Mask = L"000";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(56, 38);
			this->maskedTextBox3->TabIndex = 1;
			this->maskedTextBox3->Text = L"0";
			this->maskedTextBox3->ValidatingType = System::Int32::typeid;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->maskedTextBox2);
			this->groupBox2->Location = System::Drawing::Point(213, 15);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(93, 66);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Fixture count";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maskedTextBox2->Location = System::Drawing::Point(6, 19);
			this->maskedTextBox2->Mask = L"000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(57, 38);
			this->maskedTextBox2->TabIndex = 0;
			this->maskedTextBox2->Text = L"1";
			this->maskedTextBox2->ValidatingType = System::Int32::typeid;
			// 
			// Calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(333, 325);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Calc";
			this->Text = L"DMX calculator";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void progressBar2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void progressBar3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void progressBar4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void progressBar5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void progressBar6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void progressBar7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void progressBar8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void progressBar9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);

};
}
