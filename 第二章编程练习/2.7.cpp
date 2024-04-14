//
// Created by ZhengkaiXu on 2024/4/14.
//
/* 第2章的编程练习7 */
#include <iostream>
using namespace std;
/* 预编译指令 */

void format_print(int hour, int minute);
/* format_print 函数的声明 */

int main() {
    float hours, minutes;
    /* 定义float类型变量，用于存储时间数值 */
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    /* 通过标准化输入，读取数据，并存储对应变量 */
    format_print(hours, minutes);
    /* 函数调用，用于输入格式化数据，函数无返回值 */
    return 0;
}
/* main() 函数结束，注意函数返回值和表示结束的右花括号 */

void format_print(int hour, int minute) {
    cout << "Time: " << hour << ":" << minute << endl;
}
/* 函数的定义，无返回值的函数可以不使用return语句，这样
 * 函数会运行到最后一句，然后自动返回 */