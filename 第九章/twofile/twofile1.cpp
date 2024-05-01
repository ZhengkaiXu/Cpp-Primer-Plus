//
// Created by ZhengkaiXu on 2024/5/1.
//
// twofile1.cpp -- variables with external and internal linkage
#include <iostream> // to be compiled with two file2.coo
int tom = 3; // external variable definition
int dick = 30; // external variable definition
static int harry = 300; // static. internal linkage

// funtion prototype
void remote_access();

int main() {
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;
}
