//
// Created by ZhengkaiXu on 2024/4/14.
//
// /*第2章的编程练习*/
#include <iostream>
using namespace std;
/*预编译指令*/

void print_mice(void);
void print_run(void);
/*函数的声明，因为要保证在main()函数内
 *调用函数时，编译器知道该函数的基本信息*/
int main() {
    /*main()函数*/
    print_mice();
    print_mice();
    print_run();
    print_run();
    /*函数调用，main()函数称为主调函数，
     *以上4个函数可以称为被调函数*/
    return 0;
}
/*main()函数结束，注意函数返回值和表示结束的右花括号*/

void print_mice(void) {
    cout << "Three blind mice" << endl;
}

void print_run(void) {
    cout << "See how they run" << endl;
}