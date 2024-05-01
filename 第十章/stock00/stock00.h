//
// Created by ZhengkaiXu on 2024/5/1.
//
// stock00.h -- Stock class interface
#ifndef STOCK00_H
#define STOCK00_H

#include <string>

class Stock { // class declaration
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {
        total_val = shares * share_val;
    }
public:
    void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
}; // note semicolon at the end;
#endif
