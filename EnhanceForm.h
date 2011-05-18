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
      trackBar1->Value = 200;
      textBox1->Text  = "200";
			temporalMarginNumericUpDown->Minimum = 0;
      temporalMarginNumericUpDown->Maximum = maxFrames;
      temporalMarginNumericUpDown->Value   = maxFrames/2;
      kernelNumericUpDown->Value      =   3;
      kernelNumericUpDown->Minimum    =   0;
      kernelNumericUpDown->Maximum    =  10;
      spatialNumericUpDown->Value     =   3;
      spatialNumericUpDown->Minimum   =   0;
      spatialNumericUpDown->Maximum   =  30;
      intensityNumericUpDown->Value   =  30;
      intensityNumericUpDown->Minimum =   0;
      intensityNumericUpDown->Maximum = 200;
		}

    int getGainValue() {
      return (int) trackBar1->Value;
    }

    int getTemporalMargin() {
      return (int) temporalMarginNumericUpDown->Value;
    }

    int getSigmaD() {
      return (int) spatialNumericUpDown->Value;
    }

    int getSigmaR() {
      return (int) intensityNumericUpDown->Value;
    }

    int getKernelRadius() {
      return (int) kernelNumericUpDown->Value;
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

  private: System::Windows::Forms::Button^  button1;
  private: System::Windows::Forms::Button^  button2;
  private: System::Windows::Forms::GroupBox^  groupBox2;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::NumericUpDown^  temporalMarginNumericUpDown;



  private: System::Windows::Forms::TextBox^  textBox1;
  private: System::Windows::Forms::GroupBox^  groupBox3;
  private: System::Windows::Forms::Label^  label5;
  private: System::Windows::Forms::Label^  label4;
  private: System::Windows::Forms::NumericUpDown^  kernelNumericUpDown;

  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::NumericUpDown^  intensityNumericUpDown;

  private: System::Windows::Forms::NumericUpDown^  spatialNumericUpDown;


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
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->button2 = (gcnew System::Windows::Forms::Button());
      this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->temporalMarginNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
      this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
      this->intensityNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
      this->spatialNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
      this->label5 = (gcnew System::Windows::Forms::Label());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->kernelNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
      this->label1 = (gcnew System::Windows::Forms::Label());
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
      this->groupBox1->SuspendLayout();
      this->groupBox2->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->temporalMarginNumericUpDown))->BeginInit();
      this->groupBox3->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->intensityNumericUpDown))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->spatialNumericUpDown))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->kernelNumericUpDown))->BeginInit();
      this->SuspendLayout();
      // 
      // trackBar1
      // 
      this->trackBar1->LargeChange = 50;
      this->trackBar1->Location = System::Drawing::Point(6, 42);
      this->trackBar1->Maximum = 300;
      this->trackBar1->Name = L"trackBar1";
      this->trackBar1->Size = System::Drawing::Size(324, 45);
      this->trackBar1->SmallChange = 20;
      this->trackBar1->TabIndex = 1;
      this->trackBar1->TickFrequency = 10;
      this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
      this->trackBar1->Scroll += gcnew System::EventHandler(this, &EnhanceForm::trackBar1_Scroll);
      // 
      // groupBox1
      // 
      this->groupBox1->Controls->Add(this->textBox1);
      this->groupBox1->Controls->Add(this->label3);
      this->groupBox1->Controls->Add(this->trackBar1);
      this->groupBox1->Location = System::Drawing::Point(15, 211);
      this->groupBox1->Name = L"groupBox1";
      this->groupBox1->Size = System::Drawing::Size(344, 93);
      this->groupBox1->TabIndex = 2;
      this->groupBox1->TabStop = false;
      this->groupBox1->Text = L"Brightness";
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(283, 15);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(47, 20);
      this->textBox1->TabIndex = 4;
      this->textBox1->Text = L"0";
      this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
      this->textBox1->TextChanged += gcnew System::EventHandler(this, &EnhanceForm::textBox1_TextChanged);
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label3->Location = System::Drawing::Point(162, 16);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(110, 17);
      this->label3->TabIndex = 3;
      this->label3->Text = L"Brightness gain:";
      // 
      // button1
      // 
      this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
      this->button1->Location = System::Drawing::Point(180, 330);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(75, 23);
      this->button1->TabIndex = 3;
      this->button1->Text = L"OK";
      this->button1->UseVisualStyleBackColor = true;
      // 
      // button2
      // 
      this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
      this->button2->Location = System::Drawing::Point(275, 330);
      this->button2->Name = L"button2";
      this->button2->Size = System::Drawing::Size(75, 23);
      this->button2->TabIndex = 4;
      this->button2->Text = L"Cancel";
      this->button2->UseVisualStyleBackColor = true;
      // 
      // groupBox2
      // 
      this->groupBox2->Controls->Add(this->label2);
      this->groupBox2->Controls->Add(this->temporalMarginNumericUpDown);
      this->groupBox2->Location = System::Drawing::Point(15, 13);
      this->groupBox2->Name = L"groupBox2";
      this->groupBox2->Size = System::Drawing::Size(344, 51);
      this->groupBox2->TabIndex = 5;
      this->groupBox2->TabStop = false;
      this->groupBox2->Text = L"Time";
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label2->Location = System::Drawing::Point(153, 19);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(119, 17);
      this->label2->TabIndex = 1;
      this->label2->Text = L"Temporal margin:";
      // 
      // temporalMarginNumericUpDown
      // 
      this->temporalMarginNumericUpDown->Location = System::Drawing::Point(283, 19);
      this->temporalMarginNumericUpDown->Name = L"temporalMarginNumericUpDown";
      this->temporalMarginNumericUpDown->Size = System::Drawing::Size(47, 20);
      this->temporalMarginNumericUpDown->TabIndex = 0;
      this->temporalMarginNumericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
      // 
      // groupBox3
      // 
      this->groupBox3->Controls->Add(this->intensityNumericUpDown);
      this->groupBox3->Controls->Add(this->spatialNumericUpDown);
      this->groupBox3->Controls->Add(this->label5);
      this->groupBox3->Controls->Add(this->label4);
      this->groupBox3->Controls->Add(this->kernelNumericUpDown);
      this->groupBox3->Controls->Add(this->label1);
      this->groupBox3->Location = System::Drawing::Point(15, 80);
      this->groupBox3->Name = L"groupBox3";
      this->groupBox3->Size = System::Drawing::Size(344, 111);
      this->groupBox3->TabIndex = 6;
      this->groupBox3->TabStop = false;
      this->groupBox3->Text = L"Space";
      // 
      // intensityNumericUpDown
      // 
      this->intensityNumericUpDown->Location = System::Drawing::Point(283, 79);
      this->intensityNumericUpDown->Name = L"intensityNumericUpDown";
      this->intensityNumericUpDown->Size = System::Drawing::Size(47, 20);
      this->intensityNumericUpDown->TabIndex = 5;
      this->intensityNumericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
      // 
      // spatialNumericUpDown
      // 
      this->spatialNumericUpDown->Location = System::Drawing::Point(283, 50);
      this->spatialNumericUpDown->Name = L"spatialNumericUpDown";
      this->spatialNumericUpDown->Size = System::Drawing::Size(47, 20);
      this->spatialNumericUpDown->TabIndex = 4;
      this->spatialNumericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label5->Location = System::Drawing::Point(87, 79);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(185, 17);
      this->label5->TabIndex = 3;
      this->label5->Text = L"Intensity standard deviation:";
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label4->Location = System::Drawing::Point(96, 50);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(176, 17);
      this->label4->TabIndex = 2;
      this->label4->Text = L"Spatial standard deviation:";
      // 
      // kernelNumericUpDown
      // 
      this->kernelNumericUpDown->Location = System::Drawing::Point(283, 21);
      this->kernelNumericUpDown->Name = L"kernelNumericUpDown";
      this->kernelNumericUpDown->Size = System::Drawing::Size(47, 20);
      this->kernelNumericUpDown->TabIndex = 1;
      this->kernelNumericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
      this->label1->Location = System::Drawing::Point(176, 21);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(96, 17);
      this->label1->TabIndex = 0;
      this->label1->Text = L"Kernel radius:";
      // 
      // EnhanceForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(371, 370);
      this->Controls->Add(this->groupBox3);
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
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->temporalMarginNumericUpDown))->EndInit();
      this->groupBox3->ResumeLayout(false);
      this->groupBox3->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->intensityNumericUpDown))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->spatialNumericUpDown))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->kernelNumericUpDown))->EndInit();
      this->ResumeLayout(false);

    }
#pragma endregion
  private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
             textBox1->Text = "" + trackBar1->Value;
           }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
           int val = 0;
           try {
            val = Convert::ToInt32(textBox1->Text);
           }
           catch (FormatException^ fe) {
             textBox1->Text = "0";
           }
           if (val > 300) {
             textBox1->Text = "300";
             trackBar1->Value = 300;
           }
           else if (val < 0) {
             textBox1->Text = "0";
             trackBar1->Value = 0;
           }
           else {
             trackBar1->Value = val;
           }
         }
};
}
