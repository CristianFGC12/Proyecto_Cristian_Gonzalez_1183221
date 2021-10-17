#pragma once
#include"Pila.h"
#include"Cola.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <cctype>
#include "Lista.h"



namespace ProyectoCristianGonzalez1183221 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button9;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Canción - Artista";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Playlist";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(278, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 33);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(275, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 47);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ordenar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 439);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Actual:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(92, 439);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"label5";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(275, 73);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 40);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Reproducir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(678, 227);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 52);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Pasar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(420, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Fila de Reproducción";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(268, 331);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 40);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Exportar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(739, 73);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(739, 110);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(675, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Artista";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(675, 76);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 17);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Canción";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(855, 76);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 47);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Ingresar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(782, 163);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 42);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Eliminar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(37, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 17);
			this->label9->TabIndex = 20;
			this->label9->Text = L"label9";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(423, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 17);
			this->label3->TabIndex = 21;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(275, 200);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(105, 21);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"Ascendente";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(275, 227);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(114, 21);
			this->checkBox2->TabIndex = 23;
			this->checkBox2->Text = L"Descendente";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(272, 180);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 17);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Canción";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(275, 255);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Artista";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(275, 276);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(105, 21);
			this->checkBox3->TabIndex = 26;
			this->checkBox3->Text = L"Ascendente";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(275, 304);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(106, 21);
			this->checkBox4->TabIndex = 27;
			this->checkBox4->Text = L"Descendete";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(268, 432);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(121, 23);
			this->button8->TabIndex = 28;
			this->button8->Text = L"Anterior";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(268, 403);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(121, 23);
			this->button9->TabIndex = 29;
			this->button9->Text = L"Aleatorio";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(979, 481);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	void csv_it()
	{
		ifstream infile("INGRESO.csv");
		string line = "";
		vector<string> datos_csv;

		while (getline(infile, line))
		{
			stringstream strstr(line);
			string word = "";
			while (getline(strstr,word,','))
			{
				datos_csv.push_back(word);
			}
		}
	}
	
