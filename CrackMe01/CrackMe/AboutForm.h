#pragma once

namespace CrackMe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void)
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
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelLevelContent;
	private: System::Windows::Forms::Label^  labelLevel;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  labelAuthor;
	private: System::Windows::Forms::Label^  labelAuthorContent;
	private: System::Windows::Forms::Label^  labelDeadline;
	private: System::Windows::Forms::Label^  labelDeadlineContent;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  buttonAboutOK;
	private: System::Windows::Forms::Label^  labelinstruction;
	private: System::Windows::Forms::Label^  labelinstructionContent;
	private: System::Windows::Forms::Panel^  panel1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->labelLevelContent = (gcnew System::Windows::Forms::Label());
			this->labelLevel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelAuthor = (gcnew System::Windows::Forms::Label());
			this->labelAuthorContent = (gcnew System::Windows::Forms::Label());
			this->labelDeadline = (gcnew System::Windows::Forms::Label());
			this->labelDeadlineContent = (gcnew System::Windows::Forms::Label());
			this->labelinstruction = (gcnew System::Windows::Forms::Label());
			this->labelinstructionContent = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonAboutOK = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelLevelContent
			// 
			this->labelLevelContent->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelLevelContent->AutoSize = true;
			this->labelLevelContent->Location = System::Drawing::Point(91, 10);
			this->labelLevelContent->Name = L"labelLevelContent";
			this->labelLevelContent->Size = System::Drawing::Size(13, 13);
			this->labelLevelContent->TabIndex = 2;
			this->labelLevelContent->Text = L"1";
			// 
			// labelLevel
			// 
			this->labelLevel->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelLevel->AutoSize = true;
			this->labelLevel->Location = System::Drawing::Point(49, 10);
			this->labelLevel->Name = L"labelLevel";
			this->labelLevel->Size = System::Drawing::Size(36, 13);
			this->labelLevel->TabIndex = 0;
			this->labelLevel->Text = L"Level:";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				65)));
			this->tableLayoutPanel1->Controls->Add(this->labelLevel, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelAuthor, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelLevelContent, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelAuthorContent, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelDeadline, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelDeadlineContent, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelinstruction, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->labelinstructionContent, 1, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(253, 139);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// labelAuthor
			// 
			this->labelAuthor->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelAuthor->AutoSize = true;
			this->labelAuthor->Location = System::Drawing::Point(44, 44);
			this->labelAuthor->Name = L"labelAuthor";
			this->labelAuthor->Size = System::Drawing::Size(41, 13);
			this->labelAuthor->TabIndex = 1;
			this->labelAuthor->Text = L"Author:";
			// 
			// labelAuthorContent
			// 
			this->labelAuthorContent->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelAuthorContent->AutoSize = true;
			this->labelAuthorContent->Location = System::Drawing::Point(91, 44);
			this->labelAuthorContent->Name = L"labelAuthorContent";
			this->labelAuthorContent->Size = System::Drawing::Size(123, 13);
			this->labelAuthorContent->TabIndex = 3;
			this->labelAuthorContent->Text = L"ClaimToFame CTF 20XX";
			// 
			// labelDeadline
			// 
			this->labelDeadline->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelDeadline->AutoSize = true;
			this->labelDeadline->Location = System::Drawing::Point(33, 78);
			this->labelDeadline->Name = L"labelDeadline";
			this->labelDeadline->Size = System::Drawing::Size(52, 13);
			this->labelDeadline->TabIndex = 4;
			this->labelDeadline->Text = L"Deadline:";
			// 
			// labelDeadlineContent
			// 
			this->labelDeadlineContent->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelDeadlineContent->AutoSize = true;
			this->labelDeadlineContent->Location = System::Drawing::Point(91, 78);
			this->labelDeadlineContent->Name = L"labelDeadlineContent";
			this->labelDeadlineContent->Size = System::Drawing::Size(83, 13);
			this->labelDeadlineContent->TabIndex = 5;
			this->labelDeadlineContent->Text = L"25th Dec, 20XX";
			// 
			// labelinstruction
			// 
			this->labelinstruction->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelinstruction->AutoSize = true;
			this->labelinstruction->Location = System::Drawing::Point(26, 114);
			this->labelinstruction->Name = L"labelinstruction";
			this->labelinstruction->Size = System::Drawing::Size(59, 13);
			this->labelinstruction->TabIndex = 6;
			this->labelinstruction->Text = L"Instruction:";
			// 
			// labelinstructionContent
			// 
			this->labelinstructionContent->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelinstructionContent->AutoSize = true;
			this->labelinstructionContent->Location = System::Drawing::Point(91, 114);
			this->labelinstructionContent->Name = L"labelinstructionContent";
			this->labelinstructionContent->Size = System::Drawing::Size(117, 13);
			this->labelinstructionContent->TabIndex = 7;
			this->labelinstructionContent->Text = L"Get the valid serial key!";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->buttonAboutOK, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 158);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(279, 34);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// buttonAboutOK
			// 
			this->buttonAboutOK->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAboutOK->Location = System::Drawing::Point(102, 5);
			this->buttonAboutOK->Name = L"buttonAboutOK";
			this->buttonAboutOK->Size = System::Drawing::Size(75, 23);
			this->buttonAboutOK->TabIndex = 0;
			this->buttonAboutOK->Text = L"OK";
			this->buttonAboutOK->UseVisualStyleBackColor = true;
			this->buttonAboutOK->Click += gcnew System::EventHandler(this, &AboutForm::buttonAboutOK_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 141);
			this->panel1->TabIndex = 2;
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(279, 192);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AboutForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"About";
			this->Load += gcnew System::EventHandler(this, &AboutForm::AboutForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void AboutForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void buttonAboutOK_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
