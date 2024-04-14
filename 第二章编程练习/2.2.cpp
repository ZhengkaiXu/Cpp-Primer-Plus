//
// Created by ZhengkaiXu on 2024/4/14.
//
/*第2章的编程练习2*/
#include<iostream>
using namespace std;
/*预编译指令*/

int main() {
    /*main函数*/
    double distance;
    /*定义变量distance,因为数据可能有小数,所以使用double类型*/
    cout << "Enter the distance (in LONG) : ";
    cin >> distance;
    /*通过cout输出提示，并通过cin读取distance的输入*/
    cout <<"\nThe Distance " << distance << " long";
    cout << " is " << distance * 220 << " yard." << endl;
    /*cout用于输出，并直接在输出语句中计算和转换码的值
     *程序中可以使用cout连接，但是要保证所有数据都是
     *相同的输出数据，例如以上的输出语句*/
    return 0;
}
/*main()函数结束，注意函数返回值和表示结束的右花括号*/