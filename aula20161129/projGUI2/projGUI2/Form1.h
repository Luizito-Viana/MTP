#include<cmath>

#pragma once

namespace projGUI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bttsev;
	private: System::Windows::Forms::Button^  btteig;
	private: System::Windows::Forms::Button^  bttnin;
	private: System::Windows::Forms::Button^  bttadd;
	private: System::Windows::Forms::Button^  bttce;
	private: System::Windows::Forms::Button^  bttfour;
	private: System::Windows::Forms::Button^  bttfive;
	private: System::Windows::Forms::Button^  bttsix;
	private: System::Windows::Forms::Button^  bttsub;
	private: System::Windows::Forms::Button^  bttfat;
	protected: 

	protected: 









	private: System::Windows::Forms::Button^  bttone;
	private: System::Windows::Forms::Button^  btttwo;
	private: System::Windows::Forms::Button^  btttrh;
	private: System::Windows::Forms::Button^  bttmult;
	private: System::Windows::Forms::Button^  bttpow;





	private: System::Windows::Forms::Button^  bttzero;
	private: System::Windows::Forms::Button^  bttponto;
	private: System::Windows::Forms::Button^  btttroca;
	private: System::Windows::Forms::Button^  bttdiv;
	private: System::Windows::Forms::Button^  bttsqrt;






	private: System::Windows::Forms::Button^  bttigual;

	private: System::Windows::Forms::Label^  lbldisplay;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->bttsev = (gcnew System::Windows::Forms::Button());
			this->btteig = (gcnew System::Windows::Forms::Button());
			this->bttnin = (gcnew System::Windows::Forms::Button());
			this->bttadd = (gcnew System::Windows::Forms::Button());
			this->bttce = (gcnew System::Windows::Forms::Button());
			this->bttfour = (gcnew System::Windows::Forms::Button());
			this->bttfive = (gcnew System::Windows::Forms::Button());
			this->bttsix = (gcnew System::Windows::Forms::Button());
			this->bttsub = (gcnew System::Windows::Forms::Button());
			this->bttfat = (gcnew System::Windows::Forms::Button());
			this->bttone = (gcnew System::Windows::Forms::Button());
			this->btttwo = (gcnew System::Windows::Forms::Button());
			this->btttrh = (gcnew System::Windows::Forms::Button());
			this->bttmult = (gcnew System::Windows::Forms::Button());
			this->bttpow = (gcnew System::Windows::Forms::Button());
			this->bttzero = (gcnew System::Windows::Forms::Button());
			this->bttponto = (gcnew System::Windows::Forms::Button());
			this->btttroca = (gcnew System::Windows::Forms::Button());
			this->bttdiv = (gcnew System::Windows::Forms::Button());
			this->bttsqrt = (gcnew System::Windows::Forms::Button());
			this->bttigual = (gcnew System::Windows::Forms::Button());
			this->lbldisplay = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bttsev
			// 
			this->bttsev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttsev->Location = System::Drawing::Point(13, 63);
			this->bttsev->Name = L"bttsev";
			this->bttsev->Size = System::Drawing::Size(48, 45);
			this->bttsev->TabIndex = 0;
			this->bttsev->Text = L"7";
			this->bttsev->UseVisualStyleBackColor = true;
			this->bttsev->Click += gcnew System::EventHandler(this, &Form1::bttsev_Click);
			// 
			// btteig
			// 
			this->btteig->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btteig->Location = System::Drawing::Point(67, 63);
			this->btteig->Name = L"btteig";
			this->btteig->Size = System::Drawing::Size(48, 45);
			this->btteig->TabIndex = 1;
			this->btteig->Text = L"8";
			this->btteig->UseVisualStyleBackColor = true;
			this->btteig->Click += gcnew System::EventHandler(this, &Form1::btteig_Click);
			// 
			// bttnin
			// 
			this->bttnin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttnin->Location = System::Drawing::Point(121, 63);
			this->bttnin->Name = L"bttnin";
			this->bttnin->Size = System::Drawing::Size(48, 45);
			this->bttnin->TabIndex = 2;
			this->bttnin->Text = L"9";
			this->bttnin->UseVisualStyleBackColor = true;
			this->bttnin->Click += gcnew System::EventHandler(this, &Form1::bttnin_Click);
			// 
			// bttadd
			// 
			this->bttadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttadd->Location = System::Drawing::Point(175, 63);
			this->bttadd->Name = L"bttadd";
			this->bttadd->Size = System::Drawing::Size(48, 45);
			this->bttadd->TabIndex = 3;
			this->bttadd->Text = L"+";
			this->bttadd->UseVisualStyleBackColor = true;
			this->bttadd->Click += gcnew System::EventHandler(this, &Form1::bttadd_Click);
			// 
			// bttce
			// 
			this->bttce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttce->Location = System::Drawing::Point(229, 63);
			this->bttce->Name = L"bttce";
			this->bttce->Size = System::Drawing::Size(48, 45);
			this->bttce->TabIndex = 4;
			this->bttce->Text = L"CE";
			this->bttce->UseVisualStyleBackColor = true;
			this->bttce->Click += gcnew System::EventHandler(this, &Form1::bttce_Click);
			// 
			// bttfour
			// 
			this->bttfour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttfour->Location = System::Drawing::Point(12, 114);
			this->bttfour->Name = L"bttfour";
			this->bttfour->Size = System::Drawing::Size(48, 45);
			this->bttfour->TabIndex = 5;
			this->bttfour->Text = L"4";
			this->bttfour->UseVisualStyleBackColor = true;
			this->bttfour->Click += gcnew System::EventHandler(this, &Form1::bttfour_Click);
			// 
			// bttfive
			// 
			this->bttfive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttfive->Location = System::Drawing::Point(67, 114);
			this->bttfive->Name = L"bttfive";
			this->bttfive->Size = System::Drawing::Size(48, 45);
			this->bttfive->TabIndex = 6;
			this->bttfive->Text = L"5";
			this->bttfive->UseVisualStyleBackColor = true;
			this->bttfive->Click += gcnew System::EventHandler(this, &Form1::bttfive_Click);
			// 
			// bttsix
			// 
			this->bttsix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttsix->Location = System::Drawing::Point(121, 114);
			this->bttsix->Name = L"bttsix";
			this->bttsix->Size = System::Drawing::Size(48, 45);
			this->bttsix->TabIndex = 7;
			this->bttsix->Text = L"6";
			this->bttsix->UseVisualStyleBackColor = true;
			this->bttsix->Click += gcnew System::EventHandler(this, &Form1::bttsix_Click);
			// 
			// bttsub
			// 
			this->bttsub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttsub->Location = System::Drawing::Point(175, 114);
			this->bttsub->Name = L"bttsub";
			this->bttsub->Size = System::Drawing::Size(48, 45);
			this->bttsub->TabIndex = 8;
			this->bttsub->Text = L"-";
			this->bttsub->UseVisualStyleBackColor = true;
			this->bttsub->Click += gcnew System::EventHandler(this, &Form1::bttsub_Click);
			// 
			// bttfat
			// 
			this->bttfat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttfat->Location = System::Drawing::Point(229, 114);
			this->bttfat->Name = L"bttfat";
			this->bttfat->Size = System::Drawing::Size(48, 45);
			this->bttfat->TabIndex = 9;
			this->bttfat->Text = L"N!";
			this->bttfat->UseVisualStyleBackColor = true;
			this->bttfat->Click += gcnew System::EventHandler(this, &Form1::bttfat_Click);
			// 
			// bttone
			// 
			this->bttone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttone->Location = System::Drawing::Point(13, 165);
			this->bttone->Name = L"bttone";
			this->bttone->Size = System::Drawing::Size(48, 45);
			this->bttone->TabIndex = 10;
			this->bttone->Text = L"1";
			this->bttone->UseVisualStyleBackColor = true;
			this->bttone->Click += gcnew System::EventHandler(this, &Form1::bttone_Click);
			// 
			// btttwo
			// 
			this->btttwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btttwo->Location = System::Drawing::Point(66, 165);
			this->btttwo->Name = L"btttwo";
			this->btttwo->Size = System::Drawing::Size(48, 45);
			this->btttwo->TabIndex = 11;
			this->btttwo->Text = L"2";
			this->btttwo->UseVisualStyleBackColor = true;
			this->btttwo->Click += gcnew System::EventHandler(this, &Form1::btttwo_Click);
			// 
			// btttrh
			// 
			this->btttrh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btttrh->Location = System::Drawing::Point(121, 165);
			this->btttrh->Name = L"btttrh";
			this->btttrh->Size = System::Drawing::Size(48, 45);
			this->btttrh->TabIndex = 12;
			this->btttrh->Text = L"3";
			this->btttrh->UseVisualStyleBackColor = true;
			this->btttrh->Click += gcnew System::EventHandler(this, &Form1::btttrh_Click);
			// 
			// bttmult
			// 
			this->bttmult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttmult->Location = System::Drawing::Point(175, 165);
			this->bttmult->Name = L"bttmult";
			this->bttmult->Size = System::Drawing::Size(48, 45);
			this->bttmult->TabIndex = 13;
			this->bttmult->Text = L"×";
			this->bttmult->UseVisualStyleBackColor = true;
			this->bttmult->Click += gcnew System::EventHandler(this, &Form1::bttmult_Click);
			// 
			// bttpow
			// 
			this->bttpow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttpow->Location = System::Drawing::Point(229, 165);
			this->bttpow->Name = L"bttpow";
			this->bttpow->Size = System::Drawing::Size(48, 45);
			this->bttpow->TabIndex = 14;
			this->bttpow->Text = L"X^Y";
			this->bttpow->UseVisualStyleBackColor = true;
			this->bttpow->Click += gcnew System::EventHandler(this, &Form1::bttpow_Click);
			// 
			// bttzero
			// 
			this->bttzero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttzero->Location = System::Drawing::Point(12, 216);
			this->bttzero->Name = L"bttzero";
			this->bttzero->Size = System::Drawing::Size(48, 45);
			this->bttzero->TabIndex = 15;
			this->bttzero->Text = L"0";
			this->bttzero->UseVisualStyleBackColor = true;
			this->bttzero->Click += gcnew System::EventHandler(this, &Form1::bttzero_Click);
			// 
			// bttponto
			// 
			this->bttponto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttponto->Location = System::Drawing::Point(67, 216);
			this->bttponto->Name = L"bttponto";
			this->bttponto->Size = System::Drawing::Size(48, 45);
			this->bttponto->TabIndex = 16;
			this->bttponto->Text = L",";
			this->bttponto->UseVisualStyleBackColor = true;
			this->bttponto->Click += gcnew System::EventHandler(this, &Form1::bttponto_Click);
			// 
			// btttroca
			// 
			this->btttroca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btttroca->Location = System::Drawing::Point(121, 216);
			this->btttroca->Name = L"btttroca";
			this->btttroca->Size = System::Drawing::Size(48, 45);
			this->btttroca->TabIndex = 17;
			this->btttroca->Text = L"±";
			this->btttroca->UseVisualStyleBackColor = true;
			this->btttroca->Click += gcnew System::EventHandler(this, &Form1::btttroca_Click);
			// 
			// bttdiv
			// 
			this->bttdiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttdiv->Location = System::Drawing::Point(175, 216);
			this->bttdiv->Name = L"bttdiv";
			this->bttdiv->Size = System::Drawing::Size(48, 45);
			this->bttdiv->TabIndex = 18;
			this->bttdiv->Text = L"÷";
			this->bttdiv->UseVisualStyleBackColor = true;
			this->bttdiv->Click += gcnew System::EventHandler(this, &Form1::bttdiv_Click);
			// 
			// bttsqrt
			// 
			this->bttsqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttsqrt->Location = System::Drawing::Point(229, 216);
			this->bttsqrt->Name = L"bttsqrt";
			this->bttsqrt->Size = System::Drawing::Size(48, 45);
			this->bttsqrt->TabIndex = 19;
			this->bttsqrt->Text = L"√¯ ";
			this->bttsqrt->UseVisualStyleBackColor = true;
			this->bttsqrt->Click += gcnew System::EventHandler(this, &Form1::bttsqrt_Click);
			// 
			// bttigual
			// 
			this->bttigual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bttigual->Location = System::Drawing::Point(67, 267);
			this->bttigual->Name = L"bttigual";
			this->bttigual->Size = System::Drawing::Size(156, 45);
			this->bttigual->TabIndex = 20;
			this->bttigual->Text = L"=";
			this->bttigual->UseVisualStyleBackColor = true;
			this->bttigual->Click += gcnew System::EventHandler(this, &Form1::bttigual_Click);
			// 
			// lbldisplay
			// 
			this->lbldisplay->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbldisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbldisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbldisplay->Location = System::Drawing::Point(13, 9);
			this->lbldisplay->Name = L"lbldisplay";
			this->lbldisplay->Size = System::Drawing::Size(264, 40);
			this->lbldisplay->TabIndex = 21;
			this->lbldisplay->Text = L"0";
			this->lbldisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(289, 321);
			this->Controls->Add(this->lbldisplay);
			this->Controls->Add(this->bttigual);
			this->Controls->Add(this->bttsqrt);
			this->Controls->Add(this->bttdiv);
			this->Controls->Add(this->btttroca);
			this->Controls->Add(this->bttponto);
			this->Controls->Add(this->bttzero);
			this->Controls->Add(this->bttpow);
			this->Controls->Add(this->bttmult);
			this->Controls->Add(this->btttrh);
			this->Controls->Add(this->btttwo);
			this->Controls->Add(this->bttone);
			this->Controls->Add(this->bttfat);
			this->Controls->Add(this->bttsub);
			this->Controls->Add(this->bttsix);
			this->Controls->Add(this->bttfive);
			this->Controls->Add(this->bttfour);
			this->Controls->Add(this->bttce);
			this->Controls->Add(this->bttadd);
			this->Controls->Add(this->bttnin);
			this->Controls->Add(this->btteig);
			this->Controls->Add(this->bttsev);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		#define MAXDIGITOS 21
		bool flagponto;
		double memoria;
		char operacao;
		void liberadisplay()
		{
			lbldisplay->Text = "0";
			flagponto = false;
			flagresultado = false;
		}
		bool flagresultado;
		double fat(double numero)
		{
			if(numero == 0)
				return 1;
			else
				return numero*fat(numero-1);
		}

