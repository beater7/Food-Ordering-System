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
	/// Summary for waffles
	/// </summary>
	public ref class waffles : public System::Windows::Forms::Form
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
		int ctr3;

	public:
		waffles(void)
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
		~waffles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox3;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(waffles::typeid));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::DarkOrange;
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox3->Location = System::Drawing::Point(-1, 1);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(468, 138);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(163, 21);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(107, 99);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkOrange;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 168);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &waffles::groupBox1_Enter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Location = System::Drawing::Point(26, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(148, 76);
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::DarkOrange;
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Location = System::Drawing::Point(12, 324);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(26, 13);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(148, 76);
			this->pictureBox3->TabIndex = 32;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::DarkOrange;
			this->groupBox4->Controls->Add(this->pictureBox4);
			this->groupBox4->Location = System::Drawing::Point(12, 474);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 100);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(26, 18);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(148, 76);
			this->pictureBox4->TabIndex = 32;
			this->pictureBox4->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(323, 209);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 16);
			this->label7->TabIndex = 25;
			this->label7->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(255, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 27);
			this->button1->TabIndex = 24;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &waffles::button1_Click);
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(343, 204);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(62, 27);
			this->button->TabIndex = 23;
			this->button->Text = L"+";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &waffles::button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(323, 372);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 16);
			this->label1->TabIndex = 28;
			this->label1->Text = L"0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(255, 367);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 27);
			this->button2->TabIndex = 27;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &waffles::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(343, 367);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 27);
			this->button3->TabIndex = 26;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &waffles::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(323, 516);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 16);
			this->label2->TabIndex = 31;
			this->label2->Text = L"0";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(255, 511);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 27);
			this->button4->TabIndex = 30;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &waffles::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(343, 511);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 27);
			this->button5->TabIndex = 29;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &waffles::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(77, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 16);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Php 55.00";
			this->label3->Click += gcnew System::EventHandler(this, &waffles::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(40, 271);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 16);
			this->label4->TabIndex = 32;
			this->label4->Text = L"CHOCOLATE WAFFLE";
			this->label4->Click += gcnew System::EventHandler(this, &waffles::label4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(79, 443);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 16);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Php 75.00";
			this->label6->Click += gcnew System::EventHandler(this, &waffles::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(14, 427);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(198, 16);
			this->label5->TabIndex = 34;
			this->label5->Text = L"BLUEBERRY CREAM CHEESE";
			this->label5->Click += gcnew System::EventHandler(this, &waffles::label5_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(76, 593);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 16);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Php 65.00";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(65, 577);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 16);
			this->label9->TabIndex = 36;
			this->label9->Text = L"HOT COFFEE";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(288, 649);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 39);
			this->button6->TabIndex = 38;
			this->button6->Text = L"DONE";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &waffles::button6_Click);
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
			this->label10->TabIndex = 39;
			this->label10->Text = L"0";
			this->label10->Click += gcnew System::EventHandler(this, &waffles::label10_Click);
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
			this->label11->TabIndex = 41;
			this->label11->Text = L"TOTAL:";
			this->label11->Click += gcnew System::EventHandler(this, &waffles::label11_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(13, 638);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(68, 58);
			this->pictureBox5->TabIndex = 42;
			this->pictureBox5->TabStop = false;
			// 
			// waffles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(442, 723);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Name = L"waffles";
			this->Text = L"waffles";
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
	order1 = "Chocolate Waffle x";
	ctr1 += 1;
	totprice1 += 55;
	totorder1 = order1 + ctr1.ToString() + " = " + totprice1.ToString();
	totalOrder = totorder1 + " " + totorder2 + " " + totorder3;
	int value = Int32::Parse(label7->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 += 55;
	value++;
	label10->Text = total1.ToString();
	label7->Text = value.ToString();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int value = Int32::Parse(label7->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 -= 55;
	value--;
	label10->Text = total1.ToString();
	label7->Text = value.ToString();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	order2 = "Blueberry Cream Cheese x";
	ctr2 += 1;
	totprice2 += 75;
	totorder2 = order2 + ctr2.ToString() + " = " + totprice2.ToString();
	totalOrder = totorder1 + " " + totorder2 + " " + totorder3;
	int value = Int32::Parse(label1->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 += 75;
	value++;
	label10->Text = total1.ToString();
	label1->Text = value.ToString();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Int32::Parse(label1->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 -= 75;
	value--;
	label10->Text = total1.ToString();
	label1->Text = value.ToString();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	order3 = "Hot Coffee x";
	ctr3 += 1;
	totprice3 += 65;
	totorder3 = order3 + ctr3.ToString() + " = " + totprice3.ToString();
	totalOrder = totorder1 + " " + totorder2 + " " + totorder3;
	int value = Int32::Parse(label2->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 += 65;
	value++;
	label10->Text = total1.ToString();
	label2->Text = value.ToString();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Int32::Parse(label2->Text);
	int total1 = Int32::Parse(label10->Text);
	total1 -= 65;
	value--;
	label10->Text = total1.ToString();
	label2->Text = value.ToString();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int tot = Int32::Parse(label10->Text);
	String^ shop1 = "Famous Belgian Waffles";
	Checkout^ ch = gcnew Checkout(tot, shop1, totalOrder);
	ch->Show();
	Hide();
}
};
}
