//
// Created by ZhengkaiXu on 2024/4/13.
//
// forstr1.cpp -- using for with a string
#include <iostream>
int main() {
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // display letters in reverse order
    for (int i = word.size() - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << "\nBye.\n";
    return 0;
}