#pragma endregion
	private: System::Void bttzero_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(lbldisplay->Text->Length < MAXDIGITOS) {
					if(lbldisplay->Text != "0")
						 lbldisplay->Text = lbldisplay->Text + "0";
					if(flagresultado)
					{
						lbldisplay->Text = "1";
						flagresultado = false;
					}
				}
			 }
	private: System::Void bttone_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "1";
					else
					{
						lbldisplay->Text = "1";
						flagresultado = false;
					}
				}
			}

	private: System::Void btttwo_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "2";
					else
					{
						lbldisplay->Text = "2";
						flagresultado = false;
					}
				}
				 
			 }
	private: System::Void bttce_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				lbldisplay->Text = "0";
				flagponto = false;
			 }
	private: System::Void bttponto_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				if(lbldisplay->Text->Length < MAXDIGITOS) {
					if(!flagponto)
					{
						lbldisplay->Text = lbldisplay->Text + ",";
						flagponto = true;
					}
				}
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				flagponto = false;
				flagresultado = false;
				memoria = 0,0;
				operacao = '\0';
			}
private: System::Void btttroca_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Versao 1
			 //double numero = System::Convert::ToDouble(lbldisplay->Text);
			 //lbldisplay->Text = System::Convert::ToString(numero*(-1));
			 //Versao 2
			 if(lbldisplay->Text->Substring(0,1) == "-")
				 lbldisplay->Text = lbldisplay->Text->Substring(1);
			 else
				 lbldisplay->Text = "-" + lbldisplay->Text;

		 }
