//
// Created by ZhengkaiXu on 2024/4/14.
//
/* 第3章的编程练习 5 */
#include <iostream>
using namespace std;
/* 预编译指令 */

int main() {
    long long global_amount, american_amount;
    double population_percent;
    /* 定义变量类型选择合适的数据类型 */
    cout << "Enter the world's population: ";
    cin >> global_amount;
    cout << "Enter the population of US: ";
    cin >> american_amount;
    population_percent = 100 * (double) american_amount / (double) global_amount;
    /* 按照百分比显示数据，因此需要先转换成浮点数据，否则除法的结果将是整数 */
    cout << "The population of the US is " << population_percent << "% of the world population.";
    return 0;
};
/* main()函数结束，注意函数返回值和表示结束的右花括号 */