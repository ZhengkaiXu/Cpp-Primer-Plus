//
// Created by ZhengkaiXu on 2024/4/14.
//
/* 第2章的编程练习6*/
#include <iostream>

using namespace std;
/* 预编译指令 */

double convert(double light);
/* 数据转换函数，将光年转换为天文单位 */

int main() {
    double astro_unit, light_year;
    /* 定义两个double类型的变量，存储光年值和天文单位值 */

    cout << "Enter the number of light years: ";
    cin >> light_year;
    /* 读取系统标准输入，存储到light_year变量中 */
    astro_unit = convert(light_year);
    /* 调用函数进行转换，并将返回值赋给astro_unit变量 */
    cout << light_year << " light year = ";
    cout << astro_unit << " astronomical units." << endl;
    /*输入显示的信息*/
    return 0;
}
/* main()函数结束，注意函数返回值和表示结束的右花括号 */
double convert (double light) {
    return 63240 * light;
}
/* 函数的定义，直接在返回语句中计算和转换 */