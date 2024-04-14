//
// Created by ZhengkaiXu on 2024/4/14.
//
/* 第3章的编程练习 2 */
#include <iostream>
using namespace std;
/* 预编译指令 */
const float KILOGRAM_TO_POUND = 2.2;
const int FOOT_TO_INCH = 12;
const float INCH_TO_METER = 0.0254;
/* 定义符号常量，表示身高、体重的单位转换因子 */

int main() {
    int height_foot,  height_inch;
    /* 用户输入英尺、英寸数据 */
    float weight_pound, height, weight, BMI;
    /* 以磅为单位的体重和存储转换后数据的变量 */
    cout << "Enter your height foot: ";
    cin >> height_foot;
    cout << "Enter your height incs: ";
    cin >> height_inch;
    cout << "Enter your weight in pounds: ";
    cin >> weight_pound;
    /* 通过标准输入读取数据输入 */
    height = (height_foot * FOOT_TO_INCH + height_inch) * INCH_TO_METER;
    weight = weight_pound / KILOGRAM_TO_POUND;
    /* 转换身高、体重数据， C++语言中可以使用括号确保正确的运算顺序 */
    BMI = weight / (height * height);
    /* 计算BMI */
    cout << "Your BMI is " << BMI << endl;
    return 0;

}
/* main()函数结束，注意函数返回值和表示结束的右花括号 */