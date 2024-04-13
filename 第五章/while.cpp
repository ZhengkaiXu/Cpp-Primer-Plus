//
// Created by ZhengkaiXu on 2024/4/13.
//
// while.cpp -- introducing the while loop
#include <iostream>
const int ArSize = 10;
int main() {
    using namespace std;
    char name[ArSize];
    cout << "Your fist name, please: ";
    cin >> name;
    cout << "Here is your name, vericalized and ASCIIized:\n";
    int i = 0; // start at begining of string
    while (name[i] != '\0') { // process to end of string
        cout << name[i] << ": " << int(name[i]) << endl;
        i++; // don't forget this step
    }
    return 0;
}