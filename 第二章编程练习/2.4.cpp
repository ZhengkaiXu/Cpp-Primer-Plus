//
// Created by ZhengkaiXu on 2024/4/14.
//
/*第2章的编程练习4*/
#include <iostream>
using namespace std;
/*预编译指令*/

int main() {
    int years;
    /*定义变量、存储读取的数据，可以使用整型数据*/
    cout << "Enter your age: ";
    cin >> years;
    /*通过cin读取数据，保存至years内*/
    cout << "Your age in months is " << 12 * years;
    return 0;
}