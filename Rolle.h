#pragma once
#include <iostream>
#include <string>
std::string der(int (&f)[4]);

void szukites(double& a, double& b,int f[]);
double fug(double k, int f[]);

namespace window {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Rolle : public System::Windows::Forms::Form
	{
	public:
		Rolle(void)
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
		~Rolle()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label19;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label34;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rolle::typeid));
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(214, 112);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 56);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(541, 112);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(142, 56);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(875, 108);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(142, 56);
			this->textBox5->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 56);
			this->label1->TabIndex = 6;
			this->label1->Text = L"f(x)=";
			//this->label1->Click += gcnew System::EventHandler(this, &Rolle::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(805, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 51);
			this->label3->TabIndex = 8;
			this->label3->Text = L"+";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(469, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 108);
			this->label4->TabIndex = 9;
			this->label4->Text = L"+";
			//this->label4->Click += gcnew System::EventHandler(this, &Rolle::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1130, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 51);
			this->label5->TabIndex = 10;
			this->label5->Text = L"+";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1054, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 51);
			this->label7->TabIndex = 12;
			this->label7->Text = L"x";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(372, 115);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 53);
			this->label9->TabIndex = 20;
			this->label9->Text = L"x";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(573, 250);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(271, 115);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Rolle::button1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(245, 426);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 51);
			this->label12->TabIndex = 18;
			this->label12->Text = L" ";
			this->label12->Click += gcnew System::EventHandler(this, &Rolle::label12_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(1209, 104);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(136, 56);
			this->textBox6->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(245, 491);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 51);
			this->label2->TabIndex = 20;
			this->label2->Text = L" ";
			//this->label2->Click += gcnew System::EventHandler(this, &Rolle::label2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(245, 568);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 51);
			this->label6->TabIndex = 21;
			this->label6->Text = L" ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(245, 652);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 51);
			this->label10->TabIndex = 22;
			this->label10->Text = L" ";
			//this->label10->Click += gcnew System::EventHandler(this, &Rolle::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(245, 731);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 51);
			this->label11->TabIndex = 23;
			this->label11->Text = L" ";
			//this->label11->Click += gcnew System::EventHandler(this, &Rolle::label11_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(245, 804);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(33, 51);
			this->label13->TabIndex = 24;
			this->label13->Text = L" ";
			//this->label13->Click += gcnew System::EventHandler(this, &Rolle::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(57, 491);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(163, 51);
			this->label14->TabIndex = 25;
			this->label14->Text = L"(f\')  x1=";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(57, 568);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(163, 51);
			this->label15->TabIndex = 26;
			this->label15->Text = L"(f\')  x2=";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(102, 652);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(103, 51);
			this->label16->TabIndex = 27;
			this->label16->Text = L"x1 e";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(102, 731);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(103, 51);
			this->label17->TabIndex = 28;
			this->label17->Text = L"x2 e";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(102, 804);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(103, 51);
			this->label18->TabIndex = 29;
			this->label18->Text = L"x3 e";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(709, 112);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 55);
			this->label8->TabIndex = 30;
			this->label8->Text = L"x";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(90, 423);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(130, 55);
			this->label19->TabIndex = 31;
			this->label19->Text = L"f\'(x)=";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(861, 389);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1115, 778);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(899, 427);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(60, 69);
			this->label21->TabIndex = 35;
			this->label21->Text = L"x";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(889, 649);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(128, 69);
			this->label22->TabIndex = 36;
			this->label22->Text = L"f\'(x)";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(871, 863);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(117, 69);
			this->label23->TabIndex = 37;
			this->label23->Text = L"f(x)";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(1127, 427);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(34, 38);
			this->label24->TabIndex = 38;
			this->label24->Text = L"x";
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(1285, 427);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(107, 69);
			this->label25->TabIndex = 39;
			this->label25->Text = L"x";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(1549, 427);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(115, 69);
			this->label26->TabIndex = 40;
			this->label26->Text = L"x";
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(1800, 427);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(149, 69);
			this->label27->TabIndex = 41;
			this->label27->Text = L"x";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(1285, 649);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(34, 38);
			this->label28->TabIndex = 42;
			this->label28->Text = L"x";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(1557, 652);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(34, 38);
			this->label29->TabIndex = 43;
			this->label29->Text = L"x";
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(1127, 863);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(103, 69);
			this->label30->TabIndex = 44;
			this->label30->Text = L"x";
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(1285, 863);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(125, 69);
			this->label31->TabIndex = 45;
			this->label31->Text = L"x";
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(1556, 863);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(120, 69);
			this->label32->TabIndex = 46;
			this->label32->Text = L"x";
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(1791, 863);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(140, 69);
			this->label33->TabIndex = 47;
			this->label33->Text = L"x";
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(404, 104);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 37);
			this->label20->TabIndex = 48;
			this->label20->Text = L"3";
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(749, 104);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(59, 37);
			this->label34->TabIndex = 49;
			this->label34->Text = L"2";
			// 
			// Rolle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Name = L"Rolle";
			this->Text = L"Rolle";
			//this->Load += gcnew System::EventHandler(this, &Rolle::Rolle_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}




	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int f[4] = { 0 };
		f[3] = System::Convert::ToInt16(textBox3->Text);
		f[2] = System::Convert::ToInt16(textBox4->Text);
		f[1] = System::Convert::ToInt16(textBox5->Text);
		f[0] = System::Convert::ToInt16(textBox6->Text);
		
		label10->Text = " ";
		label11->Text = " ";
		label13->Text = " ";
		label2->Text = " ";
		label6->Text = " ";

		label24->Text = "-inf";
		label25->Text = " ";
		label26->Text = " ";
		label27->Text = "+inf";
		label28->Text = " ";
		label29->Text = " ";
		label30->Text = " ";
		label31->Text = " ";
		label32->Text = " ";
		label33->Text = " ";

		int fd[4]={0};
		for (int i = 0;i <= 3;i++)fd[i] = f[i];
		std::string deriv = der(fd);
		
		String^ str3 = gcnew String(deriv.data());
		label12->Text = str3;
		double x1, x2;
		double delta;
		delta = fd[1] * fd[1] - 4 * (fd[0] * fd[2]);
		

		if (delta >= 0)
		{
			x1 = double((-1) * double(fd[1]) + double(sqrt(delta))) / double((2) * double(fd[2]));
			x2 = double((-1) * double(fd[1]) - double(sqrt(delta))) / double((2) * double(fd[2]));

			double temp;
			if (x1 > x2) { temp = x1;x1 = x2;x2 = temp; }


			label2->Text = System::Convert::ToString(x1);
			label6->Text = System::Convert::ToString(x2);
			label25->Text = System::Convert::ToString(x1);
			label26->Text = System::Convert::ToString(x2);

			bool lim1, lim2;
			// true +inf false -inf

			if (f[3] < 0) {
				lim1 = true;lim2 = false;
				label30->Text = "+inf";
				label33->Text = "-inf";

			}
			else {
				lim1 = false;lim2 = true;
				label30->Text = "-inf";
				label33->Text = "+inf";
			}
			
			double fx1, fx2;
			fx1 = f[3] * x1 * x1 * x1 + f[2] * x1 * x1 + f[1] * x1 + f[0];
			fx2 = f[3] * x2 * x2 * x2 + f[2] * x2 * x2 + f[1] * x2 + f[0];
			label28->Text = "0";
			label29->Text = "0";
			std::string halmaz1 = " ", halmaz2 = " ", halmaz3 = " ";
			bool Van1 = false, Van2 = false, Van3 = false;
			if (lim1 == true && fug(x1, f) < 0)Van1 = true;
			if (lim1 == false && fug(x1, f) > 0)Van1 = true;
			if (fug(x1, f) < 0 && fug(x2, f) > 0)Van2 = true;
			if (fug(x1, f) > 0 && fug(x2, f) < 0)Van2 = true;
			if (fug(x2, f) > 0 && lim2 == false)Van3 = true;
			if (fug(x2, f) < 0 && lim2 == true)Van3 = true;


			if (Van1) {
				double  h1b = x1, h1a = h1b + 1;
				szukites(h1a, h1b, f);

				halmaz1 = "(" + std::to_string(h1a) + ',' + std::to_string(h1b) + ")";
			}


			if (Van2) {
				double  h2b = x2, h2a = h2b + 1;
				szukites(h2a, h2b, f);
				halmaz2 = "(" + std::to_string(h2a) + "," + std::to_string(h2b) + ")";
			}

			if (Van3) {
				double  h3a = x2, h3b;
				double szuk = 1;
				while (szuk > 0.000001) {
					while (1 == 1) {
						if (fug(h3a + szuk, f) > 0 && fug(h3a, f) < 0) { h3b = h3a + szuk;break; }
						if (fug(h3a + szuk, f) < 0 && fug(h3a, f) > 0) { h3b = h3a + szuk;break; }
						if (fug(h3a, f) == 0) { h3a = -1 * szuk;h3b = szuk;break; }
						h3a += szuk;
					}
					szuk = szuk / 10;
				}
				halmaz3 = "(" + std::to_string(h3a) + "," + std::to_string(h3b) + ")";
			}

			if (fug(x1, f) == 0)halmaz1 = std::to_string(int(x1));
			if (fug(x2, f) == 0)halmaz2 = std::to_string(int(x2));

			String^ str4 = gcnew String(halmaz1.data());
			label10->Text = str4;
			String^ str5 = gcnew String(halmaz2.data());
			label11->Text = str5;
			String^ str6 = gcnew String(halmaz3.data());
			label13->Text = str6;
			label31->Text = System::Convert::ToString(fug(x1,f));
			label32->Text = System::Convert::ToString(fug(x2,f));
		}
		else label10->Text ="(-inf;+inf)";
		
		
	};
	
};
}
// 3x2+2x+3
//x3+x2+3x
