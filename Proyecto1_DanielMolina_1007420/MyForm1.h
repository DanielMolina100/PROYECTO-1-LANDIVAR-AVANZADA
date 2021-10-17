#pragma once
#include "List.h"
#include "Canciones.h"
#include "Orden.h"
namespace Proyecto1DanielMolina1007420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->richTextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(48, 136);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(394, 351);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->richTextBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(551, 136);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(394, 351);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->button1->Location = System::Drawing::Point(48, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Archivo";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(562, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Views";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(210, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 46);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PLAYLIST";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(126, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(78, 55);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(29, 500);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(310, 46);
			this->label2->TabIndex = 7;
			this->label2->Text = L"REPRODUCIR";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->button3->Location = System::Drawing::Point(352, 503);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 43);
			this->button3->TabIndex = 8;
			this->button3->Text = L"▷";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(827, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 36);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Canción";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(695, 95);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 36);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Artista";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->button6->Location = System::Drawing::Point(562, 21);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(233, 33);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Instrucciones";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Font = (gcnew System::Drawing::Font(L"Cooper Black", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->button7->Location = System::Drawing::Point(805, 503);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 33);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Export";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1015, 564);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		List^ Lista = gcnew List();
		Orden^ ord = gcnew Orden();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Visible = false;
		richTextBox2->Visible = false;

		try {

			OpenFileDialog dialogoLectura;
			if (dialogoLectura.ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				StreamReader^ reader = gcnew StreamReader(dialogoLectura.FileName);
				while (reader->Peek() >= 0)
				{
					String^ line = reader->ReadLine();
					for (int i = 0; i < line->Split(',')->Length; i = i + 3)
					{
						String^ Artista = line->Split(',')[i];
						Artista = Artista->Trim();
						String^ Nombre_cancion = (line->Split(',')[i + 1]);
						Nombre_cancion = Nombre_cancion->Trim();
						String^ Visualizaciones = (line->Split(',')[i + 2]);
						Visualizaciones = Visualizaciones->Trim();
						int view = int::Parse(Visualizaciones);
						Lista->Insert(Artista, Nombre_cancion, view);
					}
				}
			}
		}
		catch (...) {

		}
		MessageBox::Show("El archivo fue cargado exitosamente");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Ordenado Exitosamente");
		richTextBox1->Text = "ARTISTA" + "\t" + "           CANCIONES" + "\t" + "       VIEWS" + "\n" + Lista->Print();

		ord->BubbleSort(Lista);

		String^ lista = Lista->Print();
		richTextBox2->Text = "ARTISTA" + "\t" + "           CANCIONES" + "\t" + "        VIEWS" + "\n" + lista;
		richTextBox1->Visible = true;
		richTextBox2->Visible = true;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Reproducir las canciones de la playlist e ir sacando del mismo
	MessageBox::Show("Canción reproducida");
	richTextBox1->Text = "ARTISTA" + "\t" + "           CANCIONES" + "\t" + "       VIEWS" + "\n" + Lista->Print();

	Lista->DeleteIndex(Lista);

	String^ lista = Lista->Print();
	richTextBox2->Text = "ARTISTA" + "\t" + "           CANCIONES" + "\t" + "        VIEWS" + "\n" + lista;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;

	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Playlist exportada al archivo");
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("1. Generar archivo que esta en mi carpeta de proyecto es un TXT No pude generar csv en excel");
	MessageBox::Show("2. Despues de generar archivo, elegir ordenamiento ya sea por visitas");
	MessageBox::Show("3. Boton de reproducir canciones para correr cancion");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ordenado Exitosamente");
	richTextBox1->Text = "ARTISTA" + "\t" + "           CANCIONES" + "\t" + "       VIEWS" + "\n" + Lista->Print();

	ord->BubbleSort(Lista);

	String^ lista = Lista->Print();
	richTextBox2->Text = "ARTISTA" + "\t" + "           CANCIONES" + "\t" + "        VIEWS" + "\n" + lista;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ordenado Exitosamente");
	richTextBox1->Text = "ARTISTA" + "\t" + "           CANCIONES" + "\t" + "       VIEWS" + "\n" + Lista->Print();

	ord->BubbleSort(Lista);

	String^ lista = Lista->Print();
	richTextBox2->Text = "ARTISTA" + "\t" + "           CANCIONES" + "\t" + "        VIEWS" + "\n" + lista;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
}
};
}
