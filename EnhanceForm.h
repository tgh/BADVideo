#pragma once

namespace BADVideo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EnhanceForm
	/// </summary>
	public ref class EnhanceForm : public System::Windows::Forms::Form
	{
	public:
		EnhanceForm(int maxFrames)
		{
			InitializeComponent();
			numericUpDown1->Minimum = 0;
      numericUpDown1->Maximum = maxFrames;
		}

    int getGainValue() {
      return (int) trackBar1->Value;
    }

    int getTemporalMargin() {
      return (int) numericUpDown1->Value;
    }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EnhanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
  private: System::Windows::Forms::TrackBar^  trackBar1;
  protected: 
  private: System::Windows::Forms::GroupBox^  groupBox1;
  private: System::Windows::Forms::Label^  label3;
  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::Button^  button1;
  private: System::Windows::Forms::Button^  button2;
  private: System::Windows::Forms::GroupBox^  groupBox2;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
  private: System::Windows::Forms::Label^  label4;

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
      this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
      this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->button2 = (gcnew System::Windows::Forms::Button());
      this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
      this->groupBox1->SuspendLayout();
      this->groupBox2->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
      this->SuspendLayout();
      // 
      // trackBar1
      // 
      this->trackBar1->LargeChange = 50;
      this->trackBar1->Location = System::Drawing::Point(6, 42);
      this->trackBar1->Maximum = 300;
      this->trackBar1->Name = L"trackBar1";
      this->trackBar1->Size = System::Drawing::Size(435, 45);
      this->trackBar1->SmallChange = 20;
      this->trackBar1->TabIndex = 1;
      this->trackBar1->TickFrequency = 10;
      this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
      this->trackBar1->Scroll += gcnew System::EventHandler(this, &EnhanceForm::trackBar1_Scroll);
      // 
      // groupBox1
      // 
      this->groupBox1->Controls->Add(this->label3);
      this->groupBox1->Controls->Add(this->label1);
      this->groupBox1->Controls->Add(this->trackBar1);
      this->groupBox1->Location = System::Drawing::Point(15, 105);
      this->groupBox1->Name = L"groupBox1";
      this->groupBox1->Size = System::Drawing::Size(451, 93);
      this->groupBox1->TabIndex = 2;
      this->groupBox1->TabStop = false;
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label3->Location = System::Drawing::Point(6, 16);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(110, 17);
      this->label3->TabIndex = 3;
      this->label3->Text = L"Brightness gain:";
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label1->Location = System::Drawing::Point(151, 16);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(17, 17);
      this->label1->TabIndex = 2;
      this->label1->Text = L"0";
      // 
      // button1
      // 
      this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
      this->button1->Location = System::Drawing::Point(310, 213);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(75, 23);
      this->button1->TabIndex = 3;
      this->button1->Text = L"OK";
      this->button1->UseVisualStyleBackColor = true;
      // 
      // button2
      // 
      this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
      this->button2->Location = System::Drawing::Point(391, 213);
      this->button2->Name = L"button2";
      this->button2->Size = System::Drawing::Size(75, 23);
      this->button2->TabIndex = 4;
      this->button2->Text = L"Cancel";
      this->button2->UseVisualStyleBackColor = true;
      // 
      // groupBox2
      // 
      this->groupBox2->Controls->Add(this->label4);
      this->groupBox2->Controls->Add(this->label2);
      this->groupBox2->Controls->Add(this->numericUpDown1);
      this->groupBox2->Location = System::Drawing::Point(15, 13);
      this->groupBox2->Name = L"groupBox2";
      this->groupBox2->Size = System::Drawing::Size(452, 86);
      this->groupBox2->TabIndex = 5;
      this->groupBox2->TabStop = false;
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label4->Location = System::Drawing::Point(7, 60);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(436, 13);
      this->label4->TabIndex = 2;
      this->label4->Text = L" * Number of frames before and after the processing frame with which to average t" 
        L"he pixels.";
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label2->Location = System::Drawing::Point(6, 16);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(124, 17);
      this->label2->TabIndex = 1;
      this->label2->Text = L"Temporal margin*:";
      // 
      // numericUpDown1
      // 
      this->numericUpDown1->Location = System::Drawing::Point(136, 16);
      this->numericUpDown1->Name = L"numericUpDown1";
      this->numericUpDown1->Size = System::Drawing::Size(47, 20);
      this->numericUpDown1->TabIndex = 0;
      this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
      // 
      // EnhanceForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(479, 245);
      this->Controls->Add(this->groupBox2);
      this->Controls->Add(this->button2);
      this->Controls->Add(this->button1);
      this->Controls->Add(this->groupBox1);
      this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
      this->MaximizeBox = false;
      this->Name = L"EnhanceForm";
      this->Text = L"Enhance";
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
      this->groupBox1->ResumeLayout(false);
      this->groupBox1->PerformLayout();
      this->groupBox2->ResumeLayout(false);
      this->groupBox2->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
      this->ResumeLayout(false);

    }
#pragma endregion
  private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
             label1->Text = "" + trackBar1->Value;
           }
};
}
