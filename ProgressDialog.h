#pragma once

namespace BADVideo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProgressDialog
	/// </summary>
	public ref class ProgressDialog : public System::Windows::Forms::Form
	{
	public:
		ProgressDialog()
		{
			InitializeComponent();
		}

    void ShowText() {
      label1->Show();
    }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProgressDialog()
		{
			if (components)
			{
				delete components;
			}
		}
  private: System::Windows::Forms::Label^  label1;
  protected: 




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
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->SuspendLayout();
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label1->Location = System::Drawing::Point(35, 22);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(136, 24);
      this->label1->TabIndex = 0;
      this->label1->Text = L"One moment...";
      // 
      // ProgressDialog
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(200, 71);
      this->Controls->Add(this->label1);
      this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
      this->MaximizeBox = false;
      this->MinimizeBox = false;
      this->Name = L"ProgressDialog";
      this->Text = L"Enhance";
      this->ResumeLayout(false);
      this->PerformLayout();

    }
#pragma endregion
       };
}
