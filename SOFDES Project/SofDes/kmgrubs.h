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
	/// Summary for kmgrubs
	/// </summary>
	public ref class kmgrubs : public System::Windows::Forms::Form
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
		kmgrubs(void)
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
		~kmgrubs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(kmgrubs::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Red;
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Location = System::Drawing::Point(-1, 1);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(447, 129);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(153, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 56);
			this->label3->TabIndex = 0;
			this->label3->Text = L"KM Grubs";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Red;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 166);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Snow;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(28, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(148, 76);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Red;
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Location = System::Drawing::Point(12, 316);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 100);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Snow;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(26, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(148, 76);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Red;
			this->groupBox4->Controls->Add(this->pictureBox3);
			this->groupBox4->Location = System::Drawing::Point(13, 464);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 100);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Snow;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(26, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(148, 76);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(26, 269);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"BEEF BULGOGI WITH RICE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(81, 285);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Php 75.00";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(26, 419);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"LEMON CHICKEN WITH RICE";
			this->label4->Click += gcnew System::EventHandler(this, &kmgrubs::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(81, 435);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Php 75.00";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(35, 567);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"MANGO GRAHAM SHAKE";
			this->label6->Click += gcnew System::EventHandler(this, &kmgrubs::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(81, 583);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Php 40.00";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(237, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 27);
			this->button1->TabIndex = 15;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &kmgrubs::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(305, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 16);
			this->label8->TabIndex = 23;
			this->label8->Text = L"0";
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(325, 205);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(62, 27);
			this->Add->TabIndex = 24;
			this->Add->Text = L"+";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &kmgrubs::Add_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(237, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 27);
			this->button2->TabIndex = 25;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &kmgrubs::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(305, 359);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 16);
			this->label9->TabIndex = 26;
			this->label9->Text = L"0";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(325, 354);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 27);
			this->button3->TabIndex = 27;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &kmgrubs::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(237, 500);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 27);
			this->button4->TabIndex = 28;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &kmgrubs::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(305, 505);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 16);
			this->label10->TabIndex = 29;
			this->label10->Text = L"0";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(325, 500);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 27);
			this->button5->TabIndex = 30;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &kmgrubs::button5_Click);
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
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(187, 655);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 29);
			this->label12->TabIndex = 44;
			this->label12->Text = L"0";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(288, 649);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 39);
			this->button6->TabIndex = 43;
			this->button6->Text = L"DONE";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &kmgrubs::button6_Click);
			// 
			// kmgrubs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(442, 723);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"kmgrubs";
			this->Text = L"kmgrubs";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	order1 = "Bulgogi x";
	ctr1 += 1;
	totprice1 += 75;
	totorder1 = order1 + ctr1.ToString() + " = " + totprice1.ToString();
	totalOrder = totorder1 + " " + totorder2 + " " + totorder3;
	int value = Int32::Parse(label8->Text);
	int total1 = Int32::Parse(label12->Text);
	total1 += 75;
	value++;
	label12->Text = total1.ToString();
	label8->Text = value.ToString();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Int32::Parse(label8->Text);
	int total1 = Int32::Parse(label12->Text);
	total1 -= 75;
	value--;
	label12->Text = total1.ToString();
	label8->Text = value.ToString();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	order2 = "Lemon Chicken x";
	ctr2 += 1;
	totprice2 += 75;
	totorder2 = order2 + ctr2.ToString() + " = " + totprice2.ToString();
	totalOrder = totorder1 + " " + totorder2 + " " + totorder3;
	int value = Int32::Parse(label9->Text);
	int total1 = Int32::Parse(label12->Text);
	total1 += 75;
	value++;
	label12->Text = total1.ToString();
	label9->Text = value.ToString();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Int32::Parse(label9->Text);
	int total1 = Int32::Parse(label12->Text);
	total1 -= 75;
	value--;
	label12->Text = total1.ToString();
	label9->Text = value.ToString();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	order3 = "Mango Graham x";
	ctr3 += 1;
	totprice3 += 40;
	totorder3 = order3 + ctr3.ToString() + " = " + totprice3.ToString();
	totalOrder = totorder1 + " " + totorder2 + " " + totorder3;
	int value = Int32::Parse(label10->Text);
	int total1 = Int32::Parse(label12->Text);
	total1 += 40;
	value++;
	label12->Text = total1.ToString();
	label10->Text = value.ToString();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Int32::Parse(label10->Text);
	int total1 = Int32::Parse(label12->Text);
	total1 -= 40;
	value--;
	label12->Text = total1.ToString();
	label10->Text = value.ToString();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int tot = Int32::Parse(label12->Text);
	String^ shop1 = "KM Grubs";
	Checkout^ ch = gcnew Checkout(tot, shop1, totalOrder);
	ch->Show();
	Hide();
}
};
}
