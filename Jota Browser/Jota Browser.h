#pragma once
#pragma comment(lib, "wininet.lib")

#include <Windows.h>
#include <wininet.h>

namespace BROWSER_SPACE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BROWSER
	/// </summary>
	public ref class BROWSER : public System::Windows::Forms::Form
	{
	public:
		BROWSER(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~BROWSER()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->webBrowser1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(8, 85);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(582, 296);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Browser space";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(3, 16);
			this->webBrowser1->Margin = System::Windows::Forms::Padding(0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(576, 277);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->Url = (gcnew System::Uri(L"", System::UriKind::Relative));
			this->webBrowser1->Navigated += gcnew System::Windows::Forms::WebBrowserNavigatedEventHandler(this, &BROWSER::webBrowser1_Navigated);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(94, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"← Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BROWSER::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(180, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Forward →";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BROWSER::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(266, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"ReLoad";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BROWSER::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(8, 33);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Homepage";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &BROWSER::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 384);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Browser version:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(132, 384);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Made by:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(90, 384);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"1.0.2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Purple;
			this->label5->Location = System::Drawing::Point(180, 384);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"DUB1401";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label6->Location = System::Drawing::Point(290, 384);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(305, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Copyright (C) 2017-2021. This browser is only for Evolv Sunrise.";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(352, 9);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(237, 50);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Browser stats";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Purple;
			this->label11->Location = System::Drawing::Point(84, 34);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(147, 13);
			this->label11->TabIndex = 3;
			this->label11->Text = L"____________________";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(6, 34);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Current version:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Purple;
			this->label9->Location = System::Drawing::Point(84, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"____________________";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Calling module:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(53, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 16);
			this->label12->TabIndex = 14;
			this->label12->Text = L"undefined";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(8, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 16);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Page:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(8, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(383, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &BROWSER::textBox1_KeyPress);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(397, 62);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 22);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Navigate";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &BROWSER::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(483, 62);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(22, 22);
			this->button6->TabIndex = 18;
			this->button6->Text = L"♥";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &BROWSER::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(509, 62);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 22);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Bookmarks";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &BROWSER::button7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(352, 9);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(237, 50);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Bookmarks";
			this->groupBox3->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label17->ForeColor = System::Drawing::Color::OrangeRed;
			this->label17->Location = System::Drawing::Point(218, 34);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 13);
			this->label17->TabIndex = 5;
			this->label17->Text = L"✖";
			this->label17->Visible = false;
			this->label17->Click += gcnew System::EventHandler(this, &BROWSER::label17_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->ForeColor = System::Drawing::Color::OrangeRed;
			this->label16->Location = System::Drawing::Point(218, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"✖";
			this->label16->Visible = false;
			this->label16->Click += gcnew System::EventHandler(this, &BROWSER::label16_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->ForeColor = System::Drawing::Color::Purple;
			this->label1->Location = System::Drawing::Point(42, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 3;
			this->label1->Click += gcnew System::EventHandler(this, &BROWSER::label1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Slot 2:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->ForeColor = System::Drawing::Color::Purple;
			this->label14->Location = System::Drawing::Point(42, 16);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 1;
			this->label14->Click += gcnew System::EventHandler(this, &BROWSER::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(6, 16);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Slot 1:";
			// 
			// BROWSER
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(596, 400);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"BROWSER";
			this->Text = L"Jota Browser";
			this->Load += gcnew System::EventHandler(this, &BROWSER::BROWSER_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ Mark1;
		String^ Name1;
		String^ Mark2;
		String^ Name2;

		//Сохраняет закладки.
		void SaveBM() {
			System::IO::StreamWriter SW("Bookmarks.txt");
			SW.WriteLine(Mark1);
			SW.WriteLine(Name1);
			SW.WriteLine(Mark2);
			SW.WriteLine(Name2);
			SW.Close();
		}

		//Добавляет закладку в свободный слот.
		void AddBookmark() {
			if (Name1 == "<EMPTY>") {
				Mark1 = textBox1->Text;
				Name1 = webBrowser1->DocumentTitle;
				label14->Text = Name1;
				button6->ForeColor = System::Drawing::Color::Red;
				label16->Visible = true;
				SaveBM();
			}
			else if (Name2 == "<EMPTY>") {
				Mark2 = textBox1->Text;
				Name2 = webBrowser1->DocumentTitle;
				label1->Text = Name2;
				button6->ForeColor = System::Drawing::Color::Red;
				label17->Visible = true;
				SaveBM();
			}
			else {
				MessageBox::Show("There are not enough slots for bookmarks. Free the slot by removing the bookmark.", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		//Проверяет кнопку закладки.
		void CheckBM() {
			if (textBox1->Text == Mark1 || textBox1->Text == Mark2) {
				button6->ForeColor = System::Drawing::Color::Red;
			}
			else button6->ForeColor = System::Drawing::Color::Black;
		}

	private: System::Void BROWSER_Load(System::Object^ sender, System::EventArgs^ e) {

		if (System::IO::File::Exists("DIALOG_BROWSER.txt")) {
			System::IO::StreamReader SR("DIALOG_BROWSER.txt", System::Text::Encoding::Default);
			label9->Text = SR.ReadLine();
			label11->Text = SR.ReadLine();
			webBrowser1->Navigate(SR.ReadLine());
			SR.Close();
			System::IO::File::Delete("DIALOG_BROWSER.txt");
		}

		///Проверка и создание ресурсной папки.
		if (!System::IO::File::Exists("Bookmarks.txt")) {
			System::IO::File::Create("Bookmarks.txt")->Close();

			System::IO::StreamWriter SW("Bookmarks.txt");
			SW.WriteLine("<EMPTY>");
			SW.WriteLine("<EMPTY>");
			SW.WriteLine("<EMPTY>");
			SW.WriteLine("<EMPTY>");
			SW.Close();
		}

		System::IO::StreamReader SR("Bookmarks.txt");
		Mark1 = SR.ReadLine();
		Name1 = SR.ReadLine();
		Mark2 = SR.ReadLine();
		Name2 = SR.ReadLine();
		SR.Close();

		if (Name1 != "<EMPTY>") label16->Visible = true;
		if (Name2 != "<EMPTY>") label17->Visible = true;

		label14->Text = Name1;
		label1->Text = Name2;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		webBrowser1->GoBack();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		webBrowser1->GoForward();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		webBrowser1->Url = (gcnew System::Uri(L"https://dubos-update-server.github.io/Manual.html", System::UriKind::Absolute));
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		webBrowser1->Navigate(webBrowser1->Url);
	}

	private: System::Void webBrowser1_Navigated(System::Object^ sender, System::Windows::Forms::WebBrowserNavigatedEventArgs^ e) {
		label12->Text = webBrowser1->DocumentTitle;
		textBox1->Text = webBrowser1->Url->ToString();
		///Изменение цвета кнопки закладок.
		CheckBM();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		webBrowser1->Navigate(textBox1->Text);

	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == Convert::ToChar(Keys::Enter)) webBrowser1->Navigate(textBox1->Text);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (groupBox2->Visible) {
			groupBox2->Visible = false;
			groupBox3->Visible = true;
			button7->Text = L"Stats";
		}
		else {
			groupBox2->Visible = true;
			groupBox3->Visible = false;
			button7->Text = L"Bookmarks";
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		AddBookmark();
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Name1 != "<EMPTY>") webBrowser1->Navigate(Mark1);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Name2 != "<EMPTY>") webBrowser1->Navigate(Mark2);
	}
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
		Mark1 = "<EMPTY>";
		Name1 = "<EMPTY>";
		label14->Text = Name1;
		label16->Visible = false;
		CheckBM();
		SaveBM();
	}
	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
		Mark2 = "<EMPTY>";
		Name2 = "<EMPTY>";
		label1->Text = Name2;
		label17->Visible = false;
		CheckBM();
		SaveBM();
	}
	};
}