private: System::Void bttsqrt_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 double numero = System::Convert::ToDouble(lbldisplay->Text);
			 lbldisplay->Text = System::Convert::ToString(sqrt(numero));
			 if(lbldisplay->Text->Length > MAXDIGITOS)
				lbldisplay->Text = lbldisplay->Text->Substring(0,MAXDIGITOS);
			 flagresultado = true;
		 }
private: System::Void bttadd_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '+';
			 liberadisplay();
		 }
private: System::Void bttigual_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 double numero = System::Convert::ToDouble(lbldisplay->Text);
			 switch(operacao)
			 {
				case '+': memoria += numero; break;
				case '-': memoria -= numero; break;
				case '*': memoria *= numero; break;
				case '/': memoria /= numero; break;
				case '^': memoria = Math::Pow(memoria, numero); break;
			 }
			 if(memoria > Math::Pow(10,MAXDIGITOS)-1)
				 lbldisplay->Text = memoria.ToString("e");
			 else
				lbldisplay->Text = memoria.ToString();
				flagresultado = true;

		 }
private: System::Void bttsub_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '-';
			 liberadisplay();
		 }
private: System::Void bttmult_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '*';
			 liberadisplay();
		 }
private: System::Void bttdiv_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '/';
			 liberadisplay();
		 }
