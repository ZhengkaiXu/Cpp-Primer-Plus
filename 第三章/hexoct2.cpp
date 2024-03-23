//
// Created by xuzhengkai on 2024/3/23.
//
// hexoct2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main() {
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // manipulator for changing number case
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct; // manipulator for changing number case
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}