//
// Created by ZhengkaiXu on 2024/4/14.
//
/* 第3章编程练习 3 */
#include <iostream>
using namespace std;
/* 预编译命令 */
const int DEGREE_TO_MINUTE = 60;
const int MINUTE_TO_SECOND = 60;
/* 定义符号常量，表示单位转换因子 */

int main() {
    int degree, minute, second;
    float degree_style;
    /* 定义数据变量，选择合适的数据类型表示度 */
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    /* 读取用户的输入数据 */
    degree_style = degree + float(minute) / DEGREE_TO_MINUTE +
            float(second) / (MINUTE_TO_SECOND * DEGREE_TO_MINUTE);
    /* C++语言中，可以使用括号确保正确的运算顺序 */
    cout << degree << " degrees, " << minute << " minutes, "
    << second << " seconds = " << degree_style << " degrees " << endl;
    return 0;
}