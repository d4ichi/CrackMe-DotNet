#pragma once
#include "AboutForm.h"
#include <string>

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
	private: System::Windows::Forms::Label^  labelKey;
	private: System::Windows::Forms::TextBox^  textBoxKey;
	private: System::Windows::Forms::Panel^  panelLogo;
	private: System::Windows::Forms::Button^  buttonActivate;
	private: System::Windows::Forms::Button^  buttonAbout;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::Panel^  panelOrg;
	private: System::Windows::Forms::Label^  labelOrg;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelButtons;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  labelUsername;
	private: System::Windows::Forms::TextBox^  textBoxUsername;
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
			this->labelKey = (gcnew System::Windows::Forms::Label());
			this->textBoxKey = (gcnew System::Windows::Forms::TextBox());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->buttonActivate = (gcnew System::Windows::Forms::Button());
			this->buttonAbout = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->panelOrg = (gcnew System::Windows::Forms::Panel());
			this->labelOrg = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanelButtons = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->panelOrg->SuspendLayout();
			this->tableLayoutPanelButtons->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelKey
			// 
			this->labelKey->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelKey->AutoSize = true;
			this->labelKey->Location = System::Drawing::Point(58, 52);
			this->labelKey->Name = L"labelKey";
			this->labelKey->Size = System::Drawing::Size(28, 13);
			this->labelKey->TabIndex = 0;
			this->labelKey->Text = L"Key:";
			// 
			// textBoxKey
			// 
			this->textBoxKey->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBoxKey->Location = System::Drawing::Point(92, 48);
			this->textBoxKey->MaxLength = 300;
			this->textBoxKey->Name = L"textBoxKey";
			this->textBoxKey->PasswordChar = '*';
			this->textBoxKey->Size = System::Drawing::Size(160, 20);
			this->textBoxKey->TabIndex = 2;
			// 
			// panelLogo
			// 
			this->panelLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLogo.BackgroundImage")));
			this->panelLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(299, 100);
			this->panelLogo->TabIndex = 2;
			// 
			// buttonActivate
			// 
			this->buttonActivate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonActivate->Location = System::Drawing::Point(12, 11);
			this->buttonActivate->Name = L"buttonActivate";
			this->buttonActivate->Size = System::Drawing::Size(75, 23);
			this->buttonActivate->TabIndex = 3;
			this->buttonActivate->Text = L"Activate";
			this->buttonActivate->UseVisualStyleBackColor = true;
			this->buttonActivate->Click += gcnew System::EventHandler(this, &MainForm::buttonActivate_Click);
			// 
			// buttonAbout
			// 
			this->buttonAbout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAbout->Location = System::Drawing::Point(111, 11);
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
			this->buttonExit->Location = System::Drawing::Point(211, 11);
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
			this->panelOrg->Location = System::Drawing::Point(0, 224);
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
			this->tableLayoutPanelButtons->ColumnCount = 3;
			this->tableLayoutPanelButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanelButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanelButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanelButtons->Controls->Add(this->buttonActivate, 0, 0);
			this->tableLayoutPanelButtons->Controls->Add(this->buttonAbout, 1, 0);
			this->tableLayoutPanelButtons->Controls->Add(this->buttonExit, 2, 0);
			this->tableLayoutPanelButtons->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanelButtons->Location = System::Drawing::Point(0, 178);
			this->tableLayoutPanelButtons->Name = L"tableLayoutPanelButtons";
			this->tableLayoutPanelButtons->RowCount = 1;
			this->tableLayoutPanelButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanelButtons->Size = System::Drawing::Size(299, 46);
			this->tableLayoutPanelButtons->TabIndex = 7;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel1->Controls->Add(this->labelKey, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBoxKey, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelUsername, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBoxUsername, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 100);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(299, 78);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelUsername->AutoSize = true;
			this->labelUsername->Location = System::Drawing::Point(23, 13);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(63, 13);
			this->labelUsername->TabIndex = 2;
			this->labelUsername->Text = L"User Name:";
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBoxUsername->Location = System::Drawing::Point(92, 9);
			this->textBoxUsername->MaxLength = 100;
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(160, 20);
			this->textBoxUsername->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AcceptButton = this->buttonActivate;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 261);
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
private: System::Void buttonActivate_Click(System::Object^  sender, System::EventArgs^  e) {


	// Write a code to evaluate user's input here.
	// This example simply compares user input and plain text. 


	// Define seed
	// If username is "kevinm", key is "Xk6eDveinnGmiE"
	char seed[] = "X6DenGiE";
	
	// Get input from user
	String^ input_uname_s = textBoxUsername->Text;
	String^ input_key_s = textBoxKey->Text;
	
	// Convert System::String to Char
	char* input_uname = (char*)(void*)Marshal::StringToHGlobalAnsi(input_uname_s);
	char* input_key = (char*)(void*)Marshal::StringToHGlobalAnsi(input_key_s);

	// Key
	// The length of "seed + input_uname" shoud not exceed the length of "key"
	char key[400] = "";

	// Make sure user input something as username
	if (strlen(input_uname) < 4) {
		MessageBox::Show("Username must be more than 4 characters.","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Generate key with just combine character one after another from seed and user name
	// If user seed is "SSSSSSSS" name is "AAA", key is "SASASASSSSS"
	int i, j, k = 0;
	while (1) {
		if (j < strlen(seed)) {
			key[i] = seed[j];
			j++;
			i++;
		}
		if(k < strlen(input_uname)) {
			key[i] = input_uname[k];
			k++;
			i++;
		}
		if (i == strlen(seed) + strlen(input_uname)) {
			key[i] = '\0';
			break;
		}
	}

	// Compare user input and correct key
	if (strcmp(input_key, key)) {
		MessageBox::Show("The serial key you entered is invalid.", "Activation Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		MessageBox::Show("Good job! Let's code a key generator!", "Activation Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
};
}
