//
// Created by ZhengkaiXu on 2024/5/19.
//
// stock20.cpp -- augmented version
#include <iostream>
#include "stock20.h"

// constructors
Stock::Stock() { // default constructor
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string &co, long n, double pr) {
    company = co;

    if (n < 0) {
        std::cout<< "Number of shares can't be negative; "
        << company << " shares set to be 0.\n";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}
// class destructor
Stock::~Stock() { // quiet class destructor
}
// other methods
void Stock::buy(long num, double price) {}