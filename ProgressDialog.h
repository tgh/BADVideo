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
		ProgressDialog(int progBarMax)
		{
			InitializeComponent();
			progressBar1->Maximum = progBarMax;
		}

    void increment() {
      progressBar1->Increment(1);
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
  private: System::Windows::Forms::ProgressBar^  progressBar1;



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
      this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
      this->SuspendLayout();
      // 
      // progressBar1
      // 
      this->progressBar1->Location = System::Drawing::Point(12, 25);
      this->progressBar1->Name = L"progressBar1";
      this->progressBar1->Size = System::Drawing::Size(398, 23);
      this->progressBar1->TabIndex = 0;
      // 
      // ProgressDialog
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(422, 78);
      this->Controls->Add(this->progressBar1);
      this->MaximizeBox = false;
      this->Name = L"ProgressDialog";
      this->Text = L"Enhance";
      this->ResumeLayout(false);

    }
#pragma endregion
	};
}
