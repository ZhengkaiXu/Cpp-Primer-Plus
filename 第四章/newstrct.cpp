//
// Created by ZhengkaiXu on 2024/4/13.
//
// newstrct.cpp -- structure definition
#include <iostream>
struct inflatable { // structure definition
    char name[20];
    float volume;
    double price;
};
int main() {
    using namespace std;
    inflatable* ps = new inflatable; // allot memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps -> name, 20); // method 1 for member access
    cout << "Enter volumn in cubic feet: ";
    cin >> (*ps).volume; // method 2 for member access
    cout << "Enter price: $";
    cin >> ps -> price;
    cout << "Name: " << (*ps).name << endl; // method 2
    cout << "Volume: " << ps -> volume << " cubic feet\n"; // method 1
    cout << "Price: $" << ps -> price << endl; // method 1
    delete ps; // free memory used by stucture
    return 0;

}
