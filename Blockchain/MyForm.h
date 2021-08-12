#pragma once
#include <iostream>
#include <chrono>
#include <fstream>
#include "blockchain.h"
#include "Time.h"

#define LIMIT 1000000
namespace Blockchain {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::ListBox^  listBox7;
	private: System::Windows::Forms::ListBox^  listBox8;
	private: System::Windows::Forms::ListBox^  listBox9;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListBox^  listBox10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ListBox^  listBox11;



	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->listBox9 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox10 = (gcnew System::Windows::Forms::ListBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox11 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 238);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(138, 12);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 238);
			this->listBox2->TabIndex = 1;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(264, 12);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(568, 238);
			this->listBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1193, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 24);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Hash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(838, 12);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(349, 238);
			this->listBox4->TabIndex = 4;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(1193, 12);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(120, 238);
			this->listBox5->TabIndex = 5;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(12, 256);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(211, 199);
			this->listBox6->TabIndex = 6;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(229, 256);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(311, 199);
			this->listBox7->TabIndex = 7;
			// 
			// listBox8
			// 
			this->listBox8->FormattingEnabled = true;
			this->listBox8->Location = System::Drawing::Point(546, 256);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(364, 199);
			this->listBox8->TabIndex = 8;
			// 
			// listBox9
			// 
			this->listBox9->FormattingEnabled = true;
			this->listBox9->Location = System::Drawing::Point(916, 256);
			this->listBox9->Name = L"listBox9";
			this->listBox9->Size = System::Drawing::Size(271, 199);
			this->listBox9->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15"
			});
			this->comboBox1->Location = System::Drawing::Point(1193, 286);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"Max Hash Difficulty";
			// 
			// listBox10
			// 
			this->listBox10->FormattingEnabled = true;
			this->listBox10->Location = System::Drawing::Point(12, 461);
			this->listBox10->Name = L"listBox10";
			this->listBox10->Size = System::Drawing::Size(278, 342);
			this->listBox10->TabIndex = 11;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(296, 461);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Serial";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"2 Thread";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"4 Thread";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"8 Thread";
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"16 Thread";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Size = System::Drawing::Size(1017, 342);
			this->chart1->TabIndex = 12;
			this->chart1->Text = L"chart1";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Serial", L"2 Thread", L"4 Thread", L"8 Thread",
					L"16 Thread"
			});
			this->comboBox2->Location = System::Drawing::Point(1193, 313);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(120, 21);
			this->comboBox2->TabIndex = 13;
			this->comboBox2->Text = L"Program Type";
			// 
			// listBox11
			// 
			this->listBox11->FormattingEnabled = true;
			this->listBox11->Location = System::Drawing::Point(1193, 548);
			this->listBox11->Name = L"listBox11";
			this->listBox11->Size = System::Drawing::Size(114, 238);
			this->listBox11->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1325, 822);
			this->Controls->Add(this->listBox11);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->listBox10);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox9);
			this->Controls->Add(this->listBox8);
			this->Controls->Add(this->listBox7);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: int FindNumOfThreads(int indexNum)
	{
		int numOfThreads = 0;
		switch (indexNum)
		{
		case 0:
			numOfThreads = 1;
			break;
		case 1:
			numOfThreads = 2;
			break;
		case 2:
			numOfThreads = 4;
			break;
		case 3:
			numOfThreads = 8;
			break;
		case 4:
			numOfThreads = 16;
		default:
			break;
		}

		return numOfThreads;
	}
	private: void addGraphicItem(int numOfThreads, int ms, int difficulty)
	{
		switch (numOfThreads)
		{
		case 1:
			chart1->Series["Serial"]->Points->Add(ms, difficulty);
			break;
		case 2:
			chart1->Series["2 Thread"]->Points->Add(ms, difficulty);
			break;
		case 4:
			chart1->Series["4 Thread"]->Points->Add(ms, difficulty);
			break;
		case 8:
			chart1->Series["8 Thread"]->Points->Add(ms, difficulty);
			break;
		case 16:
			chart1->Series["16 Thread"]->Points->Add(ms, difficulty);
			break;
		}
	}
	private: int comparisonText = 0;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		BLOCK block;
		std::ofstream tempProgramOutputFile("tempOutputFile.txt", std::ofstream::trunc);
		block.id = 0;
		block.text = "Bize her yer Trabzon! Bolumun en yakisikli hocasi Ibrahim Hoca’dir";
		//block.text = "Bize her yer Trabzon! Bölümün en yakýþýklý hocasý Ýbrahim Hoca'dýr";
		block.hash = "0000000000000000000000000000000000000000000000000000000000000000";
		block.nonce = 0;
		block.control = 0;
		block.found = true;
		String^ startBlockHash = gcnew String(block.hash);
		String^ startResultText = gcnew String(block.text);
		listBox1->Items->Add("Start");
		listBox2->Items->Add("Nonce");
		listBox3->Items->Add(startBlockHash);
		listBox4->Items->Add(startResultText);
		listBox5->Items->Add("Control");
		listBox6->Items->Add("Time");
		Refresh();
		int i8 = 0;
		Time time2;
		printToTxt(tempProgramOutputFile, block, time2, 0);
		int difficulty = comboBox1->SelectedIndex + 1;
		int numOfThreads = FindNumOfThreads(comboBox2->SelectedIndex);
		int listBoxMax = 0;
		bool found = true;
		long long limit = LIMIT;
		long long upToDateNonceValue = 0;
		using std::chrono::high_resolution_clock;
		using std::chrono::duration;
		auto t1 = high_resolution_clock::now();
		for (int i = 1; i <= difficulty; i++)
		{
			if (found != false)
			{
				block.id++;
				char* resultText = blockResult(block);
				block.text = resultText;
				block.nonce = 0;
				limit = LIMIT;
				upToDateNonceValue = 0;
				found = false;
				block.found = false;
				listBox7->Items->Add("Up To Date Nonce Values For " + i + ". Hash");
				listBox8->Items->Add("Interval Values");
				listBox9->Items->Add("Up To Date Time");
				Refresh();
			}
			/*if (i == 7)
			{
				upToDateNonceValue = 414000000;
				limit += upToDateNonceValue;
			}
			if (i == 8 && i8 == 0)
			{
				upToDateNonceValue = 440000000;
				limit += upToDateNonceValue;
				i8 = 1;
			}*/
			block = generateHashParallel(block, i, upToDateNonceValue, limit, numOfThreads);
			found = block.found;
			if (found)
			{
				block.control = controlHash(block, i);
				block.text = tryForHash(block, block.nonce);
				listBox10->Items->Add(i + ". Hash Check Result : " + block.control + "-->" + block.nonce);
				Refresh();
			}
			if (found != false && block.control != 0)
			{
				auto t2 = high_resolution_clock::now();
				duration<double, std::milli> ms_double = t2 - t1;
				double getMs = ms_double.count();
				Time timer;
				/*if (i == 7)
				{
					timer.hour = 1;
					timer.min = 43;
					timer.sec = 30;
				}
				if (i8 == 1)
				{
					timer.hour = 3;
					timer.min = 35;
					timer.sec = 30;
				}*/
				timer = getTime(timer, getMs);
				printToTxt(tempProgramOutputFile, block, timer, i);
				String^ stringBlockHash = gcnew String(block.hash);
				String^ stringBlockText = gcnew String(block.text);
				listBox1->Items->Add(i);
				listBox2->Items->Add(block.nonce);
				listBox3->Items->Add(stringBlockHash);
				listBox4->Items->Add(stringBlockText);
				listBox5->Items->Add(block.control);
				listBox6->Items->Add(timer.hour + " hour :: " + timer.min + " min :: " + timer.sec + " sec:: " + timer.ms + " ms");
				listBox7->Items->Clear();
				listBox8->Items->Clear();
				listBox9->Items->Clear();
				addGraphicItem(numOfThreads, getMs, difficulty);
				if (difficulty == i)
				{
					if (comparisonText == 0)
					{
						listBox11->Items->Add("Type Comparison");
						comparisonText = 1;
					}
					listBox11->Items->Add(numOfThreads + "-->" + getMs + "ms");
				}
				listBoxMax = 0;
				addListComponent(block);
				Refresh();
			}
			else {
				if (listBoxMax == 10)
				{
					listBox7->Items->Clear();
					listBox8->Items->Clear();
					listBox9->Items->Clear();
					listBox7->Items->Add("Up To Date Nonce Values For " + i + ". Hash");
					listBox8->Items->Add("Interval Values");
					listBox9->Items->Add("Up To Date Time");
					listBoxMax = 0;
				}
				if (block.nonce != 0)
					upToDateNonceValue = block.nonce;
				else
					upToDateNonceValue += LIMIT;
				limit += LIMIT;
				auto t2 = high_resolution_clock::now();
				duration<double, std::milli> ms_double = t2 - t1;
				double getMs = ms_double.count();
				Time timer;
				if (i8 == 1)
				{
					timer.hour = 3;
					timer.min = 35;
					timer.sec = 30;
				}
				timer = getTime(timer, getMs);
				i--;
				listBox7->Items->Add(upToDateNonceValue);
				listBox8->Items->Add(upToDateNonceValue + " - " + limit);
				listBox9->Items->Add(timer.hour + " hour :: " + timer.min + " min :: " + timer.sec + " sec:: " + timer.ms + " ms");
				Refresh();
				listBoxMax++;
			}
		}
		return;
	}
	};
}