#pragma endregion
	Pila* Playlist = new Pila();
	Pila* aux = new Pila();
	Pila* nod = new Pila();
	Cola* ListaReproduccion = new Cola();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ifstream infile("INGRESO.csv");
		string line = "";
		vector<string> datos_csv;

		while (getline(infile, line))
		{
			stringstream strstr(line);
			string word = "";
			while (getline(strstr, word, ','))
			{
				datos_csv.push_back(word);
			}
		}
		for (int i = 0; i < datos_csv.size(); i++)
		{
			bool autor = false;
			for (int j = 0; j < datos_csv.at(i).size(); j++)
			{
				if (datos_csv.at(i)[j] == '-')
				{
					autor = true;
				}
			}
			if (autor==true)
			{
				Playlist->Insertar(datos_csv.at(i));
				aux->Insertar(datos_csv.at(i));
			}
			else
			{
				Playlist->Insertar(datos_csv.at(i) + "-ninguno");
				aux->Insertar(datos_csv.at(i)+"-ninguno");
			}
			
		}
		label9->Text = "";
		while (aux->PilaVacia()==false)
		{
			string a = aux->Cima();
			String^ b = gcnew String(a.c_str());
			label9->Text += b + "\n";
			aux->Quitar();
		}
	
		
	}
		   Pila* auxiliar = new Pila();
		   Pila* Anterior = new Pila();
		   bool AscendeteCan;
		   bool DescendeteCan;
		   bool AscendeteArtis;
		   bool DescendenteArtis;
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	string c=Playlist->Quitar();
	Anterior->Insertar(c);
	String^ d = gcnew String(c.c_str());
	label5->Text = d;
	while (Playlist->PilaVacia()==false)
	{
		auxiliar->Insertar(Playlist->Quitar());
	}
	label9->Text = "";
	while (auxiliar->Tamano() != 0)
	{
		string a = auxiliar->Quitar();
		Playlist->Insertar(a);
		aux->Insertar(a);
	}
	while (aux->PilaVacia() == false)
	{
		string a = aux->Cima();
		String^ b = gcnew String(a.c_str());
		label9->Text += b + "\n";
		aux->Quitar();
	}
	if (Playlist->PilaVacia()==true)
	{
		label3->Text = "";
		while (ListaReproduccion->ColaVacia() == false)
		{
			Playlist->Insertar(ListaReproduccion->DesEnColar());
		}
		if (AscendeteCan == true)
		{
			Ascen(Playlist);
		}
		else if (DescendeteCan == true)
		{
			StackSort(Playlist);
		}
		else if (AscendeteArtis == true)
		{
			AscenArts(Playlist);
		}
		else if (DescendenteArtis == true)
		{
			DescebArts(Playlist);
		}
		while (Playlist->PilaVacia() == false)
		{
			auxiliar->Insertar(Playlist->Quitar());
		}
		label9->Text = "";
		while (auxiliar->Tamano() != 0)
		{
			string a = auxiliar->Quitar();
			Playlist->Insertar(a);
			aux->Insertar(a);
		}
		while (aux->PilaVacia() == false)
		{
			string a = aux->Cima();
			String^ b = gcnew String(a.c_str());
			label9->Text += b + "\n";
			aux->Quitar();
		}
	}
	
}

	   void MarshalString(String^ s, string& os) {
		   using namespace Runtime::InteropServices;
		   const char* chars =
			   (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }

	   void MarshalString(String^ s, wstring& os) {
		   using namespace Runtime::InteropServices;
		   const wchar_t* chars =
			   (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ parte1 = textBox4->Text;
	String^ parte2 = textBox5->Text;
	String^ Reglon = gcnew String(parte1 + "-" + parte2);
	string incluir = "";
	MarshalString(Reglon, incluir);
	ListaReproduccion->EnColar(incluir);
	label3->Text += Reglon + "\n";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label3->Text = "";
	while (ListaReproduccion->ColaVacia()==false)
	{
		Playlist->Insertar(ListaReproduccion->DesEnColar());
	}
	if (AscendeteCan == true)
	{
		Ascen(Playlist);
	}
	else if (DescendeteCan == true)
	{
		StackSort(Playlist);
	}
	else if(AscendeteArtis == true)
	{
		AscenArts(Playlist);
	}
	else if(DescendenteArtis == true)
	{
		DescebArts(Playlist);
	}
	while (Playlist->PilaVacia() == false)
	{
		auxiliar->Insertar(Playlist->Quitar());
	}
	label9->Text = "";
	while (auxiliar->Tamano() != 0)
	{
		string a = auxiliar->Quitar();
		Playlist->Insertar(a);
		aux->Insertar(a);
	}
	while (aux->PilaVacia() == false)
	{
		string a = aux->Cima();
		String^ b = gcnew String(a.c_str());
		label9->Text += b + "\n";
		aux->Quitar();
	}
}
	   Cola* auxiliar2 = new Cola();
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	ListaReproduccion->DesEnColar();
	while (ListaReproduccion->ColaVacia()==false)
	{
		auxiliar2->EnColar(ListaReproduccion->DesEnColar());
	}
	label3->Text = "";
	while (auxiliar2->ColaVacia()==false)
	{
		string a = auxiliar2->DesEnColar();
		String^ b = gcnew String(a.c_str());
		ListaReproduccion->EnColar(a);
		label3->Text += b + "\n";
	}

}
	   void StackSort(Pila* st)
	   {
		   Pila* tmpst=new Pila();
		   string e, e1;
		   while (st->PilaVacia()==false)
		   {
			   e = st->Quitar();
			   while (tmpst->PilaVacia()==false)
			   {
				   e1 = tmpst->Cima();
				   if (e1 > e)
				   {

					   e1 = tmpst->Quitar();
					   st->Insertar(e1); 
				   }
				   else
				   {
					   break;
				   }
			   }
			   tmpst->Insertar(e); 
		   }
		   while (tmpst->PilaVacia()==false)
		   {
			   e=tmpst->Quitar(); 
			   st->Insertar(e);
		   }

		   tmpst->Limpiar();
	   }

	   void Ascen(Pila* st)
	   {
		   Pila* tmpst = new Pila();
		   string e, e1;
		   while (st->PilaVacia() == false)
		   {
			   e = st->Quitar();
			   while (tmpst->PilaVacia() == false)
			   {
				   e1 = tmpst->Cima();
				   if (e1 < e)
				   {

					   e1 = tmpst->Quitar();
					   st->Insertar(e1);
				   }
				   else
				   {
					   break;
				   }
			   }
			   tmpst->Insertar(e);
		   }
		   while (tmpst->PilaVacia() == false)
		   {
			   e = tmpst->Quitar();
			   st->Insertar(e);
		   }

		   tmpst->Limpiar();
	   }
	  
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked == true)
	{
		StackSort(Playlist);
		AscendeteCan = false;
		DescendeteCan = true;
		DescendenteArtis = false;
		AscendeteArtis = false;
	}
	else if(checkBox1->Checked==true)
	{
		Ascen(Playlist);
		AscendeteCan = true;
		DescendeteCan = false;
		DescendenteArtis = false;
		AscendeteArtis = false;
	}
	else if(checkBox4->Checked == true)
	{
		DescebArts(Playlist);
		AscendeteCan = false;
		DescendeteCan = false;
		DescendenteArtis = true;
		AscendeteArtis = false;
	}
	else if (checkBox3->Checked == true)
	{
		AscenArts(Playlist);
		AscendeteCan = false;
		DescendeteCan = false;
		DescendenteArtis = false;
		AscendeteArtis = true;
	}
	label9->Text = "";
	while (Playlist->PilaVacia() == false)
	{
		auxiliar->Insertar(Playlist->Quitar());
	}
	while (auxiliar->Tamano() != 0)
	{
		string a = auxiliar->Quitar();
		Playlist->Insertar(a);
		aux->Insertar(a);
	}
	while (aux->PilaVacia() == false)
	{
		string a = aux->Cima();
		String^ b = gcnew String(a.c_str());
		label9->Text += b + "\n";
		aux->Quitar();
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Playlist->Insertar(Anterior->Quitar());
	string f = Anterior->Cima();
	String^g = gcnew String(f.c_str());
	label5->Text = g;
	label9->Text = "";
	while (Playlist->PilaVacia() == false)
	{
		auxiliar->Insertar(Playlist->Quitar());
	}
	while (auxiliar->Tamano() != 0)
	{
		string a = auxiliar->Quitar();
		Playlist->Insertar(a);
		aux->Insertar(a);
	}
	while (aux->PilaVacia() == false)
	{
		string a = aux->Cima();
		String^ b = gcnew String(a.c_str());
		label9->Text += b + "\n";
		aux->Quitar();
	}
}
int BuscarDivision (string a)
{
	int indice;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '-')
		{
			indice = i;
		}
	}
	return indice + 1;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Filter = "Text Documents | *.txt";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		String^ rutaArchivo = gcnew String(saveFileDialog1->FileName);
		string d = "";
		MarshalString(rutaArchivo,d);
		ofstream archivo; 
		archivo.open(d);
		String^ pasar = label9->Text;
		string gt = "";
		MarshalString(pasar, gt);
		archivo << gt;
		archivo.close();
		MessageBox::Show("Lugar del archivo guardado exitosamente"
			, "Operación exitosa"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Information);

	}
	else {
		MessageBox::Show("No se exportó el archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}

}
	   void DescebArts(Pila* st)
	   {
		   Pila* tmpst = new Pila();
		   string e, e1,se,se1;
		   while (st->PilaVacia() == false)
		   {
			   e = st->Quitar();
			   se = e.substr(BuscarDivision(e), e.size());
			   while (tmpst->PilaVacia() == false)
			   {
				   e1 = tmpst->Cima();
				   se1 = e1.substr(BuscarDivision(e1), e1.size());
				   if (se1 > se)
				   {

					   e1 = tmpst->Quitar();
					   st->Insertar(e1);
				   }
				   else
				   {
					   break;
				   }
			   }
			   tmpst->Insertar(e);
		   }
		   while (tmpst->PilaVacia() == false)
		   {
			   e = tmpst->Quitar();
			   st->Insertar(e);
		   }

		   tmpst->Limpiar();
	   }

	   void AscenArts(Pila* st)
	   {
		   Pila* tmpst = new Pila();
		   string e, e1, se, se1;
		   while (st->PilaVacia() == false)
		   {
			   e = st->Quitar();
			   se = e.substr(BuscarDivision(e), e.size());
			   if (se == "ninguno")
			   {
				   se = "AAAAAAA";
			   }
			   while (tmpst->PilaVacia() == false)
			   {
				   e1 = tmpst->Cima();
				   se1 = e1.substr(BuscarDivision(e1), e1.size());
				   if (se1 == "ninguno")
				   {
					   se1 = "AAAAAAA";
				   } 
				   if (se1 < se)
				   {

					   e1 = tmpst->Quitar();
					   st->Insertar(e1);
				   }
				   else
				   {
					   break;
				   }
			   }
			   tmpst->Insertar(e);
		   }
		   while (tmpst->PilaVacia() == false)
		   {
			   e = tmpst->Quitar();
			   st->Insertar(e);
		   }

		   tmpst->Limpiar();
	   }
	   Lista* Aleatorio = new Lista();
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));
	int aleatorio;
	while (Playlist->PilaVacia() == false)
	{
		Aleatorio->Add(Playlist->Quitar());
		aux->Quitar();
	}
	aleatorio = rand() % Aleatorio->Count();
	string mostrar = Aleatorio->GetItem(aleatorio);;
	Anterior->Insertar(mostrar);
	Aleatorio->RemoveAt(aleatorio);
	String^ Mostar = gcnew String(mostrar.c_str());
	label5->Text = Mostar;
	while (Aleatorio->Count() != 0)
	{
		string insertar = Aleatorio->GetItem(0);
		Aleatorio->RemoveAt(0);
		Playlist->Insertar(insertar);

	}
	label9->Text = "";
	while (Playlist->PilaVacia() == false)
	{
		auxiliar->Insertar(Playlist->Quitar());
	}
	while (auxiliar->Tamano() != 0)
	{
		string a = auxiliar->Quitar();
		Playlist->Insertar(a);
		aux->Insertar(a);
	}
	while (aux->PilaVacia() == false)
	{
		string a = aux->Cima();
		String^ b = gcnew String(a.c_str());
		label9->Text += b + "\n";
		aux->Quitar();
	}
}
};
}

