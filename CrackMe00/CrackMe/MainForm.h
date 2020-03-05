#pragma once
#include "AboutForm.h"
#include "String.h"
#include "time.h"

namespace CrackMe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//To convert System::String* to std::char*
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// CrackMe with modern GUI
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//

			// Expiration date: "946598400" Fri, 31 Dec 1999 00:00:00 GMT
			time_t expire_time = 946598400;
			// If you would like to define expiration date to future for debugging,
			// Set value to "4000000000" Tue, 02 Oct 2096 07:06:40 GMT
			
			time_t curr_time;
			tm * curr_tm;
			tm * expire_tm;
			char date_string[100];

			// Get current time
			time(&curr_time);

			// Convert time_t to local time tm structure
			curr_tm = localtime(&curr_time);
			expire_tm = localtime(&expire_time);

			// Evaluation
			if (curr_time > expire_time) {
				textBoxStatus->BackColor = Color::LightPink;
				textBoxStatus->ForeColor = Color::DarkRed;
				textBoxStatus->Text = "Licence Expired";

			}
			else {
				textBoxStatus->BackColor = Color::LightGreen;
				textBoxStatus->ForeColor = Color::DarkGreen;
				strftime(date_string, 50, "Licence expires on %B %d, %Y", expire_tm);
				String^ date_string_out = gcnew String(date_string);
				textBoxStatus->Text = date_string_out;
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Panel^  panelLogo;

	private: System::Windows::Forms::Button^  buttonAbout;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::Panel^  panelOrg;
	private: System::Windows::Forms::Label^  labelOrg;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelButtons;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^  textBoxStatus;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->buttonAbout = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->panelOrg = (gcnew System::Windows::Forms::Panel());
			this->labelOrg = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanelButtons = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBoxStatus = (gcnew System::Windows::Forms::TextBox());
			this->panelOrg->SuspendLayout();
			this->tableLayoutPanelButtons->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLogo
			// 
			this->panelLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLogo.BackgroundImage")));
			this->panelLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(299, 102);
			this->panelLogo->TabIndex = 2;
			// 
			// buttonAbout
			// 
			this->buttonAbout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAbout->Location = System::Drawing::Point(37, 11);
			this->buttonAbout->Name = L"buttonAbout";
			this->buttonAbout->Size = System::Drawing::Size(75, 23);
			this->buttonAbout->TabIndex = 4;
			this->buttonAbout->Text = L"About";
			this->buttonAbout->UseVisualStyleBackColor = true;
			this->buttonAbout->Click += gcnew System::EventHandler(this, &MainForm::buttonAbout_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonExit->Location = System::Drawing::Point(186, 11);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 23);
			this->buttonExit->TabIndex = 5;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MainForm::buttonExit_Click);
			// 
			// panelOrg
			// 
			this->panelOrg->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelOrg->Controls->Add(this->labelOrg);
			this->panelOrg->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelOrg->Location = System::Drawing::Point(0, 183);
			this->panelOrg->Name = L"panelOrg";
			this->panelOrg->Size = System::Drawing::Size(299, 37);
			this->panelOrg->TabIndex = 6;
			// 
			// labelOrg
			// 
			this->labelOrg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelOrg->ForeColor = System::Drawing::SystemColors::GrayText;
			this->labelOrg->Location = System::Drawing::Point(0, 0);
			this->labelOrg->Name = L"labelOrg";
			this->labelOrg->Size = System::Drawing::Size(295, 33);
			this->labelOrg->TabIndex = 0;
			this->labelOrg->Text = L"ClaimToFame CTF 20XX";
			this->labelOrg->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanelButtons
			// 
			this->tableLayoutPanelButtons->ColumnCount = 2;
			this->tableLayoutPanelButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanelButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanelButtons->Controls->Add(this->buttonAbout, 0, 0);
			this->tableLayoutPanelButtons->Controls->Add(this->buttonExit, 1, 0);
			this->tableLayoutPanelButtons->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanelButtons->Location = System::Drawing::Point(0, 137);
			this->tableLayoutPanelButtons->Name = L"tableLayoutPanelButtons";
			this->tableLayoutPanelButtons->RowCount = 1;
			this->tableLayoutPanelButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanelButtons->Size = System::Drawing::Size(299, 46);
			this->tableLayoutPanelButtons->TabIndex = 7;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->Controls->Add(this->textBoxStatus, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 102);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(299, 35);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// textBoxStatus
			// 
			this->textBoxStatus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxStatus->Location = System::Drawing::Point(36, 7);
			this->textBoxStatus->Name = L"textBoxStatus";
			this->textBoxStatus->ReadOnly = true;
			this->textBoxStatus->Size = System::Drawing::Size(226, 20);
			this->textBoxStatus->TabIndex = 0;
			this->textBoxStatus->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 220);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanelButtons);
			this->Controls->Add(this->panelOrg);
			this->Controls->Add(this->panelLogo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"CrackMe";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panelOrg->ResumeLayout(false);
			this->tableLayoutPanelButtons->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void buttonAbout_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutForm ^ form = gcnew AboutForm;
	form->ShowDialog();
}
};
}
