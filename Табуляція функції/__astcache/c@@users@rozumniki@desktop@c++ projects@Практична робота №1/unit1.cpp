//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
  StringGrid1->Cells[0][0] = "x";
  StringGrid1->Cells[1][0] = "y";
  StringGrid1->Cells[2][0] = "dy";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N6Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N8Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == '.' && Edit1->Text.Pos(".") > 0)
	{
		Key = 0;
		return;
	}
	if (Key == '-' && Edit1->Text != "")
	{
		Key = 0;
		return;
	}
	if (!((Key >= '0' && Key <= '9') || Key == VK_BACK || Key == '.' || Key == '-'))
		Key = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == '.' && Edit2->Text.Pos(".") > 0)
	{
		Key = 0;
		return;
	}
	if (Key == '-' && Edit2->Text != "")
	{
		Key = 0;
		return;
	}
	if (!((Key >= '0' && Key <= '9') || Key == VK_BACK || Key == '.' || Key == '-'))
		Key = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == '.' && Edit3->Text.Pos(".") > 0)
	{
		Key = 0;
		return;
	}
	if (!((Key >= '0' && Key <= '9') || Key == VK_BACK || Key == '.'))
		Key = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
	Memo1->Clear();
	if (Edit1->Text == "" || Edit2->Text == "" || Edit3->Text == "")
	{
		ShowMessage("Введіть дані!");
		return;
	}
	float x, y, dy;
	float a = StrToFloat(Edit1->Text);
	float b = StrToFloat(Edit2->Text);
	float h = StrToFloat(Edit3->Text);
	int count = 0, dcount = 0;
	float max = -100, min = 100, dmax = -100, dmin = 100;
	if (!(a<b))
	{
		ShowMessage("Ліва межа не має бути більшою за праву! Введіть коректні дані!");
		return;
	}
	if (h == 0)
	{
		ShowMessage("Крок не може дорівнювати нулю! Введіть коректні дані!");
		return;
	}
	if (CheckBox4->Checked == false)
		Memo1->Lines->Append("x\ty");
	if (CheckBox4->Checked)
	{
		Memo1->Lines->Append("x\ty\tdy");
		Label4->Caption = "dy=cos(x)";
	}
    if (CheckBox1->Checked && CheckBox4->Checked)
		Label4->Caption = "y=sin(x)+1 dy=cos(x)";
	float** data = new float*[100];
	for (int i = 0; i < 100; i++)
		data[i] = new float[3];
	int dataCount = 0;
	for (x = a; x < b + h / 2; x += h)
	{
		y = sin(x) + 1;
		if (y > max)
			max = y;
		if (y < min)
			min = y;
		if (y > 0.5 && y < 1)
			count++;
		if (CheckBox4->Checked)
		{
			dy = cos(x);
			if (dy > dmax)
				dmax = dy;
			if (dy < dmin)
				dmin = dy;
			if (dy > 0.5 && dy < 1)
				dcount++;
			if (CheckBox1->Checked)
				Memo1->Lines->Append(FormatFloat("0.00", x) + '\t' +
				FormatFloat("0.00", y) + '\t' + FormatFloat("0.00", dy));
			if (CheckBox2->Checked)
				Memo1->Lines->SaveToFile("C:\\Users\\rozumniki\\Desktop\\Text.txt");
			if (CheckBox3->Checked)
			{
				data[dataCount][0] = x;
				data[dataCount][1] = y;
				data[dataCount][2] = dy;
				dataCount++;
				StringGrid1->Visible = true;
				StringGrid1->RowCount = dataCount + 1;
				StringGrid1->ColCount = 3;
				for (int i = 0; i < dataCount; i++)
				{
					StringGrid1->Cells[0][i + 1] = FormatFloat("0.00", data[i][0]);
					StringGrid1->Cells[1][i + 1] = FormatFloat("0.00", data[i][1]);
					StringGrid1->Cells[2][i + 1] = FormatFloat("0.00", data[i][2]);
				}
			}
		}
		else
		{
			if (CheckBox1->Checked)
				Memo1->Lines->Append(FormatFloat("0.00", x) + '\t' +
				FormatFloat("0.00", y));
			if (CheckBox2->Checked)
				Memo1->Lines->SaveToFile("C:\\Users\\rozumniki\\Desktop\\Text.txt");
			if (CheckBox3->Checked)
			{
				data[dataCount][0] = x;
				data[dataCount][1] = y;
				dataCount++;
				StringGrid1->Visible = true;
				StringGrid1->RowCount = dataCount + 1;
				StringGrid1->ColCount = 2;
				for (int i = 0; i < dataCount; i++)
				{
					StringGrid1->Cells[0][i + 1] = FormatFloat("0.00", data[i][0]);
					StringGrid1->Cells[1][i + 1] = FormatFloat("0.00", data[i][1]);
				}
			}
		}
	}
	if (CheckBox1->Checked)
	{
		Edit4->Visible = true;
		Edit5->Visible = false;
//		Edit4->Text = "Кількість елементів функції y=sin(x)+1 більших за 0.5 і менших за 1: " + FloatToStr(count);
		Edit4->Text = "Кіл-ть елементів: " + IntToStr(count);
		Edit6->Visible = true;
		Edit7->Visible = false;
//		Edit6->Text = "Максимальне значення функції y=sin(x)+1: " + FormatFloat("0.00", max) + " та мінімальне: " + FormatFloat("0.00", min);
		Edit6->Text = "Max: " + FormatFloat("0.00", max) + " and min: " + FormatFloat("0.00", min);
	}
	if (CheckBox4->Checked)
	{
		Edit5->Visible = true;
		Edit4->Visible = false;
//		Edit5->Text = "Кількість елементів функції dy=cos(x) більших за 0.5 і менших за 1: " + FloatToStr(dcount);
		Edit5->Text = "Кіл-ть елементів: " + IntToStr(dcount);
		Edit6->Visible = false;
		Edit7->Visible = true;
//		Edit7->Text = "Максимальне значення функції dy=cos(x): " + FormatFloat("0.00", dmax) + " та мінімальне: " + FormatFloat("0.00", dmin);
		Edit7->Text = "Max: " + FormatFloat("0.00", dmax) + " and min: " + FormatFloat("0.00", dmin);
	}
	if (CheckBox1->Checked && CheckBox4->Checked)
	{
		Edit4->Visible = true;
		Edit5->Visible = true;
		Edit6->Visible = true;
		Edit7->Visible = true;
//		Edit4->Text = "Елементів більших за 0.5 і менших за 1(значення функції y=sin(x)+1): " + FloatToStr(count);
		Edit4->Text = "Кіл-ть елементів: " + IntToStr(count);
//		Edit5->Text = "Елементів більших за 0.5 і менших за 1(значення функції dy=cos(x)): " + FloatToStr(dcount);
		Edit5->Text = "Кіл-ть елементів: " + IntToStr(dcount);
//		Edit6->Text = "Максимальне значення функції y=sin(x)+1: " + FormatFloat("0.00", max) + " та мінімальне: " + FormatFloat("0.00", min);
		Edit6->Text = "Max: " + FormatFloat("0.00", max) + " and min: " + FormatFloat("0.00", min);
//		Edit7->Text = "Максимальне значення функції dy=cos(x): " + FormatFloat("0.00", dmax) + " та мінімальне: " + FormatFloat("0.00", dmin);
		Edit7->Text = "Max: " + FormatFloat("0.00", dmax) + " and min: " + FormatFloat("0.00", dmin);
	}
	  for (int i = 0; i < 100; i++)
		delete[] data[i];
	  delete[] data;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N3Click(TObject *Sender)
{
	Memo1->Clear();
//	Edit1->Clear();
//	Edit2->Clear();
//	Edit3->Clear();
	Edit4->Clear();
	Edit4->Visible = false;
	Edit5->Clear();
	Edit5->Visible = false;
	Edit6->Clear();
	Edit6->Visible = false;
	Edit7->Clear();
	Edit7->Visible = false;
	Label4->Caption = "y=sin(x)+1";
	StringGrid1->Visible = false;
	Chart1->Visible = false;
	Chart2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
	Memo1->Clear();
//	Edit1->Clear();
//	Edit2->Clear();
//	Edit3->Clear();
	Edit4->Clear();
	Edit4->Visible = false;
	Edit5->Clear();
	Edit5->Visible = false;
	Edit6->Clear();
	Edit6->Visible = false;
	Edit7->Clear();
	Edit7->Visible = false;
	Label4->Caption = "y=sin(x)+1";
	StringGrid1->Visible = false;
	Chart1->Visible = false;
	Chart2->Visible = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N9Click(TObject *Sender)
{
	CheckBox1->Checked = true;
	CheckBox2->Checked = true;
	CheckBox3->Checked = true;
	CheckBox4->Checked = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
	CheckBox1->Checked = false;
	CheckBox2->Checked = false;
	CheckBox3->Checked = false;
	CheckBox4->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
	if (CheckBox1->Checked == true)
		CheckBox1->Checked = false;
	else
		CheckBox1->Checked = true;
	if (CheckBox2->Checked == true)
		CheckBox2->Checked = false;
	else
		CheckBox2->Checked = true;
	if (CheckBox3->Checked == true)
		CheckBox3->Checked = false;
	else
		CheckBox3->Checked = true;
	if (CheckBox4->Checked == true)
		CheckBox4->Checked = false;
	else
		CheckBox4->Checked = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
	if (Edit1->Text == "" || Edit2->Text == "" || Edit3->Text == "")
	{
		ShowMessage("Введіть дані!");
		return;
	}
	if (CheckBox4->Checked==false)
	{
		Chart1->Visible = true;
		Chart2->Visible = false;
	}
	if (CheckBox4->Checked)
	{
		Chart2->Visible = true;
		Chart1->Visible = false;
	}
	if (CheckBox1->Checked && CheckBox4->Checked)
	{
		Chart2->Visible = true;
		Chart1->Visible = true;
	}
	float x;
	float a = StrToFloat(Edit1->Text);
	float b = StrToFloat(Edit2->Text);
	float h = StrToFloat(Edit3->Text);
	if (!(a<b))
	{
		ShowMessage("Ліва межа не має бути більшою за праву! Введіть коректні дані!");
		return;
	}
	if (h == 0)
	{
		ShowMessage("Крок не може дорівнювати нулю! Введіть коректні дані!");
		return;
	}
	Series1->Clear();
	Series2->Clear();
	for (x = a; x < b; x += h)
	{
		if (CheckBox4->Checked==false)
			Series1->Add(sin(x) + 1, FormatFloat("0.00", x), clRed);
		else if (CheckBox4->Checked)
			Series2->Add(cos(x), FormatFloat("0.00", x), clRed);
		if (CheckBox1->Checked && CheckBox4->Checked)
		{
			Series1->Add(sin(x) + 1, FormatFloat("0.00", x), clRed);
			Series2->Add(cos(x), FormatFloat("0.00", x), clRed);
        }
	}
}
//---------------------------------------------------------------------------

