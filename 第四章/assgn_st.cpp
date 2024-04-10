//
// Created by ZhengkaiXu on 2024/4/11.
//
// assign_st.cpp -- assigning structures
#include <iostream>
struct inflatable {
    char name[20];
    float volumn;
    double price;
};

int main() {
    using namespace std;
    inflatable bouquet = {
            "sunflowers",
            0.20,
            12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet; // assign one structure to another
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    return 0;
}