#pragma once

#include "kmgrubs.h"
#include "shawarma.h"
#include "waffles.h"
#include "Checkout.h"

namespace SofDes {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ Kmbtn;

	private: System::Windows::Forms::GroupBox^ Wafflebtn;



	private: System::Windows::Forms::GroupBox^ Shackbtn;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Kmbtn = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Wafflebtn = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Shackbtn = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->Kmbtn->SuspendLayout();
			this->Wafflebtn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Shackbtn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkGreen;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(442, 127);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Goldenrod;
			this->label1->Location = System::Drawing::Point(-8, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(469, 95);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TECH CANTEEN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkGreen;
			this->label2->Location = System::Drawing::Point(157, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SHOPS";
			// 
			// Kmbtn
			// 
			this->Kmbtn->BackColor = System::Drawing::Color::Red;
			this->Kmbtn->Controls->Add(this->label3);
			this->Kmbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Kmbtn->Location = System::Drawing::Point(98, 188);
			this->Kmbtn->Name = L"Kmbtn";
			this->Kmbtn->Size = System::Drawing::Size(251, 113);
			this->Kmbtn->TabIndex = 2;
			this->Kmbtn->TabStop = false;
			this->Kmbtn->Click += gcnew System::EventHandler(this, &MyForm::Kmbtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(55, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 56);
			this->label3->TabIndex = 0;
			this->label3->Text = L"KM Grubs";
			// 
			// Wafflebtn
			// 
			this->Wafflebtn->BackColor = System::Drawing::Color::DarkOrange;
			this->Wafflebtn->Controls->Add(this->pictureBox2);
			this->Wafflebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Wafflebtn->Location = System::Drawing::Point(98, 470);
			this->Wafflebtn->Name = L"Wafflebtn";
			this->Wafflebtn->Size = System::Drawing::Size(251, 113);
			this->Wafflebtn->TabIndex = 3;
			this->Wafflebtn->TabStop = false;
			this->Wafflebtn->Click += gcnew System::EventHandler(this, &MyForm::Wafflebtn_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(69, 8);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(107, 99);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// Shackbtn
			// 
			this->Shackbtn->BackColor = System::Drawing::Color::Gold;
			this->Shackbtn->Controls->Add(this->pictureBox1);
			this->Shackbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Shackbtn->Location = System::Drawing::Point(98, 330);
			this->Shackbtn->Name = L"Shackbtn";
			this->Shackbtn->Size = System::Drawing::Size(251, 113);
			this->Shackbtn->TabIndex = 3;
			this->Shackbtn->TabStop = false;
			this->Shackbtn->Click += gcnew System::EventHandler(this, &MyForm::Shackbtn_Enter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(69, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(107, 99);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(442, 723);
			this->Controls->Add(this->Wafflebtn);
			this->Controls->Add(this->Shackbtn);
			this->Controls->Add(this->Kmbtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->Kmbtn->ResumeLayout(false);
			this->Kmbtn->PerformLayout();
			this->Wafflebtn->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->Shackbtn->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Kmbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		kmgrubs^ km = gcnew kmgrubs();
		km->Show(); 
		Hide();
	}



	private: System::Void Wafflebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		waffles^ waffle = gcnew waffles();
		waffle->Show();
		Hide();
	}
private: System::Void Shackbtn_Enter(System::Object^ sender, System::EventArgs^ e) {
	shawarma^ sh = gcnew shawarma(this);
	sh->Show();
	Hide();
}
};

}