private: System::Void bttfat_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 double fatorial;
			 double numero = System::Convert::ToDouble(lbldisplay->Text);
			 fatorial = fat(numero);
			 lbldisplay->Text = System::Convert::ToString(fatorial);
			 if(lbldisplay->Text->Length > MAXDIGITOS)
				lbldisplay->Text = lbldisplay->Text->Substring(0,MAXDIGITOS);
			 flagresultado = true;
		 }
private: System::Void btttrh_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "3";
					else
					{
						lbldisplay->Text = "3";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttfour_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "4";
					else
					{
						lbldisplay->Text = "4";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttfive_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "5";
					else
					{
						lbldisplay->Text = "5";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttsix_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "6";
					else
					{
						lbldisplay->Text = "6";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttsev_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "7";
					else
					{
						lbldisplay->Text = "7";
						flagresultado = false;
					}
				}
		 }
private: System::Void btteig_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "8";
					else
					{
						lbldisplay->Text = "8";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttnin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(lbldisplay->Text->Length < MAXDIGITOS) 
				{
					if(lbldisplay->Text != "0" && !flagresultado)
						lbldisplay->Text = lbldisplay->Text + "9";
					else
					{
						lbldisplay->Text = "9";
						flagresultado = false;
					}
				}
		 }
private: System::Void bttpow_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 memoria = System::Convert::ToDouble(lbldisplay->Text);
			 operacao = '^';
			 liberadisplay();
		 }
};
}

