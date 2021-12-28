#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Currency.h"

using namespace std;

const string In_F = "Input_file.txt";
const string Out_F = "Result.txt";

int main()
{
    setlocale(LC_ALL, "Rus");
    //ofstream clearIn(In_F);
    //clearIn.close();
    ofstream clearOut(Out_F);
    clearOut.close();
    
    char Symb;
    double Value, Sum = 0;
    int number_of_lines = 0;
    vector<unique_ptr<Currency>> Currencies;

    ifstream getdata(In_F);
    getdata >> number_of_lines;

    for (int i = 0; i < number_of_lines; i++) {
        getdata >> Symb >> Value;

        switch (Symb) {
        case 'D': {
            Currencies.emplace_back(new Dollar(Value));
        }
        case 'E': {
            Currencies.emplace_back(new Euro(Value));
        }
        }
    }

    getdata.close();
    
    for (auto& Template : Currencies) {
        Template->Convert();
        Sum += Template->GetBack();
    }

    ofstream setdata(Out_F);

    setdata << Sum;

    setdata.close();

    return 0;
}
