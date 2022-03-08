#include "Calc.h"

#include <Windows.h>
#include "DMXfunc.h"

using namespace DMXcalc2;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Calc);
    return 0;
}

int dmx = 0, temp = 0;
int ArrConst[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
int ArrPin[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

int num = 0;
int ch = 0;
int addr = 0;
int un = 1;

System::Void DMXcalc2::Calc::button1_Click(System::Object^ sender, System::EventArgs^ e) {   
    for (int i = 0; i < 9; i++) {
        if (ArrPin[i] != 0) {
            ArrPin[i] = 0;
        }
    }
    dmx = Convert::ToInt32(maskedTextBox1->Text);
    if (dmx > 511) {
        MessageBox::Show("You cannot enter a value greater than 511. Please enter a valid value.", "Error");
        maskedTextBox1->Clear();
    }
    dmxtopin(ArrConst, ArrPin, dmx, &temp);
    
    if (ArrPin[0] == 1)
        progressBar1->Value = ArrPin[0] + 9;
    else
        progressBar1->Value = ArrPin[0];
    if (ArrPin[1] == 1)
        progressBar2->Value = ArrPin[1] + 9;
    else
        progressBar2->Value = ArrPin[1];
    if (ArrPin[2] == 1)
        progressBar3->Value = ArrPin[2] + 9;
    else
        progressBar3->Value = ArrPin[2];
    if (ArrPin[3] == 1)
        progressBar4->Value = ArrPin[3] + 9;
    else
        progressBar4->Value = ArrPin[3];
    if (ArrPin[4] == 1)
        progressBar5->Value = ArrPin[4] + 9;
    else
        progressBar5->Value = ArrPin[4];
    if (ArrPin[5] == 1)
        progressBar6->Value = ArrPin[5] + 9;
    else
        progressBar6->Value = ArrPin[5];
    if (ArrPin[6] == 1)
        progressBar7->Value = ArrPin[6] + 9;
    else
        progressBar7->Value = ArrPin[6];
    if (ArrPin[7] == 1)
        progressBar8->Value = ArrPin[7] + 9;
    else
        progressBar8->Value = ArrPin[7];
    if (ArrPin[8] == 1)
        progressBar9->Value = ArrPin[8] + 9;
    else
        progressBar9->Value = ArrPin[8];
    return System::Void();
}

System::Void DMXcalc2::Calc::progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (progressBar1->Value == 0) {
        progressBar1->Value = 10;
        ArrPin[0] = 1;
    }
    else {
        progressBar1->Value = 0;
        ArrPin[0] = 0;
    }
    return System::Void();
}

System::Void DMXcalc2::Calc::progressBar2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (progressBar2->Value == 0) {
        progressBar2->Value = 10;
        ArrPin[1] = 1;
    }
    else {
        progressBar2->Value = 0;
        ArrPin[1] = 0;
    }
    return System::Void();
}

System::Void DMXcalc2::Calc::progressBar3_Click(System::Object^ sender, System::EventArgs^ e) {
    if (progressBar3->Value == 0) {
        progressBar3->Value = 10;
        ArrPin[2] = 1;
    }
    else {
        progressBar3->Value = 0;
        ArrPin[2] = 0;
    }
    return System::Void();
}

System::Void DMXcalc2::Calc::progressBar4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (progressBar4->Value == 0) {
        progressBar4->Value = 10;
        ArrPin[3] = 1;
    }
    else {
        progressBar4->Value = 0;
        ArrPin[3] = 0;
    }
    return System::Void();
}

System::Void DMXcalc2::Calc::progressBar5_Click(System::Object^ sender, System::EventArgs^ e) {
    if (progressBar5->Value == 0) {
        progressBar5->Value = 10;
        ArrPin[4] = 1;
    }
    else {
        progressBar5->Value = 0;
        ArrPin[4] = 0;
    }
    return System::Void();
}

System::Void DMXcalc2::Calc::progressBar6_Click(System::Object^ sender, System::EventArgs^ e) {
    if (progressBar6->Value == 0) {
        progressBar6->Value = 10;
        ArrPin[5] = 1;
    }
    else {
        progressBar6->Value = 0;
        ArrPin[5] = 0;
    }
    return System::Void();
}

System::Void DMXcalc2::Calc::progressBar7_Click(System::Object^ sender, System::EventArgs^ e) {
    if (progressBar7->Value == 0) {
        progressBar7->Value = 10;
        ArrPin[6] = 1;
    }
    else {
        progressBar7->Value = 0;
        ArrPin[6] = 0;
    }
    return System::Void();
}

