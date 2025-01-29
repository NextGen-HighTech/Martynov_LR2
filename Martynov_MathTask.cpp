#include <iostream>
#include "Martynov_MathTask.h"

using namespace std;

int main()
{
    string str_input;
    cout << "input length" << endl;
    getline(cin, str_input);
    while (!UserInput(str_input)) {
        cout << "input length" << endl;
        getline(cin, str_input);
    }
    int length = stoi(str_input);
    cout << "input width" << endl;
    getline(cin, str_input);
    while (!UserInput(str_input)) {
        cout << "input width" << endl;
        getline(cin, str_input);
    }
    int width = stoi(str_input);
    int RectangleArea = CalcRectangleArea(length, width);
    cout << "Area of Rectangle is " << RectangleArea << endl;
}