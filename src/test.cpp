#include <Windows.h>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
    --------------------------------------------------------------------------------------------------------
    AUTHOR: QUY LE MINH
    UPDATE DATE: 02/28/2023

    IF YOU HAVE ANY ISSUE OR PROBLEM RELATED TO THESE TESTCASES, CONTACT ME VIA: www.facebook.com/quyleemin
    --------------------------------------------------------------------------------------------------------
*/

void assert(string expected, string got, int line, int testcase){
    if (expected!=got){
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        cout << "\u0058 Failed case " << testcase << " at line " << line << ". Expected \"" << expected << "\" got \"" << got  << "\"" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        abort();
    }
}

int main() {
    string s1, s2;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 0; i < 100; i++){
        string expect = "expected" + to_string(i+1) + ".txt";
        string got = "got" + to_string(i+1) + ".txt";

        ifstream output(got);
        ifstream expected(expect);

        int line = 1;

        while (getline(output, got) && getline(expected, expect)){
            assert(expect, got, line, i+1);
            line++;
        }

        if (getline(output, got) || getline(expected, expect)){
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            cout << "\u0058 Maybe you missing something?" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            abort();
        }
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        cout << char(251) << " Passed case " << (i+1) << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    cout << char(251) << " Passed all." << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    return 0;
}