System::Void DMXcalc2::Calc::progressBar8_Click(System::Object^ sender, System::EventArgs^ e) {
    if (progressBar8->Value == 0) {
        progressBar8->Value = 10;
        ArrPin[7] = 1;
    }
    else {
        progressBar8->Value = 0;
        ArrPin[7] = 0;
    }
    return System::Void();
}

System::Void DMXcalc2::Calc::progressBar9_Click(System::Object^ sender, System::EventArgs^ e) {
    if (progressBar9->Value == 0) {
        progressBar9->Value = 10;
        ArrPin[8] = 1;
    }
    else {
        progressBar9->Value = 0;
        ArrPin[8] = 0;
    }
    return System::Void();
}

System::Void DMXcalc2::Calc::button3_Click(System::Object^ sender, System::EventArgs^ e) {
    dmx = 0;
    for (int i = 0; i < 9; i++) {
        ArrPin[i] = 0;
    }
    maskedTextBox1->Clear();
    progressBar1->Value = ArrPin[0];
    progressBar2->Value = ArrPin[1];
    progressBar3->Value = ArrPin[2];
    progressBar4->Value = ArrPin[3];
    progressBar5->Value = ArrPin[4];
    progressBar6->Value = ArrPin[5];
    progressBar7->Value = ArrPin[6];
    progressBar8->Value = ArrPin[7];
    progressBar9->Value = ArrPin[8];
    return System::Void();
}

System::Void DMXcalc2::Calc::button4_Click(System::Object^ sender, System::EventArgs^ e) {
    ch = Convert::ToInt32(maskedTextBox3->Text);
    num = Convert::ToInt32(maskedTextBox2->Text);
    un = Convert::ToInt32(maskedTextBox4->Text);
    addr = Convert::ToInt32(maskedTextBox5->Text);
    counter(&num, ch, &addr, &un);
    maskedTextBox2->Clear();
    maskedTextBox2->Text += Convert::ToString(num);
    maskedTextBox4->Clear();
    maskedTextBox4->Text += Convert::ToString(un);
    maskedTextBox5->Clear();
    maskedTextBox5->Text += Convert::ToString(addr);

    return System::Void();
}

System::Void DMXcalc2::Calc::button6_Click(System::Object^ sender, System::EventArgs^ e) {
    ch = Convert::ToInt32(maskedTextBox3->Text);
    num = Convert::ToInt32(maskedTextBox2->Text);
    un = Convert::ToInt32(maskedTextBox4->Text);
    addr = Convert::ToInt32(maskedTextBox5->Text);
    addr = addr - ch;
    --num;
    if (addr < 1 && un > 1 && num > 1) {
        addr = 513 - (512 % ch);
        --un;
    }
    else if (addr < 1 && un == 1) {
        addr = 0;
        MessageBox::Show("This is a minimum address!", "Error");
    }
    else if (num < 1) {
        num = 1;
        addr = addr + ch;
        MessageBox::Show("This is a first fixture!", "Error");
    }
    maskedTextBox2->Clear();
    maskedTextBox2->Text += Convert::ToString(num);
    maskedTextBox4->Clear();
    maskedTextBox4->Text += Convert::ToString(un);
    maskedTextBox5->Clear();
    maskedTextBox5->Text += Convert::ToString(addr);

    return System::Void();
}

System::Void DMXcalc2::Calc::button5_Click(System::Object^ sender, System::EventArgs^ e) {
    maskedTextBox2->Clear();
    maskedTextBox3->Clear();
    maskedTextBox4->Clear();
    maskedTextBox5->Clear();
    num = 1;
    addr = 1;
    ch = 0;
    un = 1;
    
    maskedTextBox2->Text = Convert::ToString(num);
    maskedTextBox3->Text = Convert::ToString(ch);
    maskedTextBox4->Text = Convert::ToString(un);
    maskedTextBox5->Text = Convert::ToString(addr);
    return System::Void();
}


System::Void DMXcalc2::Calc::button2_Click(System::Object^ sender, System::EventArgs^ e) {
    dmx = 0;
    maskedTextBox1->Clear();
    pintodmx(ArrPin, ArrConst, &dmx);
    maskedTextBox1->Text += Convert::ToString(dmx);
    return System::Void();
}



