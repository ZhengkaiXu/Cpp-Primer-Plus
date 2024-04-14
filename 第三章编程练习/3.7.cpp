//
// Created by ZhengkaiXu on 2024/4/15.
//
/* 第3章的编程练习 7 */
#include <iostream>
using namespace std;
/* 预编译指令 */
const float GALLON_TO_LITER = 3.875;
const float HKM_TO_MILE = 62.14;
/* 以常量作为数据转换因子 */
int main() {
    float fuel_consume_eur, fuel_consume_us;
    /* 定义变量 */
    cout << "Enter the fuel consume in europe(1/100km): ";
    cin >> fuel_consume_eur;
    fuel_consume_us = HKM_TO_MILE / (fuel_consume_eur / GALLON_TO_LITER);
    /* 将美式油耗转换成欧式油耗 */
    cout << "The fuel consume is " << fuel_consume_eur << "L/100KM." << endl;
    cout << "The fuel consume is " << fuel_consume_us << " mpg(mile/gallon)." << endl;
}