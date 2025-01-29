#ifndef _MARTYNOV_MATHTASK_H_
#define _MARTYNOV_MATHTASK_H_

#include <string>
#include <cstring>

using namespace std;

//Проверка корректности вводимых данных
bool UserInput(string input) {
    if (input.empty()) return false;
    try {
        int number = stoi(input);
    }
    catch (...) {
        return false;
    }
    return true;
}

// Вычисление площади прямоугольника
int CalcRectangleArea(int length, int width) {
    return length * width;
}
#endif