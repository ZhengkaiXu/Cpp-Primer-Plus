//
// Created by ZhengkaiXu on 2024/4/29.
//
// choice.cpp -- choosing a template
#include <iostream>
template<class T> // or template <typename>
T lesser(T a, T b) { // #1
    return a < b ? a : b;
}
int lesser (int a, int b) { // #2
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main() {
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl; // use #2
    cout << lesser(x, y) << endl; // use #1
    cout << lesser<>(m, n) << endl; // use #1 with int
    cout << lesser<int>(x, y) << endl; // use #2 with int
    return 0;
}