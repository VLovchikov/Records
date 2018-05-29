#pragma once
#include "Hash.h"
#include "Hash.cpp"
#include "Viewed.h"
#include "Viewed.cpp"
#include "Searching.h"
#include "Searching.cpp"
#include "Polinom.h"
#include "Polinom.cpp"
#include "MonomList.h"
#include "MonomList.cpp"
#include "Stack.h"
#include "Stack.cpp"
Hash h;
Viewed v;
Searching s;
std::string str1, str2, outstr;
int k;
Polinom p1, p2;

namespace TablesForm {

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
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Key;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Polinom;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Key1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Polinom1;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Key2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Polinom2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Key = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Polinom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Key1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Polinom1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Key2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Polinom2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Key, this->Polinom });
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(260, 208);
			this->dataGridView1->TabIndex = 0;
			// 
			// Key
			// 
			this->Key->HeaderText = L"Key";
			this->Key->Name = L"Key";
			this->Key->Width = 35;
			// 
			// Polinom
			// 
			this->Polinom->HeaderText = L"Polinom";
			this->Polinom->Name = L"Polinom";
			this->Polinom->Width = 170;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Key1, this->Polinom1 });
			this->dataGridView2->Location = System::Drawing::Point(279, 13);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(240, 398);
			this->dataGridView2->TabIndex = 1;
			// 
			// Key1
			// 
			this->Key1->HeaderText = L"Key";
			this->Key1->Name = L"Key1";
			this->Key1->Width = 35;
			// 
			// Polinom1
			// 
			this->Polinom1->HeaderText = L"Polinom";
			this->Polinom1->Name = L"Polinom1";
			this->Polinom1->Width = 160;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Key2, this->Polinom2 });
			this->dataGridView3->Location = System::Drawing::Point(13, 227);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(260, 184);
			this->dataGridView3->TabIndex = 2;
			// 
			// Key2
			// 
			this->Key2->HeaderText = L"Key";
			this->Key2->Name = L"Key2";
			this->Key2->Width = 35;
			// 
			// Polinom2
			// 
			this->Polinom2->HeaderText = L"Polinom";
			this->Polinom2->Name = L"Polinom2";
			this->Polinom2->Width = 160;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(11, 439);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Key:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(84, 19);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->Text = L"First Table";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(234, 417);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(96, 101);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add to:";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(96, 19);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Second Table";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 436);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(31, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(51, 467);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(177, 20);
			this->textBox2->TabIndex = 8;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(349, 417);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(170, 125);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Delete";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(67, 18);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 22);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(7, 101);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(88, 19);
			this->radioButton5->TabIndex = 3;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Third Table";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(7, 18);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(35, 22);
			this->textBox3->TabIndex = 2;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(7, 75);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(96, 19);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Second Table";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(7, 51);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(84, 19);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"First Table";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 528);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Operations";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(13, 590);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Addition";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(94, 590);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Substraction";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(177, 590);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(82, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Multiplication";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(265, 576);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 37);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Error output:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(11, 18);
			this->label3->MinimumSize = System::Drawing::Size(140, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 15);
			this->label3->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(51, 556);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(39, 20);
			this->textBox4->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 558);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 15);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Key:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(11, 469);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 15);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Pol:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 634);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton1->Checked == 1)
		{
			int l1 = textBox1->Text->Length;
			int l2 = textBox2->Text->Length;
			str1.resize(l1);
			str2.resize(l2);
			for (int i = 0; i < l1; i++)
			{
				str1[i]=textBox1->Text[i];
			}
			for (int i = 0; i < l2; i++)
			{
				str2[i]= textBox2->Text[i];
			}
			k = atoi(str1.c_str());
			h.add(k,str2);
			str1 = "";
			str2 = "";
			int i = 0;
			dataGridView1->Rows->Clear();
			while (i != h.getsize())
			{
				List a = h.getList(i);
				if (a.gethead() == NULL) i++;
				else
				{
					Node *t = a.gethead();
					while (t != NULL)
					{
						dataGridView1->Rows->Add(t->key, gcnew String(t->str.c_str())); 
						t = t->next;
					}
					i++;
				}
			}
		}
		else
		{
			int l1 = textBox1->Text->Length;
			int l2 = textBox2->Text->Length;
			str1.resize(l1);
			str2.resize(l2);
			for (int i = 0; i < l1; i++)
			{
				str1 [i]= textBox1->Text[i];
			}
			for (int i = 0; i < l2; i++)
			{
				str2 [i]= textBox2->Text[i];
			}
			k = atoi(str1.c_str());
			v.add(k, str2);
			str1 = "";
			str2 = "";
			dataGridView2->Rows->Clear();
			for (int i = 0; i < v.getcount(); i++)
			{
				Record *t = v.getRecord(i);
				dataGridView2->Rows->Add(t->key, gcnew String(t->str.c_str()));
			}
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int l = textBox3->Text->Length;
		string ss;
		ss.resize(l);
		for (int i = 0; i < l; i++)
		{
			ss[i]= textBox3->Text[i];
		}
		int k = atoi(ss.c_str());
		ss = "";
		if (radioButton3->Checked == 1)
		{
			dataGridView1->Rows->Clear();
			int i = 0;
			h.del(k);
			while (i != h.getsize())
			{
				List a = h.getList(i);
				if (a.gethead() == NULL) i++;
				else
				{
					Node *t = a.gethead();
					while (t != NULL)
					{
						dataGridView1->Rows->Add(t->key, gcnew String(t->str.c_str()));
						t = t->next;
					}
					i++;
				}
			}
		}
		if (radioButton4->Checked == 1)
		{
			dataGridView2->Rows->Clear();
			int l = textBox3->Text->Length;
			string ss;
			ss.resize(l);
			for (int i = 0; i < l; i++)
			{
				ss [i]= textBox3->Text[i];
			}
			int k = atoi(ss.c_str());
			ss = "";
			v.delRec(k);
			for (int i = 0; i < v.getcount(); i++)
			{
				Record *t = v.getRecord(i);
				dataGridView2->Rows->Add(t->key, gcnew String(t->str.c_str()));
			}
		}
		if (radioButton5->Checked == 1)
		{
			s.cleanst();
			dataGridView3->Rows->Clear();
			int l = textBox3->Text->Length;
			string ss;
			ss.resize(l);
			for (int i = 0; i < l; i++)
			{
				ss[i] = textBox3->Text[i];
			}
			int k = atoi(ss.c_str());
			ss = "";
			s.del(k);
			s.fillst(s.geth());
			while (!s.stIsEmpty())
			{
				Tree *t = s.popfromst();
				dataGridView3->Rows->Add(t->key, gcnew String(t->str.c_str()));
			}
		}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView3->Rows->Clear();
	int l = textBox4->Text->Length;
	string ss;
	ss.resize(l);
	for (int i = 0; i < l; i++)
	{
		ss[i] = textBox4->Text[i];
	}
	int k = atoi(ss.c_str());
	ss = "";
	int l1=dataGridView1->CurrentRow->Index;
	String^ s1=dataGridView1->Rows[l1]->Cells[1]->Value->ToString();
	int l2 = dataGridView1->CurrentRow->Index;
	String^ s2 = dataGridView2->Rows[l2]->Cells[1]->Value->ToString();
	l1 = s1->Length;
	l2 = s2->Length;
	str1.resize(l1);
	str2.resize(l2);
	for (int i = 0; i < l1; i++)
	{
		str1[i] = s1[i];
	}
	for (int i = 0; i < l2; i++)
	{
		str2[i] = s2[i];
	}
	p1.add(str1);
	p2.add(str2);
	p1 + p2;
	outstr = p1.ReverseConvert();
	s.insert(k, outstr);
	s.fillst(s.geth());
	while (!s.stIsEmpty())
	{
		Tree *t = s.popfromst();
		dataGridView3->Rows->Add(t->key, gcnew String(t->str.c_str()));
	}
	str1 = "";
	str2 = "";
	k = 0;
	p1.a.clean();
	p2.a.clean();
	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView3->Rows->Clear();
	int l = textBox4->Text->Length;
	string ss;
	ss.resize(l);
	for (int i = 0; i < l; i++)
	{
		ss[i] = textBox4->Text[i];
	}
	int k = atoi(ss.c_str());
	ss = "";
	int l1 = dataGridView1->CurrentRow->Index;
	String^ s1 = dataGridView1->Rows[l1]->Cells[1]->Value->ToString();
	int l2 = dataGridView1->CurrentRow->Index;
	String^ s2 = dataGridView2->Rows[l2]->Cells[1]->Value->ToString();
	l1 = s1->Length;
	l2 = s2->Length;
	str1.resize(l1);
	str2.resize(l2);
	for (int i = 0; i < l1; i++)
	{
		str1[i] = s1[i];
	}
	for (int i = 0; i < l2; i++)
	{
		str2[i] = s2[i];
	}
	p1.add(str1);
	p2.add(str2);
	p1 - p2;
	outstr = p1.ReverseConvert();
	s.insert(k, outstr);
	s.fillst(s.geth());
	while (!s.stIsEmpty())
	{
		Tree *t = s.popfromst();
		dataGridView3->Rows->Add(t->key, gcnew String(t->str.c_str()));
	}
	str1 = "";
	str2 = "";
	k = 0;
	p1.a.clean();
	p2.a.clean();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView3->Rows->Clear();
	int l = textBox4->Text->Length;
	string ss;
	ss.resize(l);
	for (int i = 0; i < l; i++)
	{
		ss[i] = textBox4->Text[i];
	}
	int k = atoi(ss.c_str());
	ss = "";
	int l1 = dataGridView1->CurrentRow->Index;
	String^ s1 = dataGridView1->Rows[l1]->Cells[1]->Value->ToString();
	int l2 = dataGridView1->CurrentRow->Index;
	String^ s2 = dataGridView2->Rows[l2]->Cells[1]->Value->ToString();
	l1 = s1->Length;
	l2 = s2->Length;
	str1.resize(l1);
	str2.resize(l2);
	for (int i = 0; i < l1; i++)
	{
		str1[i] = s1[i];
	}
	for (int i = 0; i < l2; i++)
	{
		str2[i] = s2[i];
	}
	p1.add(str1);
	p2.add(str2);
	p1 * p2;
	outstr = p1.ReverseConvert();
	s.insert(k, outstr);
	s.fillst(s.geth());
	while (!s.stIsEmpty())
	{
		Tree *t = s.popfromst();
		dataGridView3->Rows->Add(t->key, gcnew String(t->str.c_str()));
	}
	str1 = "";
	str2 = "";
	k = 0;
	p1.a.clean();
	p2.a.clean();
}
};
}
