#pragma once
#include<math.h>
#include <cstdlib>
namespace Project2 {

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
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;







	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox10;



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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(282, 105);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(119, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Показать условие";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Задание 1 5 вариант", L"Задание 1 7 вариант",
					L"Задание 2 5 вариант", L"Задание 2 7 вараинт "
			});
			this->comboBox1->Location = System::Drawing::Point(282, 60);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(151, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Условие задачи ( выберите задание)";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 60);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 164);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 521);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(27, 250);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(27, 290);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(160, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(27, 332);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(160, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(27, 375);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(160, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(27, 413);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(160, 20);
			this->textBox6->TabIndex = 9;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(27, 455);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(160, 20);
			this->textBox7->TabIndex = 10;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(279, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Место для ответа 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(279, 290);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Место для ответа 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(279, 329);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Место для ответа 3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(193, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"A1";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(193, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"B1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(193, 335);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"A2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(193, 375);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"B2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(193, 416);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"A3";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(193, 458);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"B3";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(956, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(23, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(176, 24);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Лаб 18. Задание 1.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(568, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(176, 24);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Лаб 18. Задание 2.";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(572, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(535, 62);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(569, 38);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(316, 52);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Вычислить значение указанной функции  в зависимости от\r\n выбранной функции ϕ(x), "
				L"\r\nаргумент которой определяется из поставленного условия. \r\nВозможные значения ф"
				L"ункции ϕ(x): 2x, x2, х/3 ";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2x", L"x2", L"x/3" });
			this->comboBox2->Location = System::Drawing::Point(956, 188);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(151, 21);
			this->comboBox2->TabIndex = 25;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(572, 189);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(160, 20);
			this->textBox8->TabIndex = 26;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(741, 191);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(12, 13);
			this->label14->TabIndex = 27;
			this->label14->Text = L"x";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(953, 232);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(106, 13);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Место для ответа 1";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(741, 227);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 13);
			this->label23->TabIndex = 37;
			this->label23->Text = L"a";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(572, 225);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(160, 20);
			this->textBox9->TabIndex = 36;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(741, 264);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(13, 13);
			this->label24->TabIndex = 39;
			this->label24->Text = L"b";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(572, 262);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(160, 20);
			this->textBox10->TabIndex = 38;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1151, 685);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа № 18";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
	bool button_is_clicked = false;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0)
			firstprogram();
		else if (comboBox1->SelectedIndex == 1) secondprogram();
		else if (comboBox1->SelectedIndex == 2) thirdprogram();
		else if (comboBox1->SelectedIndex == 3) thepastprogram();
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	switch (comboBox1->SelectedIndex)
	{
	case 0:
		textBox1->Text = "С клавиатуры вводятся катеты трёх прямоугольных треугольников A1, B1, A2, B2 и A3, B3.\n Определить, какой из треу¬гольников имеет наибольшую гипотенузу. \nВедите ниже значения для \nA1,B1,A2,B2,A3,B3.  После ввода переменных нажмите кнопку вычислить";
		break;
	case 1:
		textBox1->Text = "С клавиатуры вводятся стороны двух прямоугольников A, B и X, Y. Определить, равны ли площади прямоугольников или какой из них меньше. \n Введите ниже значения для A=A1, B=B1, X= A2, Y= B2.  После ввода переменных нажмите кнопку вычислить";
		break;
	case 2:
		textBox1->Text = "Вводится знак пунктуации. Написать программу, которая выводит словесно соответствующее этому знаку название. \n Введите ниже значения для A1, где A1 это ваш знак.   После ввода переменных нажмите кнопку вычислить";
		break;
	case 3:
		textBox1->Text = "С клавиатуры вводится оценка, полученная студентом – Ос. Выдать сообщение ‘Отлично’, если Ос=5, ‘Хорошо’ – Ос=4, ‘Удовлет.’ – Ос=3 или ‘Плохо’–для Ос=2 или Ос=1. \n Введите ниже значения для A1, где A1 это ваша оценка.   После ввода переменных нажмите кнопку вычислить";
		break;
	}
}
	   void firstprogram() {
		   double A1, B1, A2, B2, A3, B3;
		   double C1, C2, C3;
		   A1 = Convert::ToDouble(textBox2->Text);
		   B1 = Convert::ToDouble(textBox3->Text);
		   A2 = Convert::ToDouble(textBox4->Text);
		   B2 = Convert::ToDouble(textBox5->Text);
		   A3 = Convert::ToDouble(textBox6->Text);
		   B3 = Convert::ToDouble(textBox7->Text);

		   C1 = sqrt(pow(A1, 2) + pow(B1, 2));
		   C2 = sqrt(pow(A2, 2) + pow(B2, 2));
		   C3 = sqrt(pow(A3, 2) + pow(B3, 2));
		   label2->Text = Convert::ToString(C1);
		   label3->Text = Convert::ToString(C2);
		   label4->Text = Convert::ToString(C3);
	   }
	   void secondprogram() {
		   double A, B, X, Y;
		   double S1, S2;
		   A = Convert::ToDouble(textBox2->Text);
		   B = Convert::ToDouble(textBox3->Text);
		   X = Convert::ToDouble(textBox4->Text);
		   Y = Convert::ToDouble(textBox5->Text);
		   S1 = A * B;
		   S2 = X * Y;
		   if (S1 == S2) label2->Text= "Sab=Sxy = " + Convert::ToString(S1);
		   else if (S1>S2) label2->Text = "Sab>Sxy Sab= " + Convert::ToString(S1);
		   else if (S2>S1) label2->Text = "Sab<Sxy Sxy= " + Convert::ToString(S2);
	   }
	   void thirdprogram() {
		   char letter;
		   letter = Convert::ToChar(textBox2->Text);
		   switch (letter) {
		   case '?':
			   label2->Text = "Вопросмтельный знак ";
			   break;
		   case '.':
			   label2->Text = "Точка ";
			   break;
		   case ',':
			   label2->Text = "Запятая ";
			   break;
		   case ':':
			   label2->Text = "Двоеточие ";
			   break;
		   case '!':
			   label2->Text = "Восклицательный знак ";
			   break;
		   case ';':
			   label2->Text = "Точка с запятой ";
			   break;
		   case '-':
			   label2->Text = "Тире ";
			   break;
		   case '"':
			   label2->Text = "Ковычки ";
			   break;
		   default:
			   break;
		   }
	   }
	   void thepastprogram() {
		   char Oc;
		   Oc = Convert::ToChar(textBox2->Text);
		   switch (Oc) {
		   case '5': 
			   label2->Text = "Отлично ";
			   break;
		   case '4':
			   label2->Text = "Хорошо ";
			   break;
		   case '3':
			   label2->Text = "Удовлет. ";
			   break;
		   case '2':
			   label2->Text = "Плохо ";
			   break;
		   case '1':
			   label2->Text = "Очень плохо ";
			   break;
		   default:
			   break;
		   }
	   }
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, x,b,resualt;
	a = Convert::ToDouble(textBox9->Text);
	x = Convert::ToDouble(textBox8->Text);
	b = Convert::ToDouble(textBox10->Text);
	if (comboBox2->SelectedIndex == 0) {
		resualt = a * (2 * x) - log(x + 2.5) + b * (exp(x) - exp(-x));
		label15->Text = Convert::ToString(resualt);
	}
	else if (comboBox2->SelectedIndex == 1) {
		resualt = a * (pow(x,2)) - log(x + 2.5) + b * (exp(x) - exp(-x));
		label15->Text = Convert::ToString(resualt);
	}
	else if (comboBox2->SelectedIndex == 2) {
		resualt = a * (x/3) - log(x + 2.5) + b * (exp(x) - exp(-x));
		label15->Text = Convert::ToString(resualt);
	}
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
