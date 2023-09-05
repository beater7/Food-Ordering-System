#pragma once
#include "Checkout.h"

namespace SofDes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for shawarma
	/// </summary>
	public ref class shawarma : public System::Windows::Forms::Form
	{
	public:
		String^ order1;
		String^ order2;
		String^ order3;
		String^ totorder1;
		String^ totorder2;
		String^ totorder3;
		String^ totalOrder;
		int totprice1;
		int totprice2;
		int totprice3;
		int ctr1;
		int ctr2;
		Button ^back;
	private: System::Windows::Forms::Button^ button4;
	public:
		int ctr3;
	
	public:
		shawarma()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		shawarma(Button ^sh)
		{
			back = sh;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~shawarma()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(shawarma::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Gold;
			this->groupBox1->Controls->Add(this->groupBox6);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Location = System::Drawing::Point(12, 168);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Location = System::Drawing::Point(193, 59);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(200, 100);
			this->groupBox6->TabIndex = 2;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"groupBox6";
			// 
			// groupBox5
			// 
			this->groupBox5->Location = System::Drawing::Point(199, 43);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 100);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"groupBox5";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(26, 11);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(148, 76);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &shawarma::pictureBox2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Gold;
			this->groupBox3->Controls->Add(this->pictureBox4);
			this->groupBox3->Location = System::Drawing::Point(12, 324);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 100);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(26, 13);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(148, 76);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Gold;
			this->groupBox4->Controls->Add(this->pictureBox3);
			this->groupBox4->Location = System::Drawing::Point(12, 474);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 100);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(26, 14);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(148, 76);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Gold;
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Location = System::Drawing::Point(-21, 1);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(468, 138);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(175, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(137, 120);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(22, 271);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"BUY 1 TAKE 1 SHAWARMA";
			this->label1->Click += gcnew System::EventHandler(this, &shawarma::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(73, 287);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Php 90.00";
			this->label2->Click += gcnew System::EventHandler(this, &shawarma::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(58, 577);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"MOUNTAIN DEW";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(80, 593);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Php 30.00";
			this->label4->Click += gcnew System::EventHandler(this, &shawarma::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(29, 427);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"BUY 1 TAKE 1 RICE BOWL";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(73, 443);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Php 120.00";
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(340, 200);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(62, 27);
			this->button->TabIndex = 13;
			this->button->Text = L"+";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &shawarma::button_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(252, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 27);
			this->button1->TabIndex = 14;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &shawarma::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(252, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 27);
			this->button3->TabIndex = 16;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &shawarma::button3_Click);
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(340, 361);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 27);
			this->button5->TabIndex = 18;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &shawarma::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(340, 515);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(62, 27);
			this->button6->TabIndex = 19;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &shawarma::button6_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(252, 515);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 27);
			this->button8->TabIndex = 21;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &shawarma::button8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(320, 205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 16);
			this->label7->TabIndex = 22;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(320, 366);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 16);
			this->label8->TabIndex = 23;
			this->label8->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(320, 520);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 16);
			this->label9->TabIndex = 24;
			this->label9->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(90, 655);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(98, 29);
			this->label11->TabIndex = 45;
			this->label11->Text = L"TOTAL:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(187, 655);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 29);
			this->label10->TabIndex = 44;
			this->label10->Text = L"0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(288, 649);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 39);
			this->button2->TabIndex = 43;
			this->button2->Text = L"DONE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &shawarma::button2_Click_2);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(13, 638);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(68, 58);
			this->pictureBox5->TabIndex = 46;
			this->pictureBox5->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gold;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->ForeColor = System::Drawing::Color::Transparent;
			this->button4->Location = System::Drawing::Point(33, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(38, 31);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &shawarma::button4_Click);
			// 
			// shawarma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(442, 723);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox1);
			this->Name = L"shawarma";
			this->Text = L"shawarma";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
	order1 = "Shawarma x";
	ctr1 += 1;
	totprice1 += 90;
	totorder1 = order1 + ctr1.ToString() + " = " + totprice1.ToString();
	totalOrder = totorder1 + " " + totorder2 + " " + totorder3;       
	int value = Int32::Parse(label7->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 += 90;
	value++;
	label10->Text = total1.ToString();
	label7->Text = value.ToString();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Int32::Parse(label7->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 -= 90;
	value--;
	label10->Text = total1.ToString();
	label7->Text = value.ToString();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	order2 = "Rice Bowl x";
	ctr2 += 1;
	totprice2 += 120;
	totorder2 = order2 + ctr2.ToString() + " = " + totprice2.ToString();
	totalOrder = totorder1 + " " + totorder2 + " " + totorder3;
	int value = Int32::Parse(label8->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 += 120;
	value++;
	label10->Text = total1.ToString();
	label8->Text = value.ToString();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Int32::Parse(label8->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 -= 120;
	value--;
	label10->Text = total1.ToString();
	label8->Text = value.ToString();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	order3 = "Mountain Dew x";
	ctr3 += 1;
	totprice3 += 30;
	totorder3 = order3 + ctr3.ToString() + " = " + totprice3.ToString();
	totalOrder = totorder1 + " " + totorder2 + " " + totorder3;
	int value = Int32::Parse(label9->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 += 30;
	value++;
	label10->Text = total1.ToString();
	label9->Text = value.ToString();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Int32::Parse(label9->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 -= 30;
	value--;
	label10->Text = total1.ToString();
	label9->Text = value.ToString();
}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {
	int tot = Int32::Parse(label10->Text);
	String^ shop1 = "Shawarma Shack";
	Checkout^ ch = gcnew Checkout(tot, shop1, totalOrder);
	ch->Show();
	Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	back->Show();


}
};

}