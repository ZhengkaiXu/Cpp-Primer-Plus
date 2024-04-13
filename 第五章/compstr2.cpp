//
// Created by ZhengkaiXu on 2024/4/13.
//
// compstr2.cpp -- comparing strings using arrays
#include <iostream>
#include <string> // stirng class
int main() {
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;

